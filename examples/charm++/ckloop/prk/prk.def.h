
























/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::completed_2_closure : public SDAG::Closure {
      int result;


      completed_2_closure() {
        init();
      }
      completed_2_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return result;}
      void pup(PUP::er& __p) {
        __p | result;
        packClosure(__p);
      }
      virtual ~completed_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(completed_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::validation_3_closure : public SDAG::Closure {
      int result;


      validation_3_closure() {
        init();
      }
      validation_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return result;}
      void pup(PUP::er& __p) {
        __p | result;
        packClosure(__p);
      }
      virtual ~validation_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(validation_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::statistics_4_closure : public SDAG::Closure {
      double result;


      statistics_4_closure() {
        init();
      }
      statistics_4_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return result;}
      void pup(PUP::er& __p) {
        __p | result;
        packClosure(__p);
      }
      virtual ~statistics_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(statistics_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_initialization_5_closure : public SDAG::Closure {
      

      done_initialization_5_closure() {
        init();
      }
      done_initialization_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_initialization_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_initialization_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::liveViz_support_6_closure : public SDAG::Closure {
      

      liveViz_support_6_closure() {
        init();
      }
      liveViz_support_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~liveViz_support_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(liveViz_support_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::initializeParticles_3_closure : public SDAG::Closure {
      std::vector<particle_t > incoming;


      initializeParticles_3_closure() {
        init();
      }
      initializeParticles_3_closure(CkMigrateMessage*) {
        init();
      }
      std::vector<particle_t > & getP0() { return incoming;}
      void pup(PUP::er& __p) {
        __p | incoming;
        packClosure(__p);
      }
      virtual ~initializeParticles_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(initializeParticles_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::receiveParticles_4_closure : public SDAG::Closure {
      int time;
      std::vector<particle_t > incoming;


      receiveParticles_4_closure() {
        init();
      }
      receiveParticles_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return time;}
      std::vector<particle_t > & getP1() { return incoming;}
      void pup(PUP::er& __p) {
        __p | time;
        __p | incoming;
        packClosure(__p);
      }
      virtual ~receiveParticles_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveParticles_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::ResumeFromSync_5_closure : public SDAG::Closure {
      

      ResumeFromSync_5_closure() {
        init();
      }
      ResumeFromSync_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeFromSync_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeFromSync_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Cell::run_6_closure : public SDAG::Closure {
      

      run_6_closure() {
        init();
      }
      run_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Cell cellProxy;
 */
extern CProxy_Cell cellProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cellProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cellProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t T;
 */
extern int64_t T;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_T(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|T;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t g;
 */
extern int64_t g;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_g(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|g;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int chare_dim_x;
 */
extern int chare_dim_x;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_chare_dim_x(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|chare_dim_x;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int chare_dim_y;
 */
extern int chare_dim_y;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_chare_dim_y(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|chare_dim_y;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t per_chare_x;
 */
extern int64_t per_chare_x;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_per_chare_x(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|per_chare_x;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t per_chare_y;
 */
extern int64_t per_chare_y;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_per_chare_y(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|per_chare_y;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t per_chare_edge_x;
 */
extern int64_t per_chare_edge_x;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_per_chare_edge_x(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|per_chare_edge_x;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int64_t per_chare_edge_y;
 */
extern int64_t per_chare_edge_y;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_per_chare_edge_y(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|per_chare_edge_y;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int removal_mode;
 */
extern int removal_mode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_removal_mode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|removal_mode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int injection_mode;
 */
extern int injection_mode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_injection_mode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|injection_mode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int injection_timestep;
 */
extern int injection_timestep;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_injection_timestep(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|injection_timestep;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int removal_timestep;
 */
extern int removal_timestep;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_removal_timestep(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|removal_timestep;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_top_left_x_inj;
 */
extern int corner_top_left_x_inj;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_top_left_x_inj(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_top_left_x_inj;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_bottom_right_x_inj;
 */
extern int corner_bottom_right_x_inj;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_bottom_right_x_inj(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_bottom_right_x_inj;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_top_left_y_inj;
 */
extern int corner_top_left_y_inj;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_top_left_y_inj(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_top_left_y_inj;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_bottom_right_y_inj;
 */
extern int corner_bottom_right_y_inj;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_bottom_right_y_inj(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_bottom_right_y_inj;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_top_left_x_rmv;
 */
extern int corner_top_left_x_rmv;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_top_left_x_rmv(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_top_left_x_rmv;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_bottom_right_x_rmv;
 */
extern int corner_bottom_right_x_rmv;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_bottom_right_x_rmv(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_bottom_right_x_rmv;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_top_left_y_rmv;
 */
extern int corner_top_left_y_rmv;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_top_left_y_rmv(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_top_left_y_rmv;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int corner_bottom_right_y_rmv;
 */
extern int corner_bottom_right_y_rmv;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_corner_bottom_right_y_rmv(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|corner_bottom_right_y_rmv;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int particles_per_cell;
 */
extern int particles_per_cell;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_particles_per_cell(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|particles_per_cell;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int k;
 */
extern int k;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_k(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|k;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int m;
 */
extern int m;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_m(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|m;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void completed(int result);
void validation(int result);
void statistics(double result);
void done_initialization();
void liveViz_support();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void completed(int result);
 */

void CProxy_Main::completed(int result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_completed_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_completed_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_completed_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}

void CkIndex_Main::_call_redn_wrapper_completed_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->completed(result);
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_completed_marshall2() {
  int epidx = CkRegisterEp("completed(int result)",
      _call_completed_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_completed_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_completed_marshall2);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_completed_marshall2() {
  return CkRegisterEp("redn_wrapper_completed(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_completed_marshall2, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_completed_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->completed(result);
}

int CkIndex_Main::_callmarshall_completed_marshall2(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->completed(result);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_completed_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP|result;
}
PUPable_def(SINGLE_ARG(Closure_Main::completed_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void validation(int result);
 */

void CProxy_Main::validation(int result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_validation_marshall3(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_validation_marshall3(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_validation_marshall3(), impl_msg, &ckGetChareID(),0);
  }
}

void CkIndex_Main::_call_redn_wrapper_validation_marshall3(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->validation(result);
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_validation_marshall3() {
  int epidx = CkRegisterEp("validation(int result)",
      _call_validation_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_validation_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_validation_marshall3);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_validation_marshall3() {
  return CkRegisterEp("redn_wrapper_validation(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_validation_marshall3, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_validation_marshall3(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->validation(result);
}

int CkIndex_Main::_callmarshall_validation_marshall3(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->validation(result);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_validation_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP|result;
}
PUPable_def(SINGLE_ARG(Closure_Main::validation_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void statistics(double result);
 */

void CProxy_Main::statistics(double result, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_statistics_marshall4(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_statistics_marshall4(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_statistics_marshall4(), impl_msg, &ckGetChareID(),0);
  }
}

void CkIndex_Main::_call_redn_wrapper_statistics_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  double result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->statistics(result);
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_statistics_marshall4() {
  int epidx = CkRegisterEp("statistics(double result)",
      _call_statistics_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_statistics_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_statistics_marshall4);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_statistics_marshall4() {
  return CkRegisterEp("redn_wrapper_statistics(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_statistics_marshall4, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_statistics_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  double result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->statistics(result);
}

int CkIndex_Main::_callmarshall_statistics_marshall4(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  double result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->statistics(result);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_statistics_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double result*/
  PUP::fromMem implP(impl_buf);
  double result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP|result;
}
PUPable_def(SINGLE_ARG(Closure_Main::statistics_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done_initialization();
 */

void CProxy_Main::done_initialization(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_initialization_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_initialization_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_initialization_void(), impl_msg, &ckGetChareID(),0);
  }
}

void CkIndex_Main::_call_redn_wrapper_done_initialization_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->done_initialization();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_done_initialization_void() {
  int epidx = CkRegisterEp("done_initialization()",
      _call_done_initialization_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_done_initialization_void() {
  return CkRegisterEp("redn_wrapper_done_initialization(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_done_initialization_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_done_initialization_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->done_initialization();
}
PUPable_def(SINGLE_ARG(Closure_Main::done_initialization_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveViz_support();
 */

void CProxy_Main::liveViz_support(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_liveViz_support_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_liveViz_support_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_liveViz_support_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function

int CkIndex_Main::reg_liveViz_support_void() {
  int epidx = CkRegisterEp("liveViz_support()",
      _call_liveViz_support_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_liveViz_support_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->liveViz_support();
}
PUPable_def(SINGLE_ARG(Closure_Main::liveViz_support_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void completed(int result);
  idx_completed_marshall2();
  idx_redn_wrapper_completed_marshall2();

  // REG: void validation(int result);
  idx_validation_marshall3();
  idx_redn_wrapper_validation_marshall3();

  // REG: void statistics(double result);
  idx_statistics_marshall4();
  idx_redn_wrapper_statistics_marshall4();

  // REG: void done_initialization();
  idx_done_initialization_void();
  idx_redn_wrapper_done_initialization_void();

  // REG: void liveViz_support();
  idx_liveViz_support_void();

  Main::__sdag_register(); // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Main::liveViz_support() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _atomic_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::liveViz_support_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_atomic_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_atomic_0()), CkMyPe(), 0, NULL, this); 
  _TRACE_END_EXECUTE(); 
  liveViz_support_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_pup(PUP::er &p) { // Potentially missing Main_SDAG_CODE in your class definition?
#if CMK_USING_XLC
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
#else
    p|__dep;
#endif
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_register() { // Potentially missing Main_SDAG_CODE in your class definition?
  (void)_sdag_idx_Main_atomic_0();
  PUPable_reg(SINGLE_ARG(Closure_Main::completed_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::validation_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::statistics_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::done_initialization_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::liveViz_support_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::completed_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::validation_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::statistics_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::done_initialization_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::liveViz_support_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_atomic_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_atomic_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_atomic_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_atomic_0", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Cell: ArrayElement{
Cell();
void colorRegion(liveVizRequestMsg* impl_msg);
void initializeParticles(const std::vector<particle_t > &incoming);
void receiveParticles(int time, const std::vector<particle_t > &incoming);
void ResumeFromSync();
void run();
Cell(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Cell::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

void CProxySection_Cell::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell();
 */

void CProxyElement_Cell::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Cell::idx_Cell_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colorRegion(liveVizRequestMsg* impl_msg);
 */

void CProxyElement_Cell::colorRegion(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_colorRegion_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initializeParticles(const std::vector<particle_t > &incoming);
 */

void CProxyElement_Cell::initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_initializeParticles_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */

void CProxyElement_Cell::receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int time, const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_receiveParticles_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync();
 */

void CProxyElement_Cell::ResumeFromSync(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */

void CProxyElement_Cell::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell();
 */

CkArrayID CProxy_Cell::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell::idx_Cell_void(), opts);
  return gId;
}

void CProxy_Cell::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell::idx_Cell_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_Cell::ckNew(const int s1, const int s2, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell::idx_Cell_void(), opts);
  return gId;
}

void CProxy_Cell::ckNew(const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell::idx_Cell_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_Cell::reg_Cell_void() {
  int epidx = CkRegisterEp("Cell()",
      _call_Cell_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_Cell_void(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Cell();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colorRegion(liveVizRequestMsg* impl_msg);
 */

void CProxy_Cell::colorRegion(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_colorRegion_liveVizRequestMsg(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_colorRegion_liveVizRequestMsg() {
  int epidx = CkRegisterEp("colorRegion(liveVizRequestMsg* impl_msg)",
      _call_colorRegion_liveVizRequestMsg, CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Cell::_call_colorRegion_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  impl_obj->colorRegion((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initializeParticles(const std::vector<particle_t > &incoming);
 */

void CProxy_Cell::initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_initializeParticles_marshall3(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_initializeParticles_marshall3() {
  int epidx = CkRegisterEp("initializeParticles(const std::vector<particle_t > &incoming)",
      _call_initializeParticles_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initializeParticles_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initializeParticles_marshall3);

  return epidx;
}


void CkIndex_Cell::_call_initializeParticles_marshall3(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Cell::initializeParticles_3_closure* genClosure = new Closure_Cell::initializeParticles_3_closure();
  implP|genClosure->incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->initializeParticles(genClosure);
  genClosure->deref();
}

int CkIndex_Cell::_callmarshall_initializeParticles_marshall3(char* impl_buf, void* impl_obj_void) {
  Cell* impl_obj = static_cast< Cell *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Cell::initializeParticles_3_closure* genClosure = new Closure_Cell::initializeParticles_3_closure();
  implP|genClosure->incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->initializeParticles(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Cell::_marshallmessagepup_initializeParticles_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<particle_t > &incoming*/
  PUP::fromMem implP(impl_buf);
  std::vector<particle_t > incoming; implP|incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("incoming");
  implDestP|incoming;
}
PUPable_def(SINGLE_ARG(Closure_Cell::initializeParticles_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */

void CProxy_Cell::receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int time, const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_receiveParticles_marshall4(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_receiveParticles_marshall4() {
  int epidx = CkRegisterEp("receiveParticles(int time, const std::vector<particle_t > &incoming)",
      _call_receiveParticles_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveParticles_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveParticles_marshall4);

  return epidx;
}


void CkIndex_Cell::_call_receiveParticles_marshall4(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Cell::receiveParticles_4_closure* genClosure = new Closure_Cell::receiveParticles_4_closure();
  implP|genClosure->time;
  implP|genClosure->incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->receiveParticles(genClosure);
  genClosure->deref();
}

int CkIndex_Cell::_callmarshall_receiveParticles_marshall4(char* impl_buf, void* impl_obj_void) {
  Cell* impl_obj = static_cast< Cell *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Cell::receiveParticles_4_closure* genClosure = new Closure_Cell::receiveParticles_4_closure();
  implP|genClosure->time;
  implP|genClosure->incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->receiveParticles(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Cell::_marshallmessagepup_receiveParticles_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int time, const std::vector<particle_t > &incoming*/
  PUP::fromMem implP(impl_buf);
  int time; implP|time;
  std::vector<particle_t > incoming; implP|incoming;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("time");
  implDestP|time;
  if (implDestP.hasComments()) implDestP.comment("incoming");
  implDestP|incoming;
}
PUPable_def(SINGLE_ARG(Closure_Cell::receiveParticles_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync();
 */

void CProxy_Cell::ResumeFromSync(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_ResumeFromSync_void(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_ResumeFromSync_void() {
  int epidx = CkRegisterEp("ResumeFromSync()",
      _call_ResumeFromSync_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_ResumeFromSync_void(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ResumeFromSync();
}
PUPable_def(SINGLE_ARG(Closure_Cell::ResumeFromSync_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */

void CProxy_Cell::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_run_void(),0);
}

// Entry point registration function

int CkIndex_Cell::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      _call_run_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->run();
}
PUPable_def(SINGLE_ARG(Closure_Cell::run_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Cell::reg_Cell_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell(CkMigrateMessage* impl_msg)",
      _call_Cell_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Cell::_call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell *>(impl_obj_void);
  call_migration_constructor<Cell> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void colorRegion(liveVizRequestMsg* impl_msg);
 */

void CProxySection_Cell::colorRegion(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_colorRegion_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initializeParticles(const std::vector<particle_t > &incoming);
 */

void CProxySection_Cell::initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_initializeParticles_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */

void CProxySection_Cell::receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int time, const std::vector<particle_t > &incoming
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|time;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<particle_t > &)incoming;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_receiveParticles_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync();
 */

void CProxySection_Cell::ResumeFromSync(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */

void CProxySection_Cell::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Cell();
  idx_Cell_void();
  CkRegisterDefaultCtor(__idx, idx_Cell_void());

  // REG: void colorRegion(liveVizRequestMsg* impl_msg);
  idx_colorRegion_liveVizRequestMsg();

  // REG: void initializeParticles(const std::vector<particle_t > &incoming);
  idx_initializeParticles_marshall3();

  // REG: void receiveParticles(int time, const std::vector<particle_t > &incoming);
  idx_receiveParticles_marshall4();

  // REG: void ResumeFromSync();
  idx_ResumeFromSync_void();

  // REG: void run();
  idx_run_void();

  // REG: Cell(CkMigrateMessage* impl_msg);
  idx_Cell_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell_CkMigrateMessage());

  Cell::__sdag_register(); // Potentially missing Cell_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Cell::initializeParticles(std::vector<particle_t > incoming){
  Closure_Cell::initializeParticles_3_closure* genClosure = new Closure_Cell::initializeParticles_3_closure();
  genClosure->getP0() = incoming;
  initializeParticles(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::initializeParticles(Closure_Cell::initializeParticles_3_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::initializeParticles_end(Closure_Cell::initializeParticles_3_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_0(Closure_Cell::initializeParticles_3_closure* gen0) {
  _atomic_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_0_end(Closure_Cell::initializeParticles_3_closure* gen0) {
  initializeParticles_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_0(Closure_Cell::initializeParticles_3_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_0()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  {
    std::vector<particle_t >& incoming = gen0->getP0();
    { // begin serial block
#line 51 "prk.ci"

            //if(x_cord==4 && y_cord==1)
            if (incoming.size() > 0)
                CkPrintf("%d %d on PE %d: Received particles of size %d \n",x_cord,y_cord,CkMyPe(), incoming.size());
            particles=incoming;
            CkCallback cb(CkReductionTarget(Main, done_initialization), mainProxy);
            contribute(cb);
        
#line 1722 "prk.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::run() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::run_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_1() {
  _atomic_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_1_end() {
  run_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_1() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_1()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 64 "prk.ci"

      simulation_time=CkWallTimer();
    
#line 1769 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_0() {
  time=0;
  if ( time<T) {
    _slist_2();
  } else {
    _atomic_8();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_0_end() {
   time++;
  if ( time<T) {
    _slist_2();
  } else {
    _atomic_8();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_2() {
  _atomic_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_2_end() {
  _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_2() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_2()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 69 "prk.ci"

				if(x_cord==0 && y_cord==1 && time%10==0)
				CkPrintf("%d %d : time itr %d \n",x_cord,y_cord,time);
			
#line 1824 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _if_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_0() {
  if (injection_mode && (time == injection_timestep)) {
    _atomic_3();
  } else {
    _if_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_0_end() {
  _if_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_3() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_3()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 75 "prk.ci"

				inject_particles(injection_timestep, corner_top_left_x_inj, corner_bottom_right_x_inj, corner_top_left_y_inj, corner_bottom_right_y_inj, particles_per_cell, particles, my_start_gp_x, my_end_gp_x, my_start_gp_y, my_end_gp_y);
			
#line 1858 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_1() {
  if (removal_mode && (time == removal_timestep)) {
    _atomic_4();
  } else {
    _if_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_1_end() {
  _atomic_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_4() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_4()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 79 "prk.ci"

				remove_particles_and_validate(removal_timestep, corner_top_left_x_rmv, corner_bottom_right_x_rmv, corner_top_left_y_rmv, corner_bottom_right_y_rmv, particles, &partial_correctness, grid, g, k, m, L, T);
			
#line 1892 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _if_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_5() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_5()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 83 "prk.ci"

				compute_displacement_forces();
				sendParticles();
			
#line 1909 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _for_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_1() {
  noNeighbours=0;
  if (noNeighbours<NEIGHBORS) {
    _slist_3();
  } else {
    _if_2();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_for_1_end() {
  noNeighbours++;
  if (noNeighbours<NEIGHBORS) {
    _slist_3();
  } else {
    _if_2();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_3() {
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_3_end() {
  _for_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Cell::_when_0() {
  CMK_REFNUM_TYPE refnum_0;
  {
    refnum_0 = time;
  }
  return _when_0(refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Cell::_when_0(int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_6(static_cast<Closure_Cell::receiveParticles_4_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_when_0_end(Closure_Cell::receiveParticles_4_closure* gen0) {
  _slist_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_6(Closure_Cell::receiveParticles_4_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_6()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  {
    int& time = gen0->getP0();
    std::vector<particle_t >& incoming = gen0->getP1();
    { // begin serial block
#line 91 "prk.ci"

					//if(x_cord==4 && y_cord==1)
					//cout<<"Received a req to add Particles from: "<<noNeighbours<<" at time iteration: "<<time<<" And particles size and incoming size:"<<particles.size()<<incoming.size()<<endl;
					particles.insert(particles.end(),incoming.begin(),incoming.end());
				
#line 2005 "prk.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_2() {
  if (time == 2 || time == 42) {
    _slist_4();
  } else {
    _if_2_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_if_2_end() {
  _slist_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_4() {
  _atomic_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_slist_4_end() {
  _if_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_7() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_7()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 98 "prk.ci"

          UserSetLBLoad();
          AtSync();
        
#line 2055 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Cell::_when_1() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_1_end();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_when_1_end() {
  _slist_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_atomic_8() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Cell_atomic_8()), CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
  { // begin serial block
#line 107 "prk.ci"

			compute_correctness();
			simulation_time=CkWallTimer()-simulation_time;
		
#line 2097 "prk.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::receiveParticles(int time, std::vector<particle_t > incoming){
  Closure_Cell::receiveParticles_4_closure* genClosure = new Closure_Cell::receiveParticles_4_closure();
  genClosure->getP0() = time;
  genClosure->getP1() = incoming;
  receiveParticles(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::receiveParticles(Closure_Cell::receiveParticles_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure, genClosure->getP0());
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      c->refnums[0]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::ResumeFromSync(){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(1, 0, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::_sdag_init() { // Potentially missing Cell_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,2));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::__sdag_init() { // Potentially missing Cell_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Cell::_sdag_pup(PUP::er &p) { // Potentially missing Cell_SDAG_CODE in your class definition?
#if CMK_USING_XLC
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
#else
    p|__dep;
#endif
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Cell::__sdag_register() { // Potentially missing Cell_SDAG_CODE in your class definition?
  (void)_sdag_idx_Cell_atomic_0();
  (void)_sdag_idx_Cell_atomic_1();
  (void)_sdag_idx_Cell_atomic_2();
  (void)_sdag_idx_Cell_atomic_3();
  (void)_sdag_idx_Cell_atomic_4();
  (void)_sdag_idx_Cell_atomic_5();
  (void)_sdag_idx_Cell_atomic_6();
  (void)_sdag_idx_Cell_atomic_7();
  (void)_sdag_idx_Cell_atomic_8();
  PUPable_reg(SINGLE_ARG(Closure_Cell::initializeParticles_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::receiveParticles_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::ResumeFromSync_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::run_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::initializeParticles_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::receiveParticles_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::ResumeFromSync_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Cell::run_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_0() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_0() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_0", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_1() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_1() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_1", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_2() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_2() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_2", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_3() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_3() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_3", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_4() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_4() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_4", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_5() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_5() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_5", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_6() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_6() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_6", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_7() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_7() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_7", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_idx_Cell_atomic_8() { // Potentially missing Cell_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Cell_atomic_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Cell::_sdag_reg_Cell_atomic_8() { // Potentially missing Cell_SDAG_CODE in your class definition?
  return CkRegisterEp("Cell_atomic_8", NULL, 0, CkIndex_Cell::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerprk(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("cellProxy","CProxy_Cell",sizeof(cellProxy),(void *) &cellProxy,__xlater_roPup_cellProxy);

  CkRegisterReadonly("T","int64_t",sizeof(T),(void *) &T,__xlater_roPup_T);

  CkRegisterReadonly("g","int64_t",sizeof(g),(void *) &g,__xlater_roPup_g);

  CkRegisterReadonly("chare_dim_x","int",sizeof(chare_dim_x),(void *) &chare_dim_x,__xlater_roPup_chare_dim_x);

  CkRegisterReadonly("chare_dim_y","int",sizeof(chare_dim_y),(void *) &chare_dim_y,__xlater_roPup_chare_dim_y);

  CkRegisterReadonly("per_chare_x","int64_t",sizeof(per_chare_x),(void *) &per_chare_x,__xlater_roPup_per_chare_x);

  CkRegisterReadonly("per_chare_y","int64_t",sizeof(per_chare_y),(void *) &per_chare_y,__xlater_roPup_per_chare_y);

  CkRegisterReadonly("per_chare_edge_x","int64_t",sizeof(per_chare_edge_x),(void *) &per_chare_edge_x,__xlater_roPup_per_chare_edge_x);

  CkRegisterReadonly("per_chare_edge_y","int64_t",sizeof(per_chare_edge_y),(void *) &per_chare_edge_y,__xlater_roPup_per_chare_edge_y);

  CkRegisterReadonly("removal_mode","int",sizeof(removal_mode),(void *) &removal_mode,__xlater_roPup_removal_mode);

  CkRegisterReadonly("injection_mode","int",sizeof(injection_mode),(void *) &injection_mode,__xlater_roPup_injection_mode);

  CkRegisterReadonly("injection_timestep","int",sizeof(injection_timestep),(void *) &injection_timestep,__xlater_roPup_injection_timestep);

  CkRegisterReadonly("removal_timestep","int",sizeof(removal_timestep),(void *) &removal_timestep,__xlater_roPup_removal_timestep);

  CkRegisterReadonly("corner_top_left_x_inj","int",sizeof(corner_top_left_x_inj),(void *) &corner_top_left_x_inj,__xlater_roPup_corner_top_left_x_inj);

  CkRegisterReadonly("corner_bottom_right_x_inj","int",sizeof(corner_bottom_right_x_inj),(void *) &corner_bottom_right_x_inj,__xlater_roPup_corner_bottom_right_x_inj);

  CkRegisterReadonly("corner_top_left_y_inj","int",sizeof(corner_top_left_y_inj),(void *) &corner_top_left_y_inj,__xlater_roPup_corner_top_left_y_inj);

  CkRegisterReadonly("corner_bottom_right_y_inj","int",sizeof(corner_bottom_right_y_inj),(void *) &corner_bottom_right_y_inj,__xlater_roPup_corner_bottom_right_y_inj);

  CkRegisterReadonly("corner_top_left_x_rmv","int",sizeof(corner_top_left_x_rmv),(void *) &corner_top_left_x_rmv,__xlater_roPup_corner_top_left_x_rmv);

  CkRegisterReadonly("corner_bottom_right_x_rmv","int",sizeof(corner_bottom_right_x_rmv),(void *) &corner_bottom_right_x_rmv,__xlater_roPup_corner_bottom_right_x_rmv);

  CkRegisterReadonly("corner_top_left_y_rmv","int",sizeof(corner_top_left_y_rmv),(void *) &corner_top_left_y_rmv,__xlater_roPup_corner_top_left_y_rmv);

  CkRegisterReadonly("corner_bottom_right_y_rmv","int",sizeof(corner_bottom_right_y_rmv),(void *) &corner_bottom_right_y_rmv,__xlater_roPup_corner_bottom_right_y_rmv);

  CkRegisterReadonly("particles_per_cell","int",sizeof(particles_per_cell),(void *) &particles_per_cell,__xlater_roPup_particles_per_cell);

  CkRegisterReadonly("k","int",sizeof(k),(void *) &k,__xlater_roPup_k);

  CkRegisterReadonly("m","int",sizeof(m),(void *) &m,__xlater_roPup_m);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void completed(int result);
void validation(int result);
void statistics(double result);
void done_initialization();
void liveViz_support();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Cell: ArrayElement{
Cell();
void colorRegion(liveVizRequestMsg* impl_msg);
void initializeParticles(const std::vector<particle_t > &incoming);
void receiveParticles(int time, const std::vector<particle_t > &incoming);
void ResumeFromSync();
void run();
Cell(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell::__register("Cell", sizeof(Cell));

}
extern "C" void CkRegisterMainModule(void) {
  _registerprk();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main >(dynamic_cast<Main* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell::virtual_pup(PUP::er &p) {
    recursive_pup<Cell >(dynamic_cast<Cell* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
