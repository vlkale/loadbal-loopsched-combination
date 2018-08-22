#include "liveViz.h"
#include "prk.h"
#include "prk.decl.h"

//TODO: add printf at the bottom of file to print results in column format.
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

#define DEFAULT_STATIC_FRAC 0.5
#define DEFAULT_NUM_CHUNKS 1
#define DEFAULT_OP_NUM 0
#define DEFAULT_CHARE_MULTIPLIER 1

/*readonly*/ CProxy_Main mainProxy;
/*readonly*/ CProxy_Cell cellProxy;
/*readonly*/ int64_t     T ;
/*readonly*/ int64_t     g ;   // dimension of grid
/*readonly*/ int 		chare_dim_x,chare_dim_y;
/*readonly*/ int64_t	per_chare_x,per_chare_y,per_chare_edge_x,per_chare_edge_y;
/*readonly*/ int         removal_mode , injection_mode, injection_timestep, removal_timestep;
/*readonly*/ int         corner_top_left_x_inj, corner_bottom_right_x_inj, corner_top_left_y_inj, corner_bottom_right_y_inj, corner_top_left_x_rmv, corner_bottom_right_x_rmv, corner_top_left_y_rmv, corner_bottom_right_y_rmv;
/*readonly*/ int         particles_per_cell;
/*readonly*/ int         k ;   // determines the speed of "horizontal move" of the particle distribution -- (2*k)+1 cells per time step
/*readonly*/ int         m ;   // determines the speed of "vertical move" of the particle distribution -- m cells per time step

class Main: public CBase_Main {
Main_SDAG_CODE
	public:
	
	double      rho ; // rho parameter for the initial particle distribution
	
	double      L, time_start;       // size of simulation domain
	particle_t  *particles;          // the particles array
	int         particle_mode , alpha, beta, corner_top_left_x, corner_bottom_right_x, corner_top_left_y, corner_bottom_right_y;
	int64_t n;
	int itr;
	Main(CkArgMsg* msg) 
	{
	  __sdag_init();
		time_start= CkWallTimer();
		g = atoi(msg->argv[1]);
		T = atoi(msg->argv[2]);
		n = atoi(msg->argv[3]) ;   // total number of particles in the simulation
		char  *init_mode = msg->argv[4];    // Initialization mode for particles
		chare_dim_x=atoi(msg->argv[5]);
		chare_dim_y=atoi(msg->argv[6]);
		removal_mode = 0;
		injection_mode = 0;
		int arg_offset;
		int64_t c;
		particle_mode=-1;

		L = LEN * (g-1);

		/* Initialize particles with geometric distribution */
		if (strcmp(init_mode, "GEOMETRIC") == 0) {
			cout<<"Entered GEOMETRIC"<<endl;
			rho = atof(msg->argv[7]); // rho parameter for the initial geometric particle distribution
			k = atoi(msg->argv[8]);   // determines the velocity of "horizontal move" of the particle distribution -- (2*k)+1 cells per time step
			m = atoi(msg->argv[9]);   // determines the velocity of "vertical move" of the particle distribution -- m cells per time step
			particle_mode = GEOMETRIC;
			arg_offset = 10;
		}
		/* Initialize with a particle distribution where the number of particles per cell-column follows a sinusodial distribution */
		if (strcmp(init_mode, "SINUSODIAL") == 0) {
			cout<<"Entered SINUSODIAL"<<endl;
			particle_mode = SINUSODIAL;
			k = 0;
			m = 0;
			arg_offset = 7;
		}
   /* Initialize particles with "linearly-decreasing" distribution */
   /* The linear function is f(x) = -alpha * x + beta , x in [0,1]*/
		if (strcmp(init_mode, "LINEAR") == 0) {
			cout<<"Entered LINEAR"<<endl;
			particle_mode = LINEAR;
			k = 0;
			m = 0;
			alpha = atoi(msg->argv[7]);
			beta = atoi(msg->argv[8]);
			arg_offset = 9;
		}
   /* Initialize uniformly particles within a "patch" */
		if (strcmp(init_mode, "PATCH") == 0) {
			cout<<"Entered PATCH"<<endl;
			particle_mode = PATCH;
			k = 0;
			m = 0;
			corner_top_left_x = atoi(msg->argv[7]);
			corner_top_left_y = atoi(msg->argv[8]);
			corner_bottom_right_x = atoi(msg->argv[9]);
			corner_bottom_right_y = atoi(msg->argv[10]);
			arg_offset = 11;
      cout << "Done initializing patch\n";
		}
		/* Check if user requested injection/removal of particles */
		if (msg->argc > arg_offset) {
			if (strcmp(msg->argv[arg_offset], "INJECTION") == 0 ) {
				cout<<"Entered INJECTION"<<endl;
				injection_mode = 1;
				injection_timestep = atoi(msg->argv[arg_offset+1]);
			/* Coordinates that define the simulation area where injection will take place */
				corner_top_left_x_inj = atoi(msg->argv[arg_offset+2]);
				corner_top_left_y_inj = atoi(msg->argv[arg_offset+3]);
				corner_bottom_right_x_inj = atoi(msg->argv[arg_offset+4]);
				corner_bottom_right_y_inj = atoi(msg->argv[arg_offset+5]);
			/* Particles per cell to inject */
				particles_per_cell = atoi(msg->argv[arg_offset+6]);
				printf("Will inject %d particles at timestep %d\n", (corner_bottom_right_x_inj-corner_top_left_x_inj)*(corner_bottom_right_y_inj-corner_top_left_y_inj)*particles_per_cell, injection_timestep);
        arg_offset += 7;
			}
			if (strcmp(msg->argv[arg_offset], "REMOVAL") == 0 ) {
				cout<<"Entered REMOVAL"<<endl;
				removal_mode = 1;
				removal_timestep = atoi(msg->argv[arg_offset+1]);
			/* Coordinates that define the simulation area where the particles will be removed */
				corner_top_left_x_rmv = atoi(msg->argv[arg_offset+2]);
				corner_top_left_y_rmv = atoi(msg->argv[arg_offset+3]);
				corner_bottom_right_x_rmv = atoi(msg->argv[arg_offset+4]);
				corner_bottom_right_y_rmv = atoi(msg->argv[arg_offset+5]);
				arg_offset += 6;
			}
		}

		cout<<"Initialized params:"<<g<<" "<<T<<" "<<n<<" "<<init_mode<<" dimx "<<chare_dim_x<<" dimy "<<chare_dim_y<<endl;

		/*Getting input vars is done: Next step is initializing the grid, particles*/
		/*Creating the 2D chare array*/
		c=g-1;
		per_chare_x=(c+chare_dim_x-1) / chare_dim_x ;
		per_chare_edge_x=c-((chare_dim_x-1) * per_chare_x);
		per_chare_y=(c+chare_dim_y-1) /chare_dim_y;
		per_chare_edge_y=c-((chare_dim_y-1) * per_chare_y);

		//cout<<"Values: per_chare_x= "<<per_chare_x<<"per_chare_y= "<< per_chare_y<<"Edge x= "<<per_chare_edge_x<<" Edge y="<<per_chare_edge_y<<endl;

        CkArrayOptions opts(chare_dim_x, chare_dim_y);
		cellProxy=CProxy_Cell::ckNew(opts);

    CkCallback c1(CkIndex_Cell::colorRegion(0),cellProxy);
    liveVizConfig cfg(liveVizConfig::pix_color,true);
    liveVizInit(cfg,cellProxy,c1, opts);
    /*Initializing the particles*/
    if (particle_mode == GEOMETRIC) {
      particles=initializeParticlesGeometric(n, g, rho, k, m);
    } else if (particle_mode == SINUSODIAL) {
      particles=initializeParticlesSinusodial(n, g, k, m);
    } else if (particle_mode == LINEAR) {
      particles=initializeParticlesLinear(n, g, alpha, beta, k, m);
    } else if (particle_mode == PATCH) {
      particles=initializeParticlesPatch(n, g, corner_top_left_x, corner_top_left_y, corner_bottom_right_x, corner_bottom_right_y, k, m);
    } else {
      printf("Not supported particle distribution\n");
      CkExit();
    }
    //cellProxy.run();
    vector<vector<vector<particle_t> > > neighbors(chare_dim_x, vector<vector<particle_t> >(chare_dim_y));

    for(int i=0;i<n;i++)
      {
	indices owner=find_owner(particles[i], per_chare_x, per_chare_y);
	if (owner.x < 0 || owner.y < 0 || owner.x >= chare_dim_x || owner.y >= chare_dim_y) {
	  CkPrintf("(%d,%d) is out of bound max bound (%d, %d)\n", owner.x, owner.y, chare_dim_x, chare_dim_y);
	  CkAbort("Owner is out of bound\n");
	}
	neighbors[owner.x][owner.y].push_back(particles[i]);
      }

    liveViz_support();
    for(int i=0;i<chare_dim_x;i++)
      for(int j=0;j<chare_dim_y;j++)
	cellProxy(i,j).initializeParticles(neighbors[i][j]);
    free(particles);
    delete msg;
	}

  void validation(int result)
  {
    int sum_particleId=n*(n-1)/2;
    if(result==sum_particleId)
      cout<<"***********************************Successful validation and value of result is:"<<result<<endl;
    else
      cout<<"***********************************Failed validation and value of result is:"<<result<<endl;
  }

  void statistics(double result)
  {
    cout<<"*************************************Time taken per step:"<<result/(T*chare_dim_x*chare_dim_y)<<" sec"<<endl;
  }

  void completed(int result)
  {
    if(result==1)
      cout<<"***********************************Successful and value of result is:"<<result<<endl;
    else
      cout<<"***********************************Failed and value of result is:"<<result<<endl;
    double time_end= CkWallTimer();
    cout<<"*************************************Total Time taken for execution:"<<time_end-time_start<<" sec"<<endl;
    CkExit();
  }

  void done_initialization() {
          time_start = CkWallTimer();
          cellProxy.run();
  }
};

class Cell: public CBase_Cell {
Cell_SDAG_CODE
	public:
	double      *grid;               // the grid is represented as an array of charges
	vector<particle_t> particles;          // the particles array
	char        mode ;      //Initialization of grid
	int64_t     my_start_gp_x, my_start_gp_y, my_end_gp_y, my_end_gp_x;
	double      my_start_x, my_end_x,my_start_y, my_end_y;
	int 		x_cord,y_cord;
	indices     my_top_left_nb, my_top_nb, my_top_right_nb, my_bottom_left_nb, my_bottom_right_nb, my_bottom_nb, my_left_nb, my_right_nb;
	vector<indices>		my_neighbors;
	int 		time, particle_itr, noNeighbours;	/*Iterators for the .ci code*/
	int64_t 	partial_correctness;  /*To test the correctness of the code*/
	double   	L;
	double simulation_time;
	int64_t my_chare_x, my_chare_y;
    	Cell() {
		__sdag_init();
    usesAtSync = true;
    //usesAutoMeasure = false;
		my_neighbors.resize(8);
		mode=DIPOLES;
		L = (g-1) * LEN;
		partial_correctness = 1;

		x_cord=thisIndex.x;
		y_cord=thisIndex.y;
		my_chare_x=(x_cord== chare_dim_x-1) ? per_chare_edge_x : per_chare_x;
		my_chare_y = (y_cord == chare_dim_y -1) ? per_chare_edge_y : per_chare_y;
		my_start_gp_x = x_cord * per_chare_x;
		my_start_gp_y = y_cord * per_chare_y;

		my_end_gp_x = my_start_gp_x + my_chare_x;
		my_end_gp_y = my_start_gp_y + my_chare_y;

		my_start_x = my_start_gp_x * LEN;
		my_start_y = my_start_gp_y * LEN;
		my_end_x = my_end_gp_x *LEN;
		my_end_y = my_end_gp_y * LEN;

		//cout<<"Initialized x_cord: "<<x_cord<<" y_cord:"<<y_cord<<" my_chare_x="<<my_chare_x<<" my_chare_y="<<my_chare_y<<" (my_start_gp_x,my_end_gp_x)="<<my_start_gp_x<<","<<my_end_gp_x<<" (my_start_gp_y,my_end_gp_y)="<<my_start_gp_y<<","<<my_end_gp_y<<endl;
		/*Neighbors of this chare*/
		my_top_left_nb = indices(x_cord>0 ? x_cord-1: chare_dim_x-1, y_cord>0? y_cord-1:chare_dim_y-1);
		my_neighbors[0]=my_top_left_nb;
		my_top_nb = indices(x_cord, y_cord>0? y_cord-1:chare_dim_y-1);
		my_neighbors[1]=my_top_nb;
		my_top_right_nb = indices(x_cord< chare_dim_x-1 ? x_cord+1 : 0, y_cord>0? y_cord-1:chare_dim_y-1);
		my_neighbors[2]=my_top_right_nb;
		my_left_nb = indices(x_cord>0 ? x_cord-1: chare_dim_x-1, y_cord);
		my_neighbors[3]= my_left_nb;
		my_right_nb = indices(x_cord< chare_dim_x-1 ? x_cord+1 : 0, y_cord);
		my_neighbors[4]= my_right_nb;
		my_bottom_left_nb = indices(x_cord>0 ? x_cord-1: chare_dim_x-1, y_cord< chare_dim_y-1? y_cord+1:0);
		my_neighbors[5]=my_bottom_left_nb;
		my_bottom_nb = indices(x_cord, y_cord< chare_dim_y-1? y_cord+1:0);
		my_neighbors[6]= my_bottom_nb;
		my_bottom_right_nb = indices(x_cord< chare_dim_x-1 ? x_cord+1 : 0, y_cord< chare_dim_y-1? y_cord+1:0);
		my_neighbors[7]= my_bottom_right_nb;

		//cout<<"Neighbors are:"<<endl;
		//for(int j=0;j<8;j++)
			//cout<<"    "<<my_neighbors[j].x<<" "<<my_neighbors[j].y<<endl;
		grid=initializeGridInParallel(mode, my_start_gp_x, my_end_gp_x, my_start_gp_y, my_end_gp_y);
	}

	Cell(CkMigrateMessage* m) {
    usesAtSync = true;
    //usesAutoMeasure = false;
  }

	void pup(PUP::er &p)
	{
		CBase_Cell::pup(p);
		__sdag_pup(p);
		p|my_start_gp_x;
		p|my_start_gp_y;
		p|my_end_gp_x;
		p|my_end_gp_y;
		p|my_start_x;
		p|my_start_y;
		p|my_end_x;
		p|my_end_y;
		if(p.isUnpacking())
		{
			grid=new double[(my_end_gp_y-my_start_gp_y+1)*(my_end_gp_x-my_start_gp_x+1)];
		}
		p(grid, (my_end_gp_y-my_start_gp_y+1)*(my_end_gp_x-my_start_gp_x+1));
		p|particles;
		p|x_cord;
		p|y_cord;
		p|my_neighbors;
		p|time;
		p|particle_itr;
		p|noNeighbours;
		p|mode;
		p|L;
		p|partial_correctness;
	}

  void UserSetLBLoad() {
    setObjTime(particles.size());
  }

	void colorRegion(liveVizRequestMsg *m)
	{
    //cout<<"Entered"<<endl;
		int thisX=thisIndex.x;
		int thisY=thisIndex.y;
		//cout<<"hey"<<endl;
		int width = (int)(LEN*my_chare_x );
		int height = (int) (LEN*my_chare_y );
		//cout<<"hey 1"<<endl;
		int width_x = (int) (LEN*per_chare_x );
		int width_y = (int) (LEN*per_chare_y );

		//cout<<" width is: "<<width<<" height is: "<<height<<" width_x is: "<<width_x<<" width_y is: "<<width_y<<endl;

		double actual_x = thisX*LEN*per_chare_x;
		double actual_y = thisY*LEN*per_chare_y;
		int dist_x = thisX*width_x;
		int dist_y = thisY*width_y;

		unsigned char rgb[3*width*height];

		memset(rgb,0,3*width*height);
		for(int i=0;i<particles.size();i++)
		{
			int rel_x = (int)((particles[i].x - actual_x ));
			int rel_y = (int) ((particles[i].y - actual_y ));
			//cout<<" width is: "<<width<<" height is: "<<height<<" relx:"<<rel_x<<" rely:"<<rel_y<<endl;
			if(3*(rel_x + rel_y*width) < 3*width*height)
			{
			  rgb[3*(rel_x + rel_y*width)]=255;
			  rgb[3*(rel_x + rel_y*width)+1]=255;
			  rgb[3*(rel_x + rel_y*width)+2]=255;
			}
		}
		//liveVizDeposit(m, sx,sy, w,h, rgb, this);
		liveVizDeposit(m, dist_x,dist_y, width,height, rgb, this);
    //cout<<"done"<<endl;
	}

	void compute_displacement_forces()
    {
        //cout<<"compute_displacement_forces"<<endl;

        for(particle_itr=0;particle_itr<particles.size();particle_itr++) {
            double fx = 0.0;
            double fy = 0.0;
            computeTotalForce(particles[particle_itr], my_start_gp_x, my_end_gp_x, my_start_gp_y, my_end_gp_y, grid, &fx, &fy);
            double ax = fx * MASS;
            double ay = fy * MASS;
            moveParticle(&particles[particle_itr], ax, ay, L);
        }
        //cout<<"compute_displacement_forces End"<<endl;
    }

	void sendParticles()
	{
		vector<particle_t> neighbors[NEIGHBORS];
		int i=0;
		//if(x_cord==4 && y_cord==1)
		//cout<<"Entered : indices="<<x_cord<<" "<<y_cord<<" particles_size:"<<particles.size()<<endl;
		for(i=0;i<particles.size();)
		{
			indices owner=find_owner(particles[i], per_chare_x, per_chare_y);
			//if(x_cord==4 && y_cord==1)
			//cout<<x_cord<<" "<<y_cord<<"stuck "<<owner.x<<" "<<owner.y<<" particles size is: "<<particles.size()<<endl;
			int flag=0;
			for(int j=0;j<NEIGHBORS;j++)
			{
				if(owner.x == my_neighbors[j].x && owner.y == my_neighbors[j].y)
				{
					neighbors[j].push_back(particles[i]);
					particles[i]=particles[particles.size()-1];
					particles.pop_back();
					//if(x_cord==4 && y_cord==1)
					//cout<<"Flag=true neighbor found:"<<my_neighbors[j].x<<" "<<my_neighbors[j].y<<" And particles size: "<<particles.size()<<" and time iteration is: "<<time<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				i++;
				//cout<<"falg is false and i  is:"<<i<<" and particles.size()="<<particles.size()<<" and time iteration is: "<<time<<endl;
			}
		}

		for(i=0;i<NEIGHBORS;i++)
			cellProxy(my_neighbors[i].x, my_neighbors[i].y).receiveParticles(time,neighbors[i]);
	}

	void compute_correctness()
	{
		for(particle_itr =0;particle_itr<particles.size();particle_itr++)
		{
	    		partial_correctness=partial_correctness*verifyParticle(particles[particle_itr], L, T, k, m);
			//cout<<partial_correctness<<endl;
		}
		if(!(injection_mode || removal_mode))
		{
			int val=0;
		  	for(int i=0;i<particles.size();i++)
		    		val+=particles[i].particle_ID;
	    		CkCallback cb(CkReductionTarget(Main, validation), mainProxy);
      			contribute(sizeof(int), &val, CkReduction::sum_int, cb);
    		}
    		CkCallback cb2(CkReductionTarget(Main, statistics), mainProxy);
    		contribute(sizeof(double), &simulation_time, CkReduction::sum_double, cb2);
    		CkCallback cb1(CkReductionTarget(Main, completed), mainProxy);
    		contribute(sizeof(int), &partial_correctness, CkReduction::product_int, cb1);
	}
};

#include "prk.def.h"
