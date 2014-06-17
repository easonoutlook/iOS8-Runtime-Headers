/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHSelection, TSCHChartType, TSCHChartAxisID, TSCHTextEditing, TSCHChartDrawableInfo, NSDictionary, TSDLayout, NSMutableDictionary;

@interface TSCHChartEditor : TSDDrawableEditor <TSDStylePresetsInspectorPaneDelegate> {
    TSCHSelection *mSelection;
    TSCHTextEditing *mTextEditor;
    TSCHChartType *mDisplayedChartType;
    NSMutableDictionary *mSubselectionState;
    TSCHChartAxisID *mInspectorAxisID;
    BOOL mShouldUpdateCurrentTabBasedOnSubselection;
    NSDictionary *_selectedDataSetNameIndexesByInfo;
}

@property BOOL shouldUpdateCurrentTabBasedOnSubselection;
@property(retain) TSCHTextEditing * textEditor;
@property(retain,readonly) TSDLayout * firstLayout;
@property(copy) TSCHChartAxisID * inspectorAxisID;
@property(readonly) NSDictionary * chartSubselectionState;
@property(readonly) NSDictionary * selectedChartTitleIndexesByInfo;
@property(readonly) NSDictionary * selectedDataSetNameIndexesByInfo;
@property(readonly) NSDictionary * selectedLegendsIndexesByInfo;
@property(readonly) NSDictionary * selectedValueAxisIDsByInfo;
@property(readonly) NSDictionary * selectedCategoryAxisIDsByInfo;
@property(readonly) NSDictionary * selectedAxisTitleAxisIDsByInfo;
@property(readonly) NSDictionary * selectedAxisLabelsAxisIDsByInfo;
@property(readonly) NSDictionary * selectedAxisSeriesLabelsAxisIDsByInfo;
@property(readonly) NSDictionary * selectedSeriesIndexesByInfo;
@property(readonly) NSDictionary * selectedSeriesValueLabelIndexesByInfo;
@property(readonly) NSDictionary * selectedErrorBarGroupsByInfo;
@property(readonly) NSDictionary * selectedTrendLineIndexesByInfo;
@property(readonly) NSDictionary * selectedTrendLineEquationIndexesByInfo;
@property(readonly) NSDictionary * selectedTrendLineR2IndexesByInfo;
@property(readonly) NSDictionary * selectedAxisOrAxisSeriesLabelsAxisIDsByInfo;
@property(readonly) BOOL hasSeriesSelection;
@property(readonly) BOOL hasSeriesValueLabelSelection;
@property(readonly) BOOL hasChartTitleSelection;
@property(readonly) BOOL hasChartDataSetNameSelection;
@property(readonly) BOOL hasAxisTitleSelection;
@property(readonly) BOOL hasLegendSelection;
@property(readonly) BOOL hasAxisLabelsSelection;
@property(readonly) BOOL hasAxisSeriesLabelsSelection;
@property(readonly) BOOL hasErrorBarSelection;
@property(readonly) BOOL hasTrendLineSelection;
@property(readonly) BOOL hasTrendLineEquationSelection;
@property(readonly) BOOL hasTrendLineR2Selection;
@property(readonly) TSCHChartDrawableInfo * firstChartInfo;
@property TSCHChartType * displayedChartType;

+ (BOOL)automaticallyNotifiesObserversOfSelection;
+ (id)keyPathsForValuesAffectingHasLegendSelection;
+ (id)keyPathsForValuesAffectingHasTrendLineR2Selection;
+ (id)keyPathsForValuesAffectingHasTrendLineEquationSelection;
+ (id)keyPathsForValuesAffectingHasTrendLineSelection;
+ (id)keyPathsForValuesAffectingHasErrorBarSelection;
+ (id)keyPathsForValuesAffectingSelectedTrendLineR2IndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedTrendLineEquationIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedTrendLineIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedErrorBarGroupsByInfo;
+ (id)keyPathsForValuesAffectingselectedLegendsIndexesByInfo;
+ (id)keyPathsForValuesAffectingHasChartDataSetNameSelection;
+ (id)keyPathsForValuesAffectingHasChartTitleSelection;
+ (id)keyPathsForValuesAffectingSelectedChartDataSetNameIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedChartTitleIndexesByInfo;
+ (id)keyPathsForValuesAffectingChartSubselectionState;
+ (id)keyPathsForValuesAffectingHasAxisSeriesLabelsSelection;
+ (id)keyPathsForValuesAffectingSelectedAxisSeriesLabelsAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingHasAxisLabelsSelection;
+ (id)keyPathsForValuesAffectingSelectedAxisOrAxisSeriesLabelsAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedAxisLabelsAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingHasAxisTitleSelection;
+ (id)keyPathsForValuesAffectingSelectedAxisTitleAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingHasSeriesValueLabelSelection;
+ (id)keyPathsForValuesAffectingHasSeriesSelection;
+ (id)keyPathsForValuesAffectingSelectedSeriesValueLabelIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedSeriesIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedCategoryAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedValueAxisIDsByInfo;

- (void)underline:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)setShowSeriesLabels:(BOOL)arg1;
- (BOOL)setChartType:(id)arg1;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)model;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)dealloc;
- (id)selectedDataSetNameIndexesByInfo;
- (BOOL)shouldUpdateCurrentTabBasedOnSubselection;
- (void)setInspectorAxisID:(id)arg1;
- (id)inspectorAxisID;
- (void)setDisplayedChartType:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 onSubselectionType:(id)arg3;
- (void)setString:(id)arg1 forSelection:(id)arg2;
- (void)setShowHiddenData:(BOOL)arg1;
- (void)setBevelEdges:(BOOL)arg1;
- (void)setColumnShape:(int)arg1;
- (void)setLabelPosition:(int)arg1 forAxisID:(id)arg2;
- (void)setNumberFormatType:(int)arg1 forAxisID:(id)arg2;
- (void)setNumberFormat:(id)arg1 forAxisID:(id)arg2;
- (void)setLabelRotation:(float)arg1 forAxisID:(id)arg2;
- (void)setMinUserValue:(double)arg1 forAxisID:(id)arg2;
- (void)setMaxUserValue:(double)arg1 forAxisID:(id)arg2;
- (void)setScale:(int)arg1 forAxisID:(id)arg2;
- (void)setMinorGridCount:(int)arg1 forAxisID:(id)arg2;
- (void)setMajorGridCount:(int)arg1 forAxisID:(id)arg2;
- (void)setNumberOfDecades:(int)arg1 forAxisID:(id)arg2;
- (id)chartLayoutsForChartDrawableInfo:(id)arg1;
- (id)localizedValueLabelsTabName;
- (id)endDynamic3DChartDepthChangesForChart:(id)arg1;
- (void)setDynamic3DChartDepthValue:(float)arg1 forChart:(id)arg2;
- (void)beginDynamic3DChartDepthChangesForChart:(id)arg1;
- (float)depthValueForChart:(id)arg1;
- (void)setShowLine:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowTitle:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMinorTickmarks:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMinorGridlines:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMajorTickmarks:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMajorGridlines:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowSeriesLabels:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowLabels:(BOOL)arg1 forAxisID:(id)arg2;
- (void)multiplyAllFontSizesBy:(float)arg1;
- (void)setAllFontsToFamilyNamed:(id)arg1;
- (void)setShowLabelsInFront:(BOOL)arg1;
- (void)setSeriesLabelValueAxis:(int)arg1;
- (void)setBubbleDimensionType:(int)arg1;
- (void)setShowNegativeBubbles:(BOOL)arg1;
- (void)setSeriesNumberFormat:(id)arg1 withFormatType:(int)arg2;
- (void)setSeriesNumberFormatType:(int)arg1;
- (void)setSeriesNumberFormat:(id)arg1;
- (void)setSeriesPercentNumberFormat:(id)arg1;
- (void)setChartLabelExplosion:(float)arg1 labelsOn:(BOOL)arg2;
- (void)setChartLabelPosition:(int)arg1 useSelection:(BOOL)arg2 updateShowProperty:(BOOL)arg3;
- (void)setMultiDataSetNameLocation:(int)arg1;
- (void)setMultiDataControlType:(int)arg1;
- (void)setAxisForSelectedSeries:(int)arg1;
- (void)setConnectedLineType:(int)arg1 setShowLine:(BOOL)arg2 useSelection:(BOOL)arg3;
- (void)setSymbolType:(int)arg1 useSelection:(BOOL)arg2;
- (void)setShowChartBorder:(BOOL)arg1;
- (void)setTextProperties:(id)arg1 forSelection:(id)arg2;
- (void)setChartTitleAlignment:(int)arg1;
- (unsigned int)p_currentChartSegmentIndex:(id)arg1;
- (void)stylePresetInspector:(id)arg1 didSelectPresetForNonDestructiveApply:(id)arg2;
- (void)forceDataEditingToEnd;
- (id)topLevelInspectorAutosaveName;
- (id)topLevelInspectorViewControllers;
- (float)viewScaleForSelectionWithTargetPointSize:(float)arg1;
- (id)editingSearchReference;
- (void)setSelectionWithSearchReference:(id)arg1;
- (BOOL)hasTrendLineR2Selection;
- (BOOL)hasTrendLineEquationSelection;
- (BOOL)hasTrendLineSelection;
- (BOOL)hasErrorBarSelection;
- (id)selectedTrendLineR2IndexesByInfo;
- (id)selectedTrendLineEquationIndexesByInfo;
- (id)selectedTrendLineIndexesByInfo;
- (id)selectedErrorBarGroupsByInfo;
- (id)selectedLegendsIndexesByInfo;
- (BOOL)hasChartDataSetNameSelection;
- (id)selectedChartDataSetNameIndexesByInfo;
- (id)selectedChartTitleIndexesByInfo;
- (id)chartSubselectionState;
- (id)selectedAxisOrAxisSeriesLabelsAxisIDsByInfo;
- (BOOL)hasSeriesValueLabelSelection;
- (BOOL)hasSeriesSelection;
- (id)selectedSeriesValueLabelIndexesByInfo;
- (id)selectedCategoryAxisIDsByInfo;
- (id)selectedValueAxisIDsByInfo;
- (id)allSelectedChartsDimensions;
- (void)extendSelectionWithPath:(id)arg1 forInfo:(id)arg2;
- (void)toggleSelectionOfPath:(id)arg1 forInfo:(id)arg2;
- (BOOL)canSelectPath:(id)arg1;
- (id)p_orderedChartTypeArray;
- (BOOL)p_canShowChartDataEditor;
- (BOOL)shouldEndEditingToBeginEditingRep:(id)arg1;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditor;
- (id)firstLayout;
- (id)optionalTopSectionCellArrayForPresetPane:(id)arg1;
- (id)moreOptionsTitle;
- (id)imageForPreset:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (void)p_deleteSelectedSeries;
- (void)p_hideSelectedAxisTitles;
- (void)setShowChartTitle:(BOOL)arg1;
- (void)setShowChartLegend:(BOOL)arg1;
- (id)selectedAxisTitleAxisIDsByInfo;
- (id)p_allSelectionPathsForPathType:(id)arg1 info:(id)arg2;
- (void)p_testAndSetFloat:(float)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (void)p_testUserMinMaxProperty:(int)arg1 andSetDouble:(double)arg2 forAxisID:(id)arg3;
- (void)p_testAndSetInt:(int)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (void)p_testAndSetBool:(BOOL)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (id)tuplesToSetSeriesType:(id)arg1 selectedSeries:(id)arg2 forInfo:(id)arg3;
- (void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2;
- (void)p_testAndSetAllSeriesFloatProperty:(int)arg1 toValue:(id)arg2;
- (void)p_postCommand:(id)arg1;
- (void)p_testAndSetAllSeriesIntProperty:(int)arg1 toValue:(id)arg2;
- (void)p_testAndSetSelectedSeriesIntProperty:(int)arg1 toValue:(id)arg2;
- (int)p_calculateNewToggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3;
- (void)p_toggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3;
- (void)p_setInfoObject:(id)arg1 forProperty:(int)arg2;
- (void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2 onChart:(id)arg3 groupOpen:(BOOL*)arg4;
- (void)p_postSyncCommand:(id)arg1;
- (BOOL)allSelectedChartsMatch;
- (BOOL)forceCanvasTextEditingToEnd;
- (void)clearSelectedPathsForInfo:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(unsigned int)arg2;
- (id)selectedAxisSeriesLabelsAxisIDsByInfo;
- (BOOL)hasAxisSeriesLabelsSelection;
- (id)selectedAxisLabelsAxisIDsByInfo;
- (BOOL)hasAxisLabelsSelection;
- (id)p_selectedIndexesByInfoOfType:(id)arg1;
- (id)p_selectedArgumentsByInfoOfType:(id)arg1;
- (id)selectedIndexesOfType:(id)arg1 forInfo:(id)arg2;
- (void)setSelectionPaths:(id)arg1 forPathType:(id)arg2 info:(id)arg3;
- (void)deselectPath:(id)arg1 forInfo:(id)arg2;
- (void)selectPath:(id)arg1 forInfo:(id)arg2;
- (void)p_sendKVONotificationForSubselectionChangeOfType:(id)arg1 forWillNotDid:(BOOL)arg2;
- (id)p_allNoncompatiblePathTypesForPathType:(id)arg1 info:(id)arg2;
- (id)p_pathTypesNotSupportedForSelection;
- (void)p_subselectionStateChangedForInfo:(id)arg1 previousTypes:(id)arg2;
- (id)p_subselectionStateWillChangeForInfo:(id)arg1;
- (void)setShouldUpdateCurrentTabBasedOnSubselection:(BOOL)arg1;
- (void)p_subselectionStateChangedForInfo:(id)arg1;
- (id)p_allSelectedPathTypesForInfo:(id)arg1;
- (id)p_chartRepsForInfos:(id)arg1;
- (BOOL)hasAxisTitleSelection;
- (BOOL)hasChartTitleSelection;
- (BOOL)hasLegendSelection;
- (id)selectedSeriesIndexesByInfo;
- (void)selectParent:(id)arg1;
- (void)deselectAll:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)p_canPerformChangeChartType:(id)arg1;
- (void)changeChartTypeForTag:(id)arg1;
- (int)p_canDoShowOrHideSeriesValueLabels:(id)arg1;
- (void)showOrHideSeriesValueLabels:(id)arg1;
- (int)p_canDoShowOrHideSeriesNames:(id)arg1;
- (void)showOrHideSeriesNames:(id)arg1;
- (void)showOrHideXAxisLabels:(id)arg1;
- (void)showOrHideXAxisTitle:(id)arg1;
- (void)showOrHideYAxis2Labels:(id)arg1;
- (void)showOrHideYAxis2Title:(id)arg1;
- (void)showOrHideYAxisLabels:(id)arg1;
- (void)showOrHideYAxisTitle:(id)arg1;
- (id)displayedChartType;
- (void)showOrHideChartBorders:(id)arg1;
- (void)showOrHideChartLegend:(id)arg1;
- (void)showOrHideChartTitle:(id)arg1;
- (void)strikethrough:(id)arg1;
- (int)p_canPerformShowOrHideChartDataEditor:(id)arg1;
- (void)showOrHideChartDataEditor:(id)arg1;
- (int)p_canPerformShowHideAxisActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6 axisType:(int)arg7 ordinal:(unsigned int)arg8;
- (int)p_canPerformShowHideSeriesActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6;
- (int)p_canPerformShowHideActions:(id)arg1 isEnabled:(BOOL)arg2 showStr:(id)arg3 hideStr:(id)arg4 property:(int)arg5 styleOwner:(id)arg6;
- (int)p_canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)p_canPerformSubselectionEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)p_isInSubselectionMode;
- (int)p_canPerformFormatActions:(SEL)arg1 withSender:(id)arg2;
- (id)firstChartInfo;
- (id)p_layoutForInfo:(id)arg1;
- (void)p_notifyRepsEditorIsSelectingInfos:(id)arg1;
- (void)p_notifyRepsEditorIsDeselectingInfos:(id)arg1;
- (void)p_removeSubselectionStateForInfos:(id)arg1;
- (void)setTextEditor:(id)arg1;
- (id)textEditor;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)selectedPathsOfType:(id)arg1 forInfo:(id)arg2;
- (void)enterChartDataEditor:(id)arg1;
- (void)setSeriesType:(id)arg1;
- (id)allSelectedPathsForInfo:(id)arg1;
- (void)setInfos:(id)arg1;

@end