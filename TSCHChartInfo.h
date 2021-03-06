/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSCHChartDrawableInfo, TSCHChartMediator, TSCHLegendModel, TSCHChartModel, TSCHChartLayoutCache, TSCHChartStylePreset, TSPLazyReference, <TSCHStyleActAlike>, TSCHChartType, NSArray, NSString, NSMutableDictionary, NSMutableArray, TSDInfoGeometry;

@interface TSCHChartInfo : NSObject <TSCHStyleOwning, TSCHUnretainedParent, NSCopying> {
    TSCHChartModel *mModel;
    <TSCHStyleActAlike> *mStyle;
    <TSCHStyleActAlike> *mNonStyle;
    TSCHChartType *mChartType;
    TSCHLegendModel *mLegendModel;
    TSCHChartMediator *mChartMediator;
    TSPLazyReference *mLazyPreset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mInnerChartFrame;
    <TSCHStyleActAlike> *mLegendStyle;
    <TSCHStyleActAlike> *mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mThemeSeriesStyles;
    NSMutableArray *mPrivateSeriesStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    struct CGPoint { 
        float x; 
        float y; 
    } mPreviewOrigin;
    BOOL mDisplayMessageOnRepCreation;
    NSString *mMessageString;
    double mMessageDuration;
    TSDInfoGeometry *mNonInfoGeometry;
    TSCHChartDrawableInfo *mDrawableInfo;
    BOOL mNeedsCalcEngineDependentUpgrade;
    BOOL mNeedsCalcEngineDependentImport;
    NSMutableDictionary *mStyleViewProxyMap;
    NSArray *mStyleViewProxyParagraphStyleArray;
    unsigned int mLastSeriesIndex;
    NSString *mLastAppliedFillSetLookupString;
}

@property(readonly) BOOL hasSetDefaultLayoutSettings;
@property struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; } defaultLayoutSettings;
@property(readonly) TSCHChartLayoutCache * sceneAreaLayoutItemCache;
@property(readonly) TSCHChartDrawableInfo * drawableInfo;
@property(retain) TSCHChartType * chartType;
@property(retain) TSCHChartModel * model;
@property(retain) TSCHLegendModel * legend;
@property(retain) TSCHChartMediator * mediator;
@property(copy) TSDInfoGeometry * geometry;
@property struct CGPoint { float x1; float x2; } previewOrigin;
@property(readonly) TSCHChartStylePreset * preset;
@property(readonly) BOOL isPhantom;
@property(readonly) struct CGSize { float x1; float x2; } minimumChartBodySize;
@property(readonly) int gridDirection;
@property BOOL displayMessageOnRepCreation;
@property(retain) NSString * informationalMessageString;
@property double informationalMessageDuration;
@property(readonly) BOOL wantsDeferredUpgradeOrImport;
@property(copy) NSString * lastAppliedFillSetLookupString;

+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
+ (id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(id)arg2;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (id)specificNumberFormatTypeProperties;
+ (id)specificPropertiesThatCanContainCustomFormats;
+ (id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (id)propertiesThatInvalidateModel;
+ (id)p_chartTypeTo3DScalePropertyPairs;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (id)specificPropertiesThatCanContainCustomNumberFormats;
+ (id)specificPropertiesThatCanContainCustomDateFormats;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)paragraphStyleIndexProperties;
+ (BOOL)groupedShadowsForChartModel:(id)arg1;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned int)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
+ (id)genericParagraphStyleIndexProperties;

- (Class)layoutClass;
- (id)preset;
- (void)setPreset:(id)arg1;
- (int)elementKind;
- (void)setLegend:(id)arg1;
- (void)setChartType:(id)arg1;
- (id)defaultProperties;
- (id)chartType;
- (id)legend;
- (id)valueForProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)model;
- (void)setModel:(id)arg1;
- (id)style;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)context;
- (void)dealloc;
- (id)init;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; int x4; int x5; struct RectArchive {} *x6; struct Reference {} *x7; struct ChartGridArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; int x12; boolx13; boolx14; struct Reference {} *x15; struct Reference {} *x16; struct RepeatedPtrField<TSP::Reference> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; struct SparseReferenceArrayArchive {} *x22; struct SparseReferenceArrayArchive {} *x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; unsigned int x25; int x26; unsigned int x27[1]; }*)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; int x4; int x5; struct RectArchive {} *x6; struct Reference {} *x7; struct ChartGridArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; int x12; boolx13; boolx14; struct Reference {} *x15; struct Reference {} *x16; struct RepeatedPtrField<TSP::Reference> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; struct SparseReferenceArrayArchive {} *x22; struct SparseReferenceArrayArchive {} *x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; unsigned int x25; int x26; unsigned int x27[1]; }*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)p_allStylesAndNonStylesThatCanHaveCustomNumberFormats;
- (id)commandToApplyViewProxiesToModel;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (void)p_setDrawableInfo:(id)arg1;
- (void)applyChartStyleState:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)intentCommandToApplyFillSet:(id)arg1;
- (id)styleSwapCommandToApplyFillSet:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned int)arg2;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (id)viewOverrideMapForStyleOwner:(id)arg1;
- (void)performUpgradeForPersistentChartInfo:(id)arg1 archiveVersion:(unsigned long long)arg2 innerChartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 isFromPasteboard:(BOOL)arg4;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct ChartModelArchive {} *x4; struct Reference {} *x5; struct LegendModelArchive {} *x6; struct RectArchive {} *x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; int x13; int x14; struct SparseReferenceArrayArchive {} *x15; struct SparseReferenceArrayArchive {} *x16; struct Reference {} *x17; struct Reference {} *x18; struct Point {} *x19; struct Reference {} *x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; int x22; int x23; boolx24; int x25; unsigned int x26[1]; }*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (unsigned int)nonStyleIndexForStyleOwnerRef:(id)arg1;
- (unsigned int)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (float)maximumExplosion;
- (float)radiusForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withMaxExplosion:(float)arg2;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (void)setInformationalMessageDuration:(double)arg1;
- (double)informationalMessageDuration;
- (void)setInformationalMessageString:(id)arg1;
- (id)informationalMessageString;
- (void)setDisplayMessageOnRepCreation:(BOOL)arg1;
- (BOOL)displayMessageOnRepCreation;
- (struct CGPoint { float x1; float x2; })previewOrigin;
- (void)performDeferredUpgradeAndImportOperations;
- (BOOL)wantsDeferredUpgradeOrImport;
- (id)fillsForSeriesAndTheme;
- (id)commandToChangeAllChartFontsToFamilyName:(id)arg1;
- (id)commandToScaleAllChartFontsBy:(float)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned int)arg2;
- (id)childInfos;
- (float)sageDepthFactorForExport;
- (void)updateTitlesForExportingModel:(id)arg1;
- (void)setChartNonstyle:(id)arg1;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)categoryAxisStyleCount;
- (unsigned int)valueAxisStyleCount;
- (id)nonStyleForSeries:(id)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)legendNonStyle;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 forTheme:(id)arg2;
- (id)masterFontNameForInspectors;
- (unsigned int)addParagraphStyle:(id)arg1;
- (Class)editorClass;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (id)infoGeometryForDesiredLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)chartMoveToPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (int)gridDirection;
- (void)setLastAppliedFillSetIdentifier:(id)arg1;
- (void)setPreviewOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMediator:(id)arg1;
- (id)modelForDataSetIndex:(unsigned int)arg1;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(float)arg2;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (id)nonStyleForAxis:(id)arg1;
- (id)styleForAxis:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 withSeriesCount:(unsigned int)arg2 forTheme:(id)arg3;
- (BOOL)isPhantom;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })resizedLegendFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 oldChartSize:(struct CGSize { float x1; float x2; })arg2 newChartSize:(struct CGSize { float x1; float x2; })arg3;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone { }*)arg2 context:(id)arg3;
- (id)p_init;
- (float)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (float)p_titleAccommodationWithLegendSize:(struct CGSize { float x1; float x2; })arg1 optionalLayout:(id)arg2;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (void)p_setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2;
- (id)legendStyle;
- (struct CGSize { float x1; float x2; })minimumChartBodySize;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (id)p_swapTuplesForMutations:(id)arg1 isForImport:(BOOL)arg2;
- (unsigned int)numberOfThemeSeriesStyles;
- (BOOL)seriesStyleIsPrivate:(id)arg1;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (id)seriesNonstyleForSeriesIndex:(unsigned int)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned int)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutationsForImport:(id)arg1;
- (id)swapTuplesForMutations:(id)arg1;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (id)p_genericToDefaultPropertyMap;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (id)valueAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)categoryAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)valueAxisStyleAtIndex:(unsigned int)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned int)arg1;
- (id)mediator;
- (BOOL)isSingleCircleSpecialCase;
- (id)nonstyle;
- (int)specificPropertyForGeneric:(int)arg1;
- (Class)repClass;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (void)debugLayoutCache;
- (id)sceneAreaLayoutItemCache;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })defaultLayoutSettings;
- (void)setDefaultLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg1;
- (BOOL)hasSetDefaultLayoutSettings;
- (id)clamped3DRotationPropertyObject;
- (void)setLastAppliedFillSetLookupString:(id)arg1;
- (id)fillSetRepresentingInverseOfApplyingFillSet:(id)arg1;
- (id)lastAppliedFillSetLookupString;
- (id)tuplesToApplyState:(id)arg1;
- (id)chartStyleState;
- (id)paragraphStyleAtIndex:(unsigned int)arg1;
- (id)styleOwnerForRef:(id)arg1;
- (id)drawableInfo;
- (BOOL)isSingleCircleSpecialCaseOutSeries:(id*)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (void)clearParent;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (id)styleOwnerRefForStyleOwner:(id)arg1;
- (id)allStyleOwners;
- (void)performBlockWithStylesheetForAddingStyles:(id)arg1;
- (void)p_breakUpFontName:(id)arg1 isBold:(BOOL*)arg2 isItalic:(BOOL*)arg3;
- (id)paragraphStyles;
- (id)chartInfo;
- (id)create3DSceneWithLayoutSettings:(const struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; }*)arg1;
- (id)objectValueForProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (void)willModify;

@end
