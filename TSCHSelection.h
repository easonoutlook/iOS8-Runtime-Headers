/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, TSCHSelectionPath, TSCHChartDrawableInfo;

@interface TSCHSelection : TSKSelection <NSCopying> {
    TSCHChartDrawableInfo *mInfo;
    NSArray *mPaths;
}

@property(retain,readonly) TSCHChartDrawableInfo * chartInfo;
@property(copy,readonly) NSArray * paths;
@property(copy,readonly) TSCHSelectionPath * firstPath;
@property(readonly) BOOL returnChartFrameForAutoscroll;

+ (Class)archivedSelectionClass;

- (id)firstPath;
- (id)paths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initFromArchive:(const struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;
- (BOOL)returnChartFrameForAutoscroll;
- (id)chartInfo;
- (void)saveToArchive:(struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;

@end
