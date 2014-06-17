/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject<TSCHMediatorProvider>, TSCHChartInfo, TSCHChunkManager;

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSDReducableInfo, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSSThemedObject, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient> {
    TSCHChartInfo *mChart;
    TSPObject<TSCHMediatorProvider> *mMediatorPersistentObject;
    TSCHChunkManager *mChunkManager;
}

@property(readonly) TSCHChartInfo * chart;
@property(readonly) TSCHChunkManager * chunkManager;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;

- (Class)layoutClass;
- (id)chart;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (BOOL)canSizeBeChangedIncrementally;
- (BOOL)supportsHyperlinks;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (BOOL)shouldAddMultiDataBuildWhenAddingToDocument;
- (BOOL)reverseChunkingIsSupported;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)tsaMoveToPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsForPositioning;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (struct CGSize { float x1; float x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (void)p_sendInvalidationWithKind:(int)arg1 details:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)p_processAllChartStrings:(id)arg1;
- (void)p_searchString:(id)arg1 atSelectionPath:(id)arg2 forString:(id)arg3 options:(unsigned int)arg4 hitBlock:(id)arg5;
- (void)coalesceChanges:(id)arg1;
- (void)setPersistentMediator:(id)arg1;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)searchForSpellingErrors:(id)arg1 stop:(BOOL*)arg2;
- (id)searchForString:(id)arg1 options:(unsigned int)arg2 onHit:(id)arg3;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (BOOL)hasBackgroundLayerForPieChart;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned int)arg2;
- (id)childInfos;
- (Class)editorClass;
- (id)applyStyleSwapTuple:(id)arg1;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (id)p_drawableGeometry;
- (id)applyStyleSwapTuples:(id)arg1;
- (id)animationFilters;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)chunkManager;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14;
- (Class)repClass;
- (id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 legendFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (void)performBlockWithStylesheetForAddingStyles:(id)arg1;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (id)referencedStyles;
- (id)commandToReplaceCustomFormat:(id)arg1 withReplacementFormat:(id)arg2;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormatWrapper:(id)arg1;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)componentRootObject;
- (void)willModify;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)aspectRatioLocked;

@end
