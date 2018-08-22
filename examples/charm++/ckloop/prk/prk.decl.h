#ifndef _DECL_prk_H_
#define _DECL_prk_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly CProxy_Cell cellProxy;
 */

/* DECLS: readonly int64_t T;
 */

/* DECLS: readonly int64_t g;
 */

/* DECLS: readonly int chare_dim_x;
 */

/* DECLS: readonly int chare_dim_y;
 */

/* DECLS: readonly int64_t per_chare_x;
 */

/* DECLS: readonly int64_t per_chare_y;
 */

/* DECLS: readonly int64_t per_chare_edge_x;
 */

/* DECLS: readonly int64_t per_chare_edge_y;
 */

/* DECLS: readonly int removal_mode;
 */

/* DECLS: readonly int injection_mode;
 */

/* DECLS: readonly int injection_timestep;
 */

/* DECLS: readonly int removal_timestep;
 */

/* DECLS: readonly int corner_top_left_x_inj;
 */

/* DECLS: readonly int corner_bottom_right_x_inj;
 */

/* DECLS: readonly int corner_top_left_y_inj;
 */

/* DECLS: readonly int corner_bottom_right_y_inj;
 */

/* DECLS: readonly int corner_top_left_x_rmv;
 */

/* DECLS: readonly int corner_bottom_right_x_rmv;
 */

/* DECLS: readonly int corner_top_left_y_rmv;
 */

/* DECLS: readonly int corner_bottom_right_y_rmv;
 */

/* DECLS: readonly int particles_per_cell;
 */

/* DECLS: readonly int k;
 */

/* DECLS: readonly int m;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void completed(int result);
void validation(int result);
void statistics(double result);
void done_initialization();
void liveViz_support();
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void completed(int result);
     */
    // Entry point registration at startup
    
    static int reg_completed_marshall2();
    // Entry point index lookup
    
    inline static int idx_completed_marshall2() {
      static int epidx = reg_completed_marshall2();
      return epidx;
    }

    
    inline static int idx_completed(void (Main::*)(int result) ) {
      return idx_completed_marshall2();
    }


    
    static int completed(int result) { return idx_completed_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_completed_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_completed_marshall2() {
      static int epidx = reg_redn_wrapper_completed_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_completed(CkReductionMsg* impl_msg) { return idx_redn_wrapper_completed_marshall2(); }
    
    static void _call_redn_wrapper_completed_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_completed_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_completed_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_completed_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_completed_marshall2(PUP::er &p,void *msg);
    /* DECLS: void validation(int result);
     */
    // Entry point registration at startup
    
    static int reg_validation_marshall3();
    // Entry point index lookup
    
    inline static int idx_validation_marshall3() {
      static int epidx = reg_validation_marshall3();
      return epidx;
    }

    
    inline static int idx_validation(void (Main::*)(int result) ) {
      return idx_validation_marshall3();
    }


    
    static int validation(int result) { return idx_validation_marshall3(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_validation_marshall3();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_validation_marshall3() {
      static int epidx = reg_redn_wrapper_validation_marshall3();
      return epidx;
    }
    
    static int redn_wrapper_validation(CkReductionMsg* impl_msg) { return idx_redn_wrapper_validation_marshall3(); }
    
    static void _call_redn_wrapper_validation_marshall3(void* impl_msg, void* impl_obj_void);
    
    static void _call_validation_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_validation_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_validation_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_validation_marshall3(PUP::er &p,void *msg);
    /* DECLS: void statistics(double result);
     */
    // Entry point registration at startup
    
    static int reg_statistics_marshall4();
    // Entry point index lookup
    
    inline static int idx_statistics_marshall4() {
      static int epidx = reg_statistics_marshall4();
      return epidx;
    }

    
    inline static int idx_statistics(void (Main::*)(double result) ) {
      return idx_statistics_marshall4();
    }


    
    static int statistics(double result) { return idx_statistics_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_statistics_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_statistics_marshall4() {
      static int epidx = reg_redn_wrapper_statistics_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_statistics(CkReductionMsg* impl_msg) { return idx_redn_wrapper_statistics_marshall4(); }
    
    static void _call_redn_wrapper_statistics_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_statistics_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_statistics_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_statistics_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_statistics_marshall4(PUP::er &p,void *msg);
    /* DECLS: void done_initialization();
     */
    // Entry point registration at startup
    
    static int reg_done_initialization_void();
    // Entry point index lookup
    
    inline static int idx_done_initialization_void() {
      static int epidx = reg_done_initialization_void();
      return epidx;
    }

    
    inline static int idx_done_initialization(void (Main::*)() ) {
      return idx_done_initialization_void();
    }


    
    static int done_initialization() { return idx_done_initialization_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_initialization_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_initialization_void() {
      static int epidx = reg_redn_wrapper_done_initialization_void();
      return epidx;
    }
    
    static int redn_wrapper_done_initialization(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_initialization_void(); }
    
    static void _call_redn_wrapper_done_initialization_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_initialization_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_initialization_void(void* impl_msg, void* impl_obj);
    /* DECLS: void liveViz_support();
     */
    // Entry point registration at startup
    
    static int reg_liveViz_support_void();
    // Entry point index lookup
    
    inline static int idx_liveViz_support_void() {
      static int epidx = reg_liveViz_support_void();
      return epidx;
    }

    
    inline static int idx_liveViz_support(void (Main::*)() ) {
      return idx_liveViz_support_void();
    }


    
    static int liveViz_support() { return idx_liveViz_support_void(); }
    
    static void _call_liveViz_support_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_liveViz_support_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: void completed(int result);
 */
    
    void completed(int result, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void validation(int result);
 */
    
    void validation(int result, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void statistics(double result);
 */
    
    void statistics(double result, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done_initialization();
 */
    
    void done_initialization(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void liveViz_support();
 */
    
    void liveViz_support(const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Main)
#define Main_SDAG_CODE                                                         \
public:                                                                        \
  void liveViz_support();                                                      \
private:                                                                       \
  void liveViz_support_end();                                                  \
  void _atomic_0();                                                            \
public:                                                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Main_atomic_0();                                        \
  static int _sdag_reg_Main_atomic_0();                                        \

typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array Cell: ArrayElement{
Cell();
void colorRegion(liveVizRequestMsg* impl_msg);
void initializeParticles(const std::vector<particle_t > &incoming);
void receiveParticles(int time, const std::vector<particle_t > &incoming);
void ResumeFromSync();
void run();
Cell(CkMigrateMessage* impl_msg);
};
 */
 class Cell;
 class CkIndex_Cell;
 class CProxy_Cell;
 class CProxyElement_Cell;
 class CProxySection_Cell;
/* --------------- index object ------------------ */
class CkIndex_Cell:public CkIndex_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Cell();
     */
    // Entry point registration at startup
    
    static int reg_Cell_void();
    // Entry point index lookup
    
    inline static int idx_Cell_void() {
      static int epidx = reg_Cell_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Cell_void(); }
    
    static void _call_Cell_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell_void(void* impl_msg, void* impl_obj);
    /* DECLS: void colorRegion(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_colorRegion_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_colorRegion_liveVizRequestMsg() {
      static int epidx = reg_colorRegion_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_colorRegion(void (Cell::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_colorRegion_liveVizRequestMsg();
    }


    
    static int colorRegion(liveVizRequestMsg* impl_msg) { return idx_colorRegion_liveVizRequestMsg(); }
    
    static void _call_colorRegion_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_colorRegion_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initializeParticles(const std::vector<particle_t > &incoming);
     */
    // Entry point registration at startup
    
    static int reg_initializeParticles_marshall3();
    // Entry point index lookup
    
    inline static int idx_initializeParticles_marshall3() {
      static int epidx = reg_initializeParticles_marshall3();
      return epidx;
    }

    
    inline static int idx_initializeParticles(void (Cell::*)(const std::vector<particle_t > &incoming) ) {
      return idx_initializeParticles_marshall3();
    }


    
    static int initializeParticles(const std::vector<particle_t > &incoming) { return idx_initializeParticles_marshall3(); }
    
    static void _call_initializeParticles_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initializeParticles_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initializeParticles_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initializeParticles_marshall3(PUP::er &p,void *msg);
    /* DECLS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
     */
    // Entry point registration at startup
    
    static int reg_receiveParticles_marshall4();
    // Entry point index lookup
    
    inline static int idx_receiveParticles_marshall4() {
      static int epidx = reg_receiveParticles_marshall4();
      return epidx;
    }

    
    inline static int idx_receiveParticles(void (Cell::*)(int time, const std::vector<particle_t > &incoming) ) {
      return idx_receiveParticles_marshall4();
    }


    
    static int receiveParticles(int time, const std::vector<particle_t > &incoming) { return idx_receiveParticles_marshall4(); }
    
    static void _call_receiveParticles_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveParticles_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveParticles_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveParticles_marshall4(PUP::er &p,void *msg);
    /* DECLS: void ResumeFromSync();
     */
    // Entry point registration at startup
    
    static int reg_ResumeFromSync_void();
    // Entry point index lookup
    
    inline static int idx_ResumeFromSync_void() {
      static int epidx = reg_ResumeFromSync_void();
      return epidx;
    }

    
    inline static int idx_ResumeFromSync(void (Cell::*)() ) {
      return idx_ResumeFromSync_void();
    }


    
    static int ResumeFromSync() { return idx_ResumeFromSync_void(); }
    
    static void _call_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (Cell::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
    /* DECLS: Cell(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell_CkMigrateMessage() {
      static int epidx = reg_Cell_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell_CkMigrateMessage(); }
    
    static void _call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell : public CProxyElement_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;


    /* TRAM aggregators */

    CProxyElement_Cell(void) {
    }
    CProxyElement_Cell(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Cell *ckLocal(void) const
    { return (Cell *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex2D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex2D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Cell();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void colorRegion(liveVizRequestMsg* impl_msg);
 */
    
    void colorRegion(liveVizRequestMsg* impl_msg) ;

/* DECLS: void initializeParticles(const std::vector<particle_t > &incoming);
 */
    
    void initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */
    
    void receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync();
 */
    
    void ResumeFromSync(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Cell)
/* ---------------- collective proxy -------------- */
 class CProxy_Cell : public CProxy_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    CProxy_Cell(void) {
    }
    CProxy_Cell(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_Cell operator [] (const CkArrayIndex2D &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell operator() (const CkArrayIndex2D &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell operator () (int i0,int i1) const 
        {return CProxyElement_Cell(ckGetArrayID(), CkArrayIndex2D(i0,i1), CK_DELCTOR_CALL);}
    CProxyElement_Cell operator () (CkIndex2D idx) const 
        {return CProxyElement_Cell(ckGetArrayID(), CkArrayIndex2D(idx), CK_DELCTOR_CALL);}
    CProxy_Cell(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Cell();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void colorRegion(liveVizRequestMsg* impl_msg);
 */
    
    void colorRegion(liveVizRequestMsg* impl_msg) ;

/* DECLS: void initializeParticles(const std::vector<particle_t > &incoming);
 */
    
    void initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */
    
    void receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync();
 */
    
    void ResumeFromSync(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Cell)
/* ---------------- section proxy -------------- */
 class CProxySection_Cell : public CProxySection_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    CProxySection_Cell(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Cell operator [] (const CkArrayIndex2D &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell operator() (const CkArrayIndex2D &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell operator () (int idx) const 
        {return CProxyElement_Cell(ckGetArrayID(), *(CkArrayIndex2D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex2D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      CkVec<CkArrayIndex2D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          al.push_back(CkArrayIndex2D(i, j));
      return CkSectionID(aid, al.getVec(), al.size(), factor);
    } 
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Cell(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Cell();
 */
    

/* DECLS: void colorRegion(liveVizRequestMsg* impl_msg);
 */
    
    void colorRegion(liveVizRequestMsg* impl_msg) ;

/* DECLS: void initializeParticles(const std::vector<particle_t > &incoming);
 */
    
    void initializeParticles(const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveParticles(int time, const std::vector<particle_t > &incoming);
 */
    
    void receiveParticles(int time, const std::vector<particle_t > &incoming, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync();
 */
    
    void ResumeFromSync(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Cell)
#define Cell_SDAG_CODE                                                         \
public:                                                                        \
  void initializeParticles(std::vector<particle_t > incoming);                 \
  void initializeParticles(Closure_Cell::initializeParticles_3_closure* gen0); \
private:                                                                       \
  void initializeParticles_end(Closure_Cell::initializeParticles_3_closure* gen0);\
  void _slist_0(Closure_Cell::initializeParticles_3_closure* gen0);            \
  void _slist_0_end(Closure_Cell::initializeParticles_3_closure* gen0);        \
  void _atomic_0(Closure_Cell::initializeParticles_3_closure* gen0);           \
public:                                                                        \
  void run();                                                                  \
private:                                                                       \
  void run_end();                                                              \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _atomic_1();                                                            \
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_2();                                                             \
  void _slist_2_end();                                                         \
  void _atomic_2();                                                            \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _atomic_3();                                                            \
  void _if_1();                                                                \
  void _if_1_end();                                                            \
  void _atomic_4();                                                            \
  void _atomic_5();                                                            \
  void _for_1();                                                               \
  void _for_1_end();                                                           \
  void _slist_3();                                                             \
  void _slist_3_end();                                                         \
  SDAG::Continuation* _when_0();                                               \
  SDAG::Continuation* _when_0(int refnum_0);                                   \
  void _when_0_end(Closure_Cell::receiveParticles_4_closure* gen0);            \
  void _atomic_6(Closure_Cell::receiveParticles_4_closure* gen0);              \
  void _if_2();                                                                \
  void _if_2_end();                                                            \
  void _slist_4();                                                             \
  void _slist_4_end();                                                         \
  void _atomic_7();                                                            \
  SDAG::Continuation* _when_1();                                               \
  void _when_1_end();                                                          \
  void _atomic_8();                                                            \
public:                                                                        \
  void receiveParticles(Closure_Cell::receiveParticles_4_closure* genClosure); \
  void receiveParticles(int time, std::vector<particle_t > incoming);          \
  void ResumeFromSync();                                                       \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Cell_atomic_0();                                        \
  static int _sdag_reg_Cell_atomic_0();                                        \
  static int _sdag_idx_Cell_atomic_1();                                        \
  static int _sdag_reg_Cell_atomic_1();                                        \
  static int _sdag_idx_Cell_atomic_2();                                        \
  static int _sdag_reg_Cell_atomic_2();                                        \
  static int _sdag_idx_Cell_atomic_3();                                        \
  static int _sdag_reg_Cell_atomic_3();                                        \
  static int _sdag_idx_Cell_atomic_4();                                        \
  static int _sdag_reg_Cell_atomic_4();                                        \
  static int _sdag_idx_Cell_atomic_5();                                        \
  static int _sdag_reg_Cell_atomic_5();                                        \
  static int _sdag_idx_Cell_atomic_6();                                        \
  static int _sdag_reg_Cell_atomic_6();                                        \
  static int _sdag_idx_Cell_atomic_7();                                        \
  static int _sdag_reg_Cell_atomic_7();                                        \
  static int _sdag_idx_Cell_atomic_8();                                        \
  static int _sdag_reg_Cell_atomic_8();                                        \

typedef CBaseT1<ArrayElementT<CkIndex2D>, CProxy_Cell>CBase_Cell;


























/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct completed_2_closure;


    struct validation_3_closure;


    struct statistics_4_closure;


    struct done_initialization_5_closure;


    struct liveViz_support_6_closure;

};

/* ---------------- method closures -------------- */
class Closure_Cell {
  public:



    struct initializeParticles_3_closure;


    struct receiveParticles_4_closure;


    struct ResumeFromSync_5_closure;


    struct run_6_closure;


};

extern void _registerprk(void);
extern "C" void CkRegisterMainModule(void);
#endif
