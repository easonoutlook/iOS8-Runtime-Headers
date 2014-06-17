/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface TSCHCommandDeleteRows : TSCHChartCommand  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } mRowRange;
    NSArray *mCutNames;
    NSArray *mCutValues;
    BOOL mRemovedAllRows;
    BOOL mAddDummyDataOnDeleteAll;
    NSArray *mCutColumnNames;
    NSArray *mRowIds;
    NSArray *mColumnIds;
}


- (BOOL)process;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 addDummyDataOnDeleteAll:(BOOL)arg3 newRowIds:(id)arg4 newColumnIds:(id)arg5;
- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 newRowIds:(id)arg3 newColumnIds:(id)arg4;
- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const struct ChartCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; boolx5; int x6; unsigned int x7[1]; }*)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end