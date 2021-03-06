/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCECalculationEngine, NSObject<OS_dispatch_queue>, TSTTableInfo, NSMutableArray, TSTTableFilterSet;

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning> {
    struct __CFUUID { } *mOwnerID;
    TSTTableInfo *mTableInfo;
    TSCECalculationEngine *mCalculationEngine;
    struct vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
        struct pair<unsigned short, bool> {} *__begin_; 
        struct pair<unsigned short, bool> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned short, bool> *, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
            struct pair<unsigned short, bool> {} *__first_; 
        } __end_cap_; 
    } mPendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> *mPendingComputedShowRowResultsQueue;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSUColumnRowRect *, std::__1::allocator<TSUColumnRowRect> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    } mCellRangesToInvalidate;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__first_; 
        } __end_cap_; 
    } mHiddenRowIndices;
    TSTTableFilterSet *mRewrittenFilterSet;
    NSMutableArray *mThresholdCellValues;
    BOOL mNeedsToUpdateFilterSetForImport;
}


- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (struct __CFUUID { }*)ownerID;
- (int)registerWithCalculationEngineChoosingUniqueID:(id)arg1;
- (void)p_registerAllFormulaToCalculationEngine;
- (void)p_removeAllFormulaFromCalculationEngine;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })cellReferenceForIndex:(unsigned short)arg1;
- (id)tableInfo;
- (void)setTableInfo:(id)arg1;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReferenceFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2;
- (void)setOwnerID:(struct __CFUUID { }*)arg1;
- (void)hiddenStateChangedForIndex:(unsigned short)arg1;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)calculationEngine;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (struct { BOOL x1; BOOL x2; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (BOOL)serializeCalculations;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)retainForCalculationEngine:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
