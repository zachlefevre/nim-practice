/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Users\ZACH\Documents\mingw64\bin\gcc.exe -c  -w  -IC:\Users\ZACH\Documents\nim-0.17.0\lib -o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_os.o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_os.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#undef linux
#undef near
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct GcThread_hgJQSlfXDOK3SwSHjeZBXg GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct SharedList_9cWkTIPQvNw7gFHMOEzMCLw SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct Exception Exception;
typedef struct TY_WF89a8QyKeDCh4DYWTmSiBg TY_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NF TY_SBX73RxxTewX4sqVYGfdEA[1001];
struct  GcThread_hgJQSlfXDOK3SwSHjeZBXg  {
TY_SBX73RxxTewX4sqVYGfdEA tls;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef N_STDCALL_PTR(NI16*, TY_C6bRt4Mqo6LDqlyl9bIOYWQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  SharedList_9cWkTIPQvNw7gFHMOEzMCLw  {
SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
CRITICAL_SECTION lock;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
SharedList_9cWkTIPQvNw7gFHMOEzMCLw toDispose;
};
typedef N_STDCALL_PTR(NI32, TY_fRm1QK2sgVg9aFiEV5T74jA) (NI16* para1);
typedef N_STDCALL_PTR(NI32, TY_2xBzxeMx4l7D6jwHak3G2g) (NI handle, NI16* buf, NI32 size);
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef void* TY_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct  SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw  {
SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
TY_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
typedef N_NIMCALL_PTR(NIM_BOOL, TY_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} TY_IIomJ6ptE6vfJ5zRbATgkQ;
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  TY_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
typedef struct {TY_hgOQFBQi19biNdOUUkFOOxA localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
TY_WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers_8OmU3x0fNdA0DLtOmU3kWw;
TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ;
TY_sM4lkSb7zS6F7OVMvW9cffQ* environment_mlhK49b6YMgc9cgrcYkKq9a3g;
TY_sM4lkSb7zS6F7OVMvW9cffQ* ownArgv_WVJ54JSHy7VxacV39bwBPFA;
NIM_BOOL isSlave_t9a8wsVVRYqGEKhg1vb49b3g;
} NimThreadVars;
static N_INLINE(void*, GetThreadLocalVars)(void);
N_NIMCALL(void*, threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg)(NI32 dwTlsIndex);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(TY_sM4lkSb7zS6F7OVMvW9cffQ** s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_4)(void);
N_NIMCALL(NI, findEnvVar_cmJJ3H7KloA4DztTvzWyCw)(NimStringDesc* key);
N_NIMCALL(void, getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, dollar__QjWkJEdnPpNzR7KF7dYIoQ)(NI16* s);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem)(NCSTRING x, NCSTRING y);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(TY_sM4lkSb7zS6F7OVMvW9cffQ*, nosparseCmdLine)(NimStringDesc* c);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NIMCALL(NI16*, newWideCString_b3CORJA07cGvZB3j3M3bqQ)(NCSTRING source, NI L);
N_NIMCALL(NimStringDesc*, dollar__GUT0CpACeWzt9cO6i89asYdw)(NI16* w, NI estimate, NI replacement);
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern NI32 globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
extern TY_C6bRt4Mqo6LDqlyl9bIOYWQ Dl_138627_;
extern TY_fRm1QK2sgVg9aFiEV5T74jA Dl_138629_;
extern TY_C6bRt4Mqo6LDqlyl9bIOYWQ Dl_138632_;
extern TY_2xBzxeMx4l7D6jwHak3G2g Dl_138022_;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_8, "", 0);

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimGCvisit((void*)NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g, 0);
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	T1_ = (NI)0;
	{
		if (!(NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(TY_sM4lkSb7zS6F7OVMvW9cffQ** s) {
	NimStringDesc* result;
	NI L;
	NI TM_yu6cxgKBBXbNsTkT9cyMd4g_3;
	nimfr_("pop", "system.nim")
	result = (NimStringDesc*)0;
	nimln_(2298, "system.nim");
	TM_yu6cxgKBBXbNsTkT9cyMd4g_3 = subInt(((*s) ? (*s)->Sup.len : 0), ((NI) 1));
	L = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_3);
	nimln_(2299, "system.nim");
	if ((NU)(L) >= (NU)((*s)->Sup.len)) raiseIndexError();
	result = copyString((*s)->data[L]);
	nimln_(2300, "system.nim");
	(*s) = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeq(&((*s))->Sup, sizeof(NimStringDesc*), ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
	return result;
}
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_4)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimGCvisit((void*)NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA, 0);
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	NimThreadVars* NimTV_;
	nimfr_("rtlAddZCT", "gc.nim")
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&NimTV_->gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA)(void) {
	NimThreadVars* NimTV_;
	nimfr_("getEnvVarsC", "os.nim")
{	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimln_(730, "os.nim");
	{
		NI16* env;
		NI16* e;
		NI32 T17_;
		if (!!(NimTV_->envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ)) goto LA3_;
		nimln_(731, "os.nim");
		unsureAsgnRef((void**) (&NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g), (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0));
		nimln_(734, "os.nim");
		env = Dl_138627_();
		nimln_(735, "os.nim");
		e = env;
		nimln_(736, "os.nim");
		{
			if (!(e == NIM_NIL)) goto LA7_;
			goto BeforeRet_;
		}
		LA7_: ;
		{
			nimln_(737, "os.nim");
			while (1) {
				NI16* eend;
				NimStringDesc* T11_;
				NimStringDesc* T12_;
				NI TM_yu6cxgKBBXbNsTkT9cyMd4g_5;
				nimln_(738, "os.nim");
				eend = wcschr(e, ((NI32) 0));
				nimln_(739, "os.nim");
				T11_ = (NimStringDesc*)0;
				T11_ = dollar__QjWkJEdnPpNzR7KF7dYIoQ(e);
				NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g)->Sup, sizeof(NimStringDesc*));
				T12_ = (NimStringDesc*)0;
				T12_ = NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len]; NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len] = copyStringRC1(T11_);
				if (T12_) nimGCunrefNoCycle(T12_);
				++NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len;
				nimln_(740, "os.nim");
				TM_yu6cxgKBBXbNsTkT9cyMd4g_5 = addInt(((NI) (eend)), ((NI) 2));
				e = ((NI16*) ((NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_5)));
				nimln_(741, "os.nim");
				{
					if (!(((NI) (eend[(((NI) 1))- 0])) == ((NI) 0))) goto LA15_;
					goto LA9;
				}
				LA15_: ;
			}
		} LA9: ;
		nimln_(742, "os.nim");
		T17_ = (NI32)0;
		T17_ = Dl_138629_(env);
		nimln_(754, "os.nim");
		NimTV_->envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ = NIM_TRUE;
	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NI, findEnvVar_cmJJ3H7KloA4DztTvzWyCw)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* T1_;
	NimThreadVars* NimTV_;
	nimfr_("findEnvVar", "os.nim")
{	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NI)0;
	nimln_(788, "os.nim");
	getEnvVarsC_xlXgIeBHBOL9cl4MJcFJ8xA();
	nimln_(789, "os.nim");
	T1_ = (NimStringDesc*)0;
	T1_ = rawNewString(key->Sup.len + 1);
appendString(T1_, key);
appendChar(T1_, 61);
	temp = T1_;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(790, "os.nim");
		colontmp_ = (NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g ? (NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len-1) : -1);
		nimln_(1955, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1956, "system.nim");
			while (1) {
				NI TM_yu6cxgKBBXbNsTkT9cyMd4g_6;
				if (!(res <= colontmp_)) goto LA4;
				nimln_(1957, "system.nim");
				i = res;
				nimln_(791, "os.nim");
				{
					NIM_BOOL T7_;
					if ((NU)(i) >= (NU)(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
					T7_ = (NIM_BOOL)0;
					T7_ = nsuStartsWith(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], temp);
					if (!T7_) goto LA8_;
					result = i;
					goto BeforeRet_;
				}
				LA8_: ;
				nimln_(1976, "system.nim");
				TM_yu6cxgKBBXbNsTkT9cyMd4g_6 = addInt(res, ((NI) 1));
				res = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_6);
			} LA4: ;
		}
	}
	nimln_(792, "os.nim");
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	nimfr_("==", "system.nim")
	result = (NIM_BOOL)0;
	nimln_(3789, "system.nim");
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		nimln_(3790, "system.nim");
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		nimln_(3791, "system.nim");
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, getEnv_8zNgT9bxx7m9cTt2TeVdTdIw)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
	NimThreadVars* NimTV_;
	nimfr_("getEnv", "os.nim")
{	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NimStringDesc*)0;
	nimln_(800, "os.nim");
	i = findEnvVar_cmJJ3H7KloA4DztTvzWyCw(key);
	nimln_(801, "os.nim");
	{
		NI T5_;
		NI TM_yu6cxgKBBXbNsTkT9cyMd4g_7;
		if (!(((NI) 0) <= i)) goto LA3_;
		nimln_(802, "os.nim");
		if ((NU)(i) >= (NU)(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
		if ((NU)(i) >= (NU)(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len)) raiseIndexError();
		T5_ = (NI)0;
		T5_ = nsuFindChar(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], 61, ((NI) 0), ((NI) 0));
		TM_yu6cxgKBBXbNsTkT9cyMd4g_7 = addInt(T5_, ((NI) 1));
		result = copyStr(NimTV_->environment_mlhK49b6YMgc9cgrcYkKq9a3g->data[i], (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_7));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NCSTRING env;
		nimln_(804, "os.nim");
		env = getenv(key->data);
		nimln_(805, "os.nim");
		{
			NIM_BOOL T9_;
			T9_ = (NIM_BOOL)0;
			T9_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgsystem(env, NIM_NIL);
			if (!T9_) goto LA10_;
			result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_8));
			goto BeforeRet_;
		}
		LA10_: ;
		nimln_(806, "os.nim");
		result = cstrToNimstr(env);
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TY_sM4lkSb7zS6F7OVMvW9cffQ*, nosparseCmdLine)(NimStringDesc* c) {
	TY_sM4lkSb7zS6F7OVMvW9cffQ* result;
	NI i;
	NimStringDesc* a;
	nimfr_("parseCmdLine", "os.nim")
	result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	nimln_(1241, "os.nim");
	result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	nimln_(1242, "os.nim");
	i = ((NI) 0);
	nimln_(1243, "os.nim");
	a = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_8));
	{
		nimln_(1244, "os.nim");
		while (1) {
			NIM_BOOL inQuote;
			NimStringDesc* T49_;
			nimln_(1245, "os.nim");
			a = setLengthStr(a, ((NI) 0));
			{
				nimln_(1247, "os.nim");
				while (1) {
					NIM_BOOL T5_;
					NIM_BOOL T6_;
					NIM_BOOL T7_;
					NI TM_yu6cxgKBBXbNsTkT9cyMd4g_9;
					T5_ = (NIM_BOOL)0;
					T6_ = (NIM_BOOL)0;
					T7_ = (NIM_BOOL)0;
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					T7_ = ((NU8)(c->data[i]) == (NU8)(32));
					if (T7_) goto LA8_;
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					T7_ = ((NU8)(c->data[i]) == (NU8)(9));
					LA8_: ;
					T6_ = T7_;
					if (T6_) goto LA9_;
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					T6_ = ((NU8)(c->data[i]) == (NU8)(10));
					LA9_: ;
					T5_ = T6_;
					if (T5_) goto LA10_;
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					T5_ = ((NU8)(c->data[i]) == (NU8)(13));
					LA10_: ;
					if (!T5_) goto LA4;
					TM_yu6cxgKBBXbNsTkT9cyMd4g_9 = addInt(i, ((NI) 1));
					i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_9);
				} LA4: ;
			}
			nimln_(1250, "os.nim");
			{
				if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
				if (!((NU8)(c->data[i]) == (NU8)(0))) goto LA13_;
				goto LA1;
			}
			LA13_: ;
			nimln_(1251, "os.nim");
			inQuote = NIM_FALSE;
			{
				nimln_(1252, "os.nim");
				while (1) {
					nimln_(1253, "os.nim");
					if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
					switch (((NU8)(c->data[i]))) {
					case 0:
					{
						nimln_(1254, "os.nim");
						goto LA15;
					}
					break;
					case 92:
					{
						NI j;
						nimln_(1256, "os.nim");
						j = i;
						{
							nimln_(1257, "os.nim");
							while (1) {
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_10;
								if ((NU)(j) > (NU)(c->Sup.len)) raiseIndexError();
								if (!((NU8)(c->data[j]) == (NU8)(92))) goto LA20;
								TM_yu6cxgKBBXbNsTkT9cyMd4g_10 = addInt(j, ((NI) 1));
								j = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_10);
							} LA20: ;
						}
						nimln_(1258, "os.nim");
						{
							if ((NU)(j) > (NU)(c->Sup.len)) raiseIndexError();
							if (!((NU8)(c->data[j]) == (NU8)(34))) goto LA23_;
							{
								NI k;
								NI colontmp_;
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_11;
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_12;
								NI res;
								k = (NI)0;
								colontmp_ = (NI)0;
								nimln_(1259, "os.nim");
								TM_yu6cxgKBBXbNsTkT9cyMd4g_11 = subInt(j, i);
								TM_yu6cxgKBBXbNsTkT9cyMd4g_12 = divInt((NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_11), ((NI) 2));
								colontmp_ = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_12);
								nimln_(1955, "system.nim");
								res = ((NI) 1);
								{
									nimln_(1956, "system.nim");
									while (1) {
										NI TM_yu6cxgKBBXbNsTkT9cyMd4g_13;
										if (!(res <= colontmp_)) goto LA27;
										nimln_(1957, "system.nim");
										k = res;
										nimln_(1259, "os.nim");
										a = addChar(a, 92);
										nimln_(1976, "system.nim");
										TM_yu6cxgKBBXbNsTkT9cyMd4g_13 = addInt(res, ((NI) 1));
										res = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_13);
									} LA27: ;
								}
							}
							nimln_(1260, "os.nim");
							{
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_14;
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_15;
								TM_yu6cxgKBBXbNsTkT9cyMd4g_14 = subInt(j, i);
								TM_yu6cxgKBBXbNsTkT9cyMd4g_15 = modInt((NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_14), ((NI) 2));
								if (!(((NI) ((NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_15))) == ((NI) 0))) goto LA30_;
								nimln_(1261, "os.nim");
								i = j;
							}
							goto LA28_;
							LA30_: ;
							{
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_16;
								nimln_(1263, "os.nim");
								a = addChar(a, 34);
								nimln_(1264, "os.nim");
								TM_yu6cxgKBBXbNsTkT9cyMd4g_16 = addInt(j, ((NI) 1));
								i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_16);
							}
							LA28_: ;
						}
						goto LA21_;
						LA23_: ;
						{
							NI TM_yu6cxgKBBXbNsTkT9cyMd4g_17;
							nimln_(1266, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							a = addChar(a, c->data[i]);
							nimln_(1267, "os.nim");
							TM_yu6cxgKBBXbNsTkT9cyMd4g_17 = addInt(i, ((NI) 1));
							i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_17);
						}
						LA21_: ;
					}
					break;
					case 34:
					{
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_18;
						nimln_(1269, "os.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_18 = addInt(i, ((NI) 1));
						i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_18);
						nimln_(1270, "os.nim");
						{
							if (!!(inQuote)) goto LA37_;
							inQuote = NIM_TRUE;
						}
						goto LA35_;
						LA37_: ;
						{
							NI TM_yu6cxgKBBXbNsTkT9cyMd4g_19;
							nimln_(1271, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							if (!((NU8)(c->data[i]) == (NU8)(34))) goto LA40_;
							nimln_(1272, "os.nim");
							if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
							a = addChar(a, c->data[i]);
							nimln_(1273, "os.nim");
							TM_yu6cxgKBBXbNsTkT9cyMd4g_19 = addInt(i, ((NI) 1));
							i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_19);
						}
						goto LA35_;
						LA40_: ;
						{
							nimln_(1275, "os.nim");
							inQuote = NIM_FALSE;
							nimln_(1276, "os.nim");
							goto LA15;
						}
						LA35_: ;
					}
					break;
					case 32:
					case 9:
					{
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_20;
						nimln_(1278, "os.nim");
						{
							if (!!(inQuote)) goto LA46_;
							goto LA15;
						}
						LA46_: ;
						nimln_(1279, "os.nim");
						if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
						a = addChar(a, c->data[i]);
						nimln_(1280, "os.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_20 = addInt(i, ((NI) 1));
						i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_20);
					}
					break;
					default:
					{
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_21;
						nimln_(1282, "os.nim");
						if ((NU)(i) > (NU)(c->Sup.len)) raiseIndexError();
						a = addChar(a, c->data[i]);
						nimln_(1283, "os.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_21 = addInt(i, ((NI) 1));
						i = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_21);
					}
					break;
					}
				}
			} LA15: ;
			nimln_(1298, "os.nim");
			result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(result)->Sup, sizeof(NimStringDesc*));
			T49_ = (NimStringDesc*)0;
			T49_ = result->data[result->Sup.len]; result->data[result->Sup.len] = copyStringRC1(a);
			if (T49_) nimGCunrefNoCycle(T49_);
			++result->Sup.len;
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nosparamCount)(void) {
	NI result;
	NimThreadVars* NimTV_;
	NI TM_yu6cxgKBBXbNsTkT9cyMd4g_22;
	nimfr_("paramCount", "os.nim")
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NI)0;
	nimln_(1446, "os.nim");
	{
		NI16* T5_;
		NimStringDesc* T6_;
		if (!(NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA == 0)) goto LA3_;
		T5_ = (NI16*)0;
		T5_ = Dl_138632_();
		T6_ = (NimStringDesc*)0;
		T6_ = dollar__QjWkJEdnPpNzR7KF7dYIoQ(T5_);
		unsureAsgnRef((void**) (&NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA), nosparseCmdLine(T6_));
	}
	LA3_: ;
	nimln_(1447, "os.nim");
	TM_yu6cxgKBBXbNsTkT9cyMd4g_22 = subInt((NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA ? NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA->Sup.len : 0), ((NI) 1));
	result = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_22);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	NI32 bufsize;
	NI16* buf;
	nimfr_("getAppFilename", "os.nim")
	result = (NimStringDesc*)0;
	nimln_(1571, "os.nim");
	bufsize = ((NI32) 260);
	nimln_(1573, "os.nim");
	buf = newWideCString_b3CORJA07cGvZB3j3M3bqQ("", ((NI) (bufsize)));
	{
		nimln_(1574, "os.nim");
		while (1) {
			NI32 L;
			nimln_(1575, "os.nim");
			L = Dl_138022_(((NI) 0), buf, bufsize);
			nimln_(1576, "os.nim");
			{
				if (!(L == ((NI32) 0))) goto LA5_;
				nimln_(1577, "os.nim");
				result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_8));
				nimln_(1578, "os.nim");
				goto LA1;
			}
			goto LA3_;
			LA5_: ;
			{
				nimln_(1579, "os.nim");
				if (!(bufsize < L)) goto LA8_;
				nimln_(1580, "os.nim");
				buf = newWideCString_b3CORJA07cGvZB3j3M3bqQ("", ((NI) (L)));
				nimln_(1581, "os.nim");
				bufsize = L;
			}
			goto LA3_;
			LA8_: ;
			{
				nimln_(1583, "os.nim");
				result = dollar__GUT0CpACeWzt9cO6i89asYdw(buf, ((NI) (L)), ((NI) 65533));
				nimln_(1584, "os.nim");
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nosparamStr)(NI i) {
	NimStringDesc* result;
	NimThreadVars* NimTV_;
	nimfr_("paramStr", "os.nim")
{	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NimStringDesc*)0;
	nimln_(1452, "os.nim");
	{
		NI16* T5_;
		NimStringDesc* T6_;
		if (!(NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA == 0)) goto LA3_;
		T5_ = (NI16*)0;
		T5_ = Dl_138632_();
		T6_ = (NimStringDesc*)0;
		T6_ = dollar__QjWkJEdnPpNzR7KF7dYIoQ(T5_);
		unsureAsgnRef((void**) (&NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA), nosparseCmdLine(T6_));
	}
	LA3_: ;
	nimln_(1453, "os.nim");
	if ((NU)(i) >= (NU)(NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA->Sup.len)) raiseIndexError();
	result = copyString(NimTV_->ownArgv_WVJ54JSHy7VxacV39bwBPFA->data[i]);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
	nimfr_("os", "os.nim")
nimRegisterGlobalMarker(TM_yu6cxgKBBXbNsTkT9cyMd4g_2);
nimRegisterGlobalMarker(TM_yu6cxgKBBXbNsTkT9cyMd4g_4);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}
