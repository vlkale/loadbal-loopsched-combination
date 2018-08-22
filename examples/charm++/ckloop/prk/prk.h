#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<time.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <random>
#include<stdlib.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include "pup_stl.h"
#include "pup.h"
using namespace std;

#define GEOMETRIC 0
#define SINUSODIAL 1
#define LINEAR 2
#define PATCH 3
#define NEIGHBORS 8

#define MASS 1.0
#define DIPOLES 0
#define Q 1.0
#define EPSILON 0.000001
#define LEN 1.0
#define DT 1.0
#define SLACK 2
#define SUCCESS 1
#define FAIL 0


/* Particle data structure */
struct particle_t {
	public: 
	double   x;    // x coordinate of particle
	double   y;    // y coordinate of particle
	double   v_x;  // component of velocity in x direction
	double   v_y;  // component of velocity in y direction
	double   q;    // charge of the particle
   /* The following variables are used only for verification/debug purposes. One might want not to use these variables and instead just re-read the input and extract the corresponding info */
	double   x0;   // initial position in x
	double   y0;   // initial position in y
	int64_t  initTimestamp; // timstep that particle started participating in simulation
	int64_t  initDirection; // Direction of movement in x direction (+1 for "right", -1 for "left")
	int64_t  particle_ID;   // ID ofparticle
	void pup(PUP::er &p){
		p|x;
		p|y;
		p|v_x;
		p|v_y;
		p|q;
		p|x0;
		p|y0;
		p|initTimestamp;
		p|initDirection;
		p|particle_ID;
	}  
};

struct indices {
	public:
	int x;
	int y;
	indices()
	{ }
	indices(int x_0,int y_0)
	{
		x=x_0;
		y=y_0;
	}
	void pup(PUP::er &p){
		p|x;
		p|y;
    	}
};

particle_t* initializeParticlesGeometric(int64_t n, int64_t g, double rho, int k, int m)
{
	particle_t  *particles;
	int64_t     y, x, p, pi;
	double      A, x_coord, y_coord, rel_x, rel_y, r1_sq, r2_sq, cos_theta, cos_phi;
	int64_t     n_part_column, remainders;
	double      charge;
   
	particles = (particle_t*) malloc(n * sizeof(particle_t));
	if (particles == NULL) {
		printf("ERROR: Could not allocate space for particles\n");
		exit(EXIT_FAILURE);
	}
   
   /* Add appropriate number of particles on each cell in order to form the distribution decribed in the spec. */
   /* In particular, each cell in the i-th column of cells contains p(i) = A * rho^i particles */
	A = n * ((1-rho) / (1-pow(rho, g-1)));
	pi = 0;
   //std::default_random_engine generator;
	//std::uniform_int_distribution<int> distribution(0,g-1);
	srand(100);
	for (x=0; x<g-1; x++) {
		n_part_column = (int64_t) floor(A * pow(rho, x));
	  
		for (p=0; p<n_part_column; p++) {
		 /* arc4random_uniform() avoids bias that would be caused by modulo operation. Note that it uses different random seed every time. */
			y=rand() % (g-1);
			//y = arc4random_uniform(g-1);
			//y = distribution(generator);
			rel_y = 0.5 * LEN;
			y_coord = y * LEN + rel_y;
			rel_x = LEN/2;
			x_coord = x * LEN + rel_x;
		 
			r1_sq = rel_y * rel_y + rel_x * rel_x;
			r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
			cos_theta = rel_x/sqrt(r1_sq);
			cos_phi = (LEN-rel_x)/sqrt(r2_sq);
			charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
		 
			particles[pi].x = x_coord;
			particles[pi].y = y_coord;
			particles[pi].v_x = 0.0;
			particles[pi].v_y = ((double) m) * LEN / DT;
		 /* In the following way we guarantee that the cloud of particles will move always into a particular direction. In essence we check if a particle initially has "positive column of charges" to its left and we assign appopriate sign to the charge. */
			particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
//#ifdef VERIF_AUX
			particles[pi].x0 = x_coord;
			particles[pi].y0 = y_coord;
			particles[pi].initTimestamp = 0;
			particles[pi].initDirection = 1;
			particles[pi].particle_ID = pi;
//#endif
			pi++;
		}
	}
   
   /* Add the rest particles in the first column of cells such that we have exactly n particles */
	remainders = n - pi;
   
	for (y=0; y<remainders; y++) {
		rel_y = 0.5 * LEN;
		y_coord = (y%(g-1)) * LEN + rel_y;
		rel_x = LEN/2;
		x_coord = rel_x;
	  
		r1_sq = rel_y * rel_y + rel_x * rel_x;
		r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
		cos_theta = rel_x/sqrt(r1_sq);
		cos_phi = (LEN-rel_x)/sqrt(r2_sq);
		charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
	  
		particles[pi].x = x_coord;
		particles[pi].y = y_coord;
		particles[pi].v_x = 0.0;
		particles[pi].v_y = ((double) m) * LEN / DT;
		particles[pi].q = (2*k+1) * charge;
//#ifdef VERIF_AUX
		particles[pi].x0 = x_coord;
		particles[pi].y0 = y_coord;
		particles[pi].initTimestamp = 0;
		particles[pi].initDirection = 1;
		particles[pi].particle_ID = pi;
//#endif
		pi++;
	}
	return particles;
}

/* Initialize with a particle distribution where the number of particles per cell-column follows a sinusodial distribution */
particle_t* initializeParticlesSinusodial(int64_t n, int64_t g, int k, int m)
{
	particle_t* particles;
	double      total_weight = 0.0 , step = 2*M_PI / (g-2), current_weight;
	int64_t     x, y;
	int64_t     pi = 0, i, remainders, p, n_part_column;
	double      rel_x, rel_y, r1_sq, r2_sq, cos_phi, cos_theta, x_coord, y_coord, charge;
   
	particles = (particle_t*) malloc(n * sizeof(particle_t));
	if (particles == NULL) {
		printf("ERROR: Could not allocate space for particles\n");
		exit(EXIT_FAILURE);
	}
   
   /* First, find the sum of all the corresponding weights in order to normalize the number of particles later */
	for (i=0; i<=g-2; i++) {
		total_weight += (1 + cos(step * ((double) i)));
	}
   
   /* Iterate over the columns of cells and assign number of particles proportional to the corresponding sinusodial weight */
	//std::default_random_engine generator;
	//std::uniform_int_distribution<int> distribution(0,g-1);
	srand(100);
	for (x=0; x<=g-2; x++) {
		current_weight = (1 + cos(step * ((double) x)));
		n_part_column = (int64_t) floor(n * current_weight / total_weight);
		for (p=0; p < n_part_column; p++) {
			//y = arc4random_uniform(g-1);
			y=rand() % (g-1);
			//y = distribution(generator);
			rel_y = LEN/2;
			y_coord = y * LEN + rel_y;
			rel_x = LEN/2;
			x_coord = x * LEN + rel_x;
		 
			r1_sq = rel_y * rel_y + rel_x * rel_x;
			r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
			cos_theta = rel_x/sqrt(r1_sq);
			cos_phi = (LEN-rel_x)/sqrt(r2_sq);
			charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
		 
			particles[pi].x = x_coord;
			particles[pi].y = y_coord;
			particles[pi].v_x = 0.0;
			particles[pi].v_y = ((double) m) * LEN / DT;
			particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
//#ifdef VERIF_AUX
			particles[pi].x0 = x_coord;
			particles[pi].y0 = y_coord;
			particles[pi].initTimestamp = 0;
			particles[pi].initDirection = 1;
			particles[pi].particle_ID = pi;
//#endif
			pi++;
		 
		}
	}
   
	remainders = n - pi;
	//std::default_random_engine generator_x;
	//std::uniform_int_distribution<int> distribution_x(0,g-1);
	for (i=0; i<remainders; i++) {
		rel_y = LEN/2;
		y=rand() % (g-1);
		//y = arc4random_uniform(g-1);
		//y = distribution(generator);
		y_coord = y * LEN + rel_y;
		rel_x = LEN/2;
		x= rand() %(g-1);
		//x = arc4random_uniform(g-1);
		//x = distribution_x(generator_x);
		x_coord = x * LEN + rel_x;
		
		r1_sq = rel_y * rel_y + rel_x * rel_x;
		r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
		cos_theta = rel_x/sqrt(r1_sq);
		cos_phi = (LEN-rel_x)/sqrt(r2_sq);
		charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
		
		particles[pi].x = x_coord;
		particles[pi].y = y_coord;
		particles[pi].v_x = 0.0;
		particles[pi].v_y = ((double) m) * LEN / DT;
		particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
	//#ifdef VERIF_AUX
		particles[pi].x0 = x_coord;
		particles[pi].y0 = y_coord;
		particles[pi].initTimestamp = 0;
		particles[pi].initDirection = 1;
		particles[pi].particle_ID = pi;
//#endif
		pi++;
	}
	return particles;
   
}

/* Initialize particles with "linearly-decreasing" distribution */
/* The linear function is f(x) = -alpha * x + beta , x in [0,1]*/
particle_t* initializeParticlesLinear(int64_t n, int64_t g, int alpha, int beta, int k, int m )
{
	particle_t* particles;
	double      total_weight = 0.0 , step = 1.0 / (g-2), current_weight;
	int64_t     x, y;
	int64_t     pi = 0, i, remainders, p, n_part_column;
	double      rel_x, rel_y, r1_sq, r2_sq, cos_phi, cos_theta, x_coord, y_coord, charge;
   
	particles = (particle_t*) malloc(n * sizeof(particle_t));
	if (particles == NULL) {
		printf("ERROR: Could not allocate space for particles\n");
		exit(EXIT_FAILURE);
	}
   
   /* First, find the sum of all the corresponding weights in order to normalize the number of particles later */
	for (i=0; i<=g-2; i++) {
		total_weight += (beta - alpha * step * ((double) i));
	}
   
   /* Iterate over the columns of cells and assign number of particles proportional to the corresponding linear weight */
   //std::default_random_engine generator;
   //std::uniform_int_distribution<int> distribution(0,g-1);
	srand(100);
	for (x=0; x<=g-2; x++) {
		current_weight = (beta - alpha * step * ((double) x));
		n_part_column = (int64_t) floor(n * current_weight / total_weight);
		for (p=0; p < n_part_column; p++) {
			y=rand() % (g-1);
			//y = arc4random_uniform(g-1);
			//y = distribution(generator);
			rel_y = LEN/2;
			y_coord = y * LEN + rel_y;
			rel_x = LEN/2;
			x_coord = x * LEN + rel_x;
		 
			r1_sq = rel_y * rel_y + rel_x * rel_x;
			r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
			cos_theta = rel_x/sqrt(r1_sq);
			cos_phi = (LEN-rel_x)/sqrt(r2_sq);
			charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
		 
			particles[pi].x = x_coord;
			particles[pi].y = y_coord;
			particles[pi].v_x = 0.0;
			particles[pi].v_y = ((double) m) * LEN / DT;
			particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
//#ifdef VERIF_AUX
			particles[pi].x0 = x_coord;
			particles[pi].y0 = y_coord;
			particles[pi].initTimestamp = 0;
			particles[pi].initDirection = 1;
			particles[pi].particle_ID = pi;
//#endif
			pi++;
		 
		}
	}
   
	remainders = n - pi;
   
	for (i=0; i<remainders; i++) {
		rel_y = LEN/2;
		y=rand() % (g-1);
		//y = arc4random_uniform(g-1);
		//y = distribution(generator);
		y_coord = y * LEN + rel_y;
		rel_x = LEN/2;
		x=rand() % (g-1);
		//x = arc4random_uniform(g-1);
		//x = distribution(generator);
		x_coord = x * LEN + rel_x;
	  
		r1_sq = rel_y * rel_y + rel_x * rel_x;
		r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
		cos_theta = rel_x/sqrt(r1_sq);
		cos_phi = (LEN-rel_x)/sqrt(r2_sq);
		charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
	  
		particles[pi].x = x_coord;
		particles[pi].y = y_coord;
		particles[pi].v_x = 0.0;
		particles[pi].v_y = ((double) m) * LEN / DT;
		particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
//#ifdef VERIF_AUX
		particles[pi].x0 = x_coord;
		particles[pi].y0 = y_coord;
		particles[pi].initTimestamp = 0;
		particles[pi].initDirection = 1;
		particles[pi].particle_ID = pi;
//#endif
		pi++;
	}
	return particles;
}

/* Initialize uniformly particles within a "patch" */

particle_t* initializeParticlesPatch(int64_t n, int64_t g, int corner_top_left_x, int corner_top_left_y, int corner_bottom_right_x, int corner_bottom_right_y, int k, int m)
{
	particle_t* particles;
	int64_t     x, y;
	int64_t     pi = 0, i, remainders;
	double      rel_x, rel_y, r1_sq, r2_sq, cos_phi, cos_theta, x_coord, y_coord, charge;
   
	particles = (particle_t*) malloc(n * sizeof(particle_t));
	if (particles == NULL) {
		printf("ERROR: Could not allocate space for particles\n");
		exit(EXIT_FAILURE);
	}
   
	int64_t  cells_in_X = corner_bottom_right_x - corner_top_left_x;
	int64_t  cells_in_Y = corner_bottom_right_y - corner_top_left_y;
	int64_t  total_cells  = cells_in_X * cells_in_Y;
	int64_t  particles_per_cell = (int64_t) floor((1.0*n)/total_cells);
   
	for (x = corner_top_left_x; x < corner_bottom_right_x; x++) {
		for (y = corner_top_left_y; y < corner_bottom_right_y; y++) {
			rel_y = LEN/2;
			y_coord = y * LEN + rel_y;
			rel_x = LEN/2;
			x_coord = x * LEN + rel_x;
			r1_sq = rel_y * rel_y + rel_x * rel_x;
			r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
			cos_theta = rel_x/sqrt(r1_sq);
			cos_phi = (LEN-rel_x)/sqrt(r2_sq);
			charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
		 
			for (i=0; i<particles_per_cell; i++) {
				particles[pi].x = x_coord;
				particles[pi].y = y_coord;
				particles[pi].v_x = 0.0;
				particles[pi].v_y = ((double) m) * LEN / DT;
				particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
//#ifdef VERIF_AUX
				particles[pi].x0 = x_coord;
				particles[pi].y0 = y_coord;
				particles[pi].initTimestamp = 0;
				particles[pi].initDirection = 1;
				particles[pi].particle_ID = pi;
//#endif
				pi++;
			}
		}
	}
   
	remainders = n - pi;
	/* Distribute the remaining particles evenly */
	for (x = corner_top_left_x; (x < corner_bottom_right_x) && (pi < n); x++) {
		for (y = corner_top_left_y; (y < corner_bottom_right_y)&& (pi < n); y++) {
			rel_y = LEN/2;
			y_coord = y * LEN + rel_y;
			rel_x = LEN/2;
			x_coord = x * LEN + rel_x;
			r1_sq = rel_y * rel_y + rel_x * rel_x;
			r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
			cos_theta = rel_x/sqrt(r1_sq);
			cos_phi = (LEN-rel_x)/sqrt(r2_sq);
			charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
			
			particles[pi].x = x_coord;
			particles[pi].y = y_coord;
			particles[pi].v_x = 0.0;
			particles[pi].v_y = ((double) m) * LEN / DT;
			particles[pi].q = (x%2 == 0) ? (2*k+1) * charge : -1.0 * (2*k+1) * charge ;
	//#ifdef VERIF_AUX
			particles[pi].x0 = x_coord;
			particles[pi].y0 = y_coord;
			particles[pi].initTimestamp = 0;
			particles[pi].initDirection = 1;
			particles[pi].particle_ID = pi;
	//#endif
			pi++;
		}	
	}
	return particles;
}

/* Initializes the grid of charges */
double * initializeGridInParallel(char mode, int64_t my_start_gp_x, int64_t my_end_gp_x, int64_t my_start_gp_y, int64_t my_end_gp_y)
{
	double * grid;
	int64_t  x, y;
	int64_t  n_columns = my_end_gp_x-my_start_gp_x+1;
	int64_t  n_rows = my_end_gp_y-my_start_gp_y+1;
	
	//cout<<"Initialized grid size: "<<n_columns*n_rows<<endl;
	
	grid = (double*) malloc(n_columns*n_rows*sizeof(double));
	if (grid == NULL) {
		printf("ERROR: Process could not allocate space for grid\n");
		exit(EXIT_FAILURE);
	}
	
	/* So far supporting only initialization with dipoles */
	if (mode == DIPOLES) {
		for (y=0; y<n_rows; y++) {
			for (x=my_start_gp_x; x<=my_end_gp_x; x++) {
				grid[y+(x-my_start_gp_x)*n_rows] = (x%2 == 0) ? Q : -Q;
			}
		}
	}
	return grid;
}

/* Injects particles in a specified area of the simulation domain */
void inject_particles(int64_t injection_timestep, int64_t corner_top_left_x_inj, int64_t corner_bottom_right_x_inj, int64_t corner_top_left_y_inj, int64_t corner_bottom_right_y_inj, int particles_per_cell, vector<particle_t>& particles, int64_t my_start_gp_x, int64_t my_end_gp_x, int64_t my_start_gp_y, int64_t my_end_gp_y)
{
	int64_t  total_injected_particles = 0;
	int64_t  x, y, m_inj = 0, k_inj = 0, pos = particles.size(), i;
	
	for (y=max(my_start_gp_y, corner_top_left_y_inj); y<min(my_end_gp_y,corner_bottom_right_y_inj); y++) {
		for (x= max(my_start_gp_x, corner_top_left_x_inj); x < min(my_end_gp_x,corner_bottom_right_x_inj); x++) {
			total_injected_particles += particles_per_cell;
		}
	}
   
	int64_t  new_size = particles.size() + total_injected_particles;
	double   rel_x, rel_y, r1_sq, r2_sq, cos_phi, cos_theta, x_coord, y_coord, charge;
   
	/* Allocate new array for existing and injected particles */
	particles.resize(new_size);
	
	/* Add particles in the injection area */
	for (y= max(my_start_gp_y, corner_top_left_y_inj); y<min(my_end_gp_y,corner_bottom_right_y_inj); y++) {
		for (x= max(my_start_gp_x, corner_top_left_x_inj); x < min(my_end_gp_x,corner_bottom_right_x_inj); x++) {
			for (i=0; i<particles_per_cell; i++) {
				rel_y = LEN/2;
				y_coord = y * LEN + rel_y;
				rel_x = LEN/2;
				x_coord = x * LEN + rel_x;
				r1_sq = rel_y * rel_y + rel_x * rel_x;
				r2_sq = rel_y * rel_y + (LEN-rel_x) * (LEN-rel_x);
				cos_theta = rel_x/sqrt(r1_sq);
				cos_phi = (LEN-rel_x)/sqrt(r2_sq);
				charge = LEN / ((DT*DT) * Q * (cos_theta/r1_sq + cos_phi/r2_sq));
				particles[pos].x = x_coord;
				particles[pos].y = y_coord;
				particles[pos].v_x = 0.0;
				particles[pos].v_y = ((double) m_inj) * LEN / DT;
				particles[pos].q = (x%2 == 0) ? (2*k_inj+1) * charge : -1.0 * (2*k_inj+1) * charge ;
//#ifdef VERIF_AUX
				particles[pos].x0 = x_coord;
				particles[pos].y0 = y_coord;
				particles[pos].initTimestamp = injection_timestep;
				particles[pos].initDirection = 1;
	//#endif
				pos++;
			}
		}
	}
}

/* Verifies the final position of a particle */
int verifyParticle(particle_t p, double L, int64_t T, int64_t k, int64_t m)
{
	int64_t  total_steps = T - p.initTimestamp;
	double   x_T, y_T, x_periodic, y_periodic;
	
	x_T = (p.initDirection > 0) ? p.x0 + (total_steps * (2*k+1) * LEN) : p.x0 - (total_steps * (2*k+1) * LEN) ;
	y_T = p.y0 + m * LEN * total_steps;

	x_periodic = (x_T >= 0.0) ? fmod(x_T, L) : L + fmod(x_T, L);
	y_periodic = (y_T >= 0.0) ? fmod(y_T, L) : L + fmod(y_T, L);
	
	if ( fabs(p.x - x_periodic) > EPSILON || fabs(p.y - y_periodic) > EPSILON) {
		//printf("Initial is %lf\n", p.x0);
		//printf("Should have been %lf while it is %lf\n", x_periodic, p.x);
		//printf("Should have been %lf while it is %lf\n", y_periodic, p.y);
		//printf("Charge is %lf\n", p.q);

		return FAIL;
	}
	
	return SUCCESS;
}

/* Finds the owner of particle (2D decomposition of processors -- numbering in row major format in the grid of processor) */
indices find_owner(particle_t p, int per_chare_x, int per_chare_y)
{
	int x = (int) floor(p.x/LEN);
	int y = (int) floor(p.y/LEN);
	int color_x = x / per_chare_x;
	int color_y = y / per_chare_y;
	//cout<<"owner of: "<<p.x<<" "<<p.y<<" is: "<<color_x<<" "<<color_y<<endl;
	return (indices(color_x,color_y));
}

/* Removes particles from a specified area of the simulation domain */
void remove_particles_and_validate(int64_t removal_timestep, int64_t corner_top_left_x_rmv, int64_t corner_bottom_right_x_rmv, int64_t corner_top_left_y_rmv, int64_t corner_bottom_right_y_rmv, vector<particle_t>& particles, int64_t *partial_correctness, double *grid, int64_t g, int k, int m,double L, int64_t T )
{
	int64_t  pos = 0, i;
	/* The boundaries of the simulation domain where we have to remove the particles */
	double   left_boundary = LEN * corner_top_left_x_rmv;
	double   right_boundary = LEN * corner_bottom_right_x_rmv;
	double   top_boundary = LEN * corner_top_left_y_rmv;
	double   bottom_boundary = LEN * corner_bottom_right_y_rmv;
	
	for (i = 0; i < particles.size();i++) {
		if ( (particles[i].x > left_boundary) && (particles[i].x < right_boundary) && (particles[i].y > top_boundary) && (particles[i].y < bottom_boundary)) {
			/* We should remove and verify this particle */
			(*partial_correctness) *= verifyParticle(particles[i], L, T, k, m);
		} else {
			/* We should keep the particle */
			particles[pos] = particles[i];
			pos++;
		}
	}
   
	int size=particles.size();
   
	for(i=pos;i<size;i++)
		particles.pop_back();

}
	
/* Computes the Coulomb force among two charges q1 and q2 */
int computeCoulomb(double x_dist, double y_dist, double q1, double q2, double *fx, double *fy)
{
  //cout<<"computeCoulomb"<<endl;
	double   r2 = x_dist * x_dist + y_dist * y_dist;
	double   r = sqrt(r2);
	double   cos_theta = x_dist / r;
	double   sin_theta = y_dist / r;
	double   f_coulomb = q1 * q2 / r2;
	
	(*fx) = f_coulomb * cos_theta;
	(*fy) = f_coulomb * sin_theta;
	//cout<<"computeCoulomb End"<<endl;
	return 0;
}

/* Computes the total Coulomb force on a particle exerted from the charges of the corresponding cell */
int computeTotalForce(particle_t p, int64_t my_start_gp_x, int64_t my_end_gp_x, int64_t my_start_gp_y, int64_t my_end_gp_y, double *grid, double *fx, double *fy)
{
  //cout<<"computeTotalForce"<<endl;
	int64_t  y, x;
	double   tmp_fx, tmp_fy, rel_y, rel_x;
	double   tmp_res_x = 0.0;
	double   tmp_res_y = 0.0;
	int64_t  n_rows = my_end_gp_y-my_start_gp_y+1;
	
	/* Coordinates of the top left cell containing the particle */
	y = (int64_t) floor(p.y/LEN);
	x = (int64_t) floor(p.x/LEN);
	rel_x = p.x - LEN * x;
	rel_y = p.y - LEN * y;
   
   /*Getting the cordinates with respect to the chare's grid*/
	x = x - my_start_gp_x;	
	y = y - my_start_gp_y;
	//cout<<"here"<<x<<" "<<y<<" "<<rel_x<<" "<<rel_y<<endl;
	computeCoulomb(rel_x, rel_y, p.q, grid[y+x*n_rows], &tmp_fx, &tmp_fy);
	
	tmp_res_x += tmp_fx;
	tmp_res_y += tmp_fy;
	
	/* Coulomb force from bottom-left charge */
	computeCoulomb(rel_x, LEN-rel_y, p.q, grid[(y+1)+x*n_rows], &tmp_fx, &tmp_fy);
	tmp_res_x += tmp_fx;
	tmp_res_y -= tmp_fy;
	
	/* Coulomb force from top-right charge */
	computeCoulomb(LEN-rel_x, rel_y, p.q, grid[y+(x+1)*n_rows], &tmp_fx, &tmp_fy);
	tmp_res_x -= tmp_fx;
	tmp_res_y += tmp_fy;
	
	/* Coulomb force from bottom-right charge */
	computeCoulomb(LEN-rel_x, LEN-rel_y, p.q, grid[(y+1)+(x+1)*n_rows], &tmp_fx, &tmp_fy);
	tmp_res_x -= tmp_fx;
	tmp_res_y -= tmp_fy;
	
	(*fx) = tmp_res_x;
	(*fy) = tmp_res_y;
	//cout<<"computeTotalForce End"<<endl;
	return 0;
}

/* Moves a particle given the total acceleration */
int moveParticle(particle_t *particle, double ax, double ay, double L)
{
	double   new_x, new_y;
	
	new_x = particle->x + particle->v_x * DT + 0.5 * ax * DT * DT;
	new_y = particle->y + particle->v_y * DT + 0.5 * ay * DT * DT;
	
	/* Update particle positions */
	/* Take into account periodic boundaries when moving particles */
	particle->x = (new_x >= 0.0) ? fmod(new_x, L) : L + fmod(new_x, L);
	particle->y = (new_y >= 0.0) ? fmod(new_y, L) : L + fmod(new_y, L);
	
   /* Update velocities */
	particle->v_x += ax * DT;
	particle->v_y += ay * DT;
	
	return 0;
}


