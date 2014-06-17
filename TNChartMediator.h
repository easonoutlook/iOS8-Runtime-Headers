/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TNMutableChartFormulaStorage, TNChartFormulaStorage, TSUIntToIntDictionary, NSCondition, TSCECalculationEngine, NSMutableArray, TSCEFormulaRewriteSpec;

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {
    struct __CFUUID { } *mEntityId;
    TNChartFormulaStorage *mFormulaStorage;
    NSMutableArray *mFormulasToRewrite;
    NSMutableArray *mFormulasToRecalculate;
    TSCEFormulaRewriteSpec *mInFlightRewriteSpec;
    int mScatterFormat;
    BOOL mIsRegisteredWithCalcEngine;
    BOOL mIsEditing;
    BOOL mEditingHasIsPhantomOverride;
    BOOL mEditingIsPhantomOverride;
    TNChartFormulaStorage *mEditingStorageOverride;
    TNMutableChartFormulaStorage *mEditingAccumulatedFormulas;
    TNMutableChartFormulaStorage *mEditingActiveFormulas;
    NSCondition *mImportUpgradeCondition;
    BOOL mHasBlittedSinceConditionVarSet;
    BOOL mShouldFixAreaFormula;
    TSUIntToIntDictionary *mFormulaIndexToGridIndex;
}

@property(readonly) struct __CFUUID { }* entityID;
@property(readonly) int scatterFormat;
@property(readonly) TSCECalculationEngine * calculationEngine;
@property(readonly) int direction;
@property(readonly) BOOL labelFormulasAreAllStatic;
@property(readonly) BOOL seriesLabelFormulasAreAllStatic;
@property(readonly) BOOL categoryLabelFormulasAreAllStatic;
@property BOOL isEditing;
@property(readonly) BOOL hasBlittedSinceConditionVarSet;

+ (id)propertiesThatInvalidateMediator;

- (BOOL)isEditing;
- (int)direction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CFUUID { }*)entityID;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)hasBlittedSinceConditionVarSet;
- (void)localizeFormulaLiteralsWithBundle:(id)arg1;
- (id)customNegScatterXFormulas;
- (id)customPosScatterXFormulas;
- (id)customNegFormulas;
- (id)customPosFormulas;
- (id)columnFormulas;
- (id)rowFormulas;
- (int)formulasDirection;
- (id)dataFormulas;
- (void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1;
- (BOOL)p_tableHasCell:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1 withCalcEngine:(id)arg2;
- (id)expandSingleRangeForProposedCategoryLabels:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)setImportUpgradeCondition:(id)arg1;
- (void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2;
- (id)seriesDimensionForFormulaIndex:(unsigned int)arg1;
- (void)setEditingStorageOverride:(id)arg1;
- (void)clearEditingIsPhantomOverride;
- (void)setEditingIsPhantomOverride:(BOOL)arg1;
- (BOOL)categoryLabelFormulasAreAllStatic;
- (BOOL)seriesLabelFormulasAreAllStatic;
- (BOOL)labelFormulasAreAllStatic;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3;
- (void)setFormulaStorage:(id)arg1;
- (void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2;
- (id)referencedEntitiesInMap:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(BOOL)arg2;
- (void)p_repairMissingCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1;
- (void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1;
- (void)p_disconnectLabelsInMap:(id)arg1 ofType:(int)arg2;
- (BOOL)p_tableHasRange:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 withCalcEngine:(id)arg2;
- (BOOL)p_labelsAreStaticInMap:(id)arg1 ofType:(int)arg2;
- (id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned int*)arg2;
- (unsigned int)p_labelIndexForSeriesNameSeriesIndex:(unsigned int)arg1;
- (id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned int)arg2;
- (void)p_reregister:(BOOL)arg1 withCalculationEngine:(id)arg2;
- (void)repairMissingCategoryLabelsInMap:(id)arg1;
- (void)repairMissingSeriesLabelsInMap:(id)arg1;
- (void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)p_detectAndRepairDeletedFormulas:(id)arg1 forRewriteSpec:(id)arg2;
- (BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1;
- (void)p_registerHubFormulaWithCalcEngine:(id)arg1;
- (void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2;
- (id)referencedEntities;
- (void)synchronizeModelFromFormulaStorage:(id)arg1;
- (void)setFormulaStorage:(id)arg1 doRegistration:(BOOL)arg2;
- (void)p_registerFormulaeWithCalcEngine:(id)arg1;
- (void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1;
- (id)p_formulaWrapperFromTSTFormula:(id)arg1;
- (id)p_tstFormulaFromForumulaWrapper:(id)arg1;
- (int)p_formulaTypeFromDataType:(int)arg1;
- (id)commandToChangeLabelFormulas:(id)arg1 forType:(int)arg2;
- (void)p_hackSetCalcEngineLegacyGlobalID;
- (id)labelFormulasForType:(int)arg1;
- (unsigned int)formulaIndexForSeriesDimension:(id)arg1;
- (BOOL)p_isScatterOrBubble;
- (void)synchronizeModelFromFormulaStorage;
- (void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2;
- (void)p_copyValuesIntoChartModelFromPair:(id)arg1;
- (id)p_untitledLabelWithIndex:(unsigned int)arg1;
- (BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg1;
- (id)formulaStorage;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4;
- (id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (id)initFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartMediatorArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct ChartMediatorFormulaStorage {} *x5; boolx6; boolx7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
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
- (void)invalidateAndSynchronizeMediator;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (BOOL)isPhantom;
- (int)scatterFormat;
- (id)dataFormatterForAxis:(id)arg1;
- (id)initWithChartInfo:(id)arg1;
- (id)calculationEngine;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (struct { BOOL x1; BOOL x2; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (BOOL)serializeCalculations;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)retainForCalculationEngine:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartMediatorArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct ChartMediatorFormulaStorage {} *x5; boolx6; boolx7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;

@end
