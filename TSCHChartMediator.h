/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSUIntToIntDictionary, <TSCHNotifyOnModify>, TSCHChartInfo;

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying> {
    <TSCHNotifyOnModify> *mObjectToNotify;
    TSCHChartInfo *mChartInfo;
    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;
}

@property TSCHChartInfo * chartInfo;
@property <TSCHNotifyOnModify> * objectToNotify;
@property(readonly) BOOL isPhantom;
@property(readonly) int direction;

+ (id)propertiesThatInvalidateMediator;

- (BOOL)isEditing;
- (int)direction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)preferSeriesToValues;
- (unsigned int)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned int)arg1;
- (unsigned int)p_remoteSeriesIndexForGridSeriesIndex:(unsigned int)arg1;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned int)arg1 dataType:(int)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned int)arg2 dataType:(int)arg3;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)categoryLabelFormulas;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned int)arg2 axisType:(int)arg3;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned int)arg2;
- (id)seriesNameFormulaForSeriesIndex:(unsigned int)arg1;
- (void)updateGridWithSpec:(struct { unsigned int x1; int (*x2)(); void *x3; })arg1;
- (id)p_errorBarDataForSeries:(unsigned int)arg1 withSpec:(struct { unsigned int x1; int (*x2)(); void *x3; })arg2 updateType:(int)arg3;
- (void)loadFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedField<unsigned int> { unsigned int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7[1]; }*)arg1;
- (void)invalidateAndSynchronizeMediator;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (BOOL)isPhantom;
- (void)setChartInfo:(id)arg1;
- (void)setObjectToNotify:(id)arg1;
- (id)objectToNotify;
- (id)dataFormatterForAxis:(id)arg1;
- (void)clearParent;
- (id)chartInfo;
- (id)initWithChartInfo:(id)arg1;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedField<unsigned int> { unsigned int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7[1]; }*)arg1;
- (id)copyWithContext:(id)arg1;
- (void)willModify;

@end
