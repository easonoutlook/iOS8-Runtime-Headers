/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeEditor : TSDStyledDrawableEditor <TSDStylePresetsInspectorPaneDelegate> {
    BOOL mFillInspectorDisclosed;
}

@property BOOL fillInspectorDisclosed;


- (void)setStroke:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)stroke;
- (void)stylePresetInspector:(id)arg1 applyPresetAfterRedefine:(id)arg2 toObject:(id)arg3;
- (void)setLineEnd:(id)arg1 isLeftLineEnd:(BOOL)arg2;
- (BOOL)shouldShowShapeIntersectionInspector;
- (BOOL)shouldShowLineInspector;
- (BOOL)shouldShowCalloutInspector;
- (BOOL)shouldShowArrowInspector;
- (BOOL)shouldShowStarInspector;
- (BOOL)shouldShowPolygonInspector;
- (BOOL)shouldShowRoundedRectInspector;
- (BOOL)suppressesPresetInspector;
- (BOOL)suppressesStyleInspector;
- (BOOL)suppressesTextInspector;
- (void)setFillInspectorDisclosed:(BOOL)arg1;
- (id)newApplyPresetCommandFromShape:(id)arg1 preset:(id)arg2 applyTextStyle:(BOOL)arg3;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2 useAlternateApplicationBehavior:(BOOL)arg3;
- (BOOL)p_containsOpenPaths;
- (BOOL)infosAreLines;
- (BOOL)p_leftLineEndIsHeadForInfo:(id)arg1;
- (void)performBooleanOperationOnPaths:(unsigned int)arg1;
- (void)beginPathEditing:(id)arg1;
- (void)resetTextAndObjectHandles:(id)arg1;
- (BOOL)canMakePathSmoothOrSharp;
- (void)makePathSharp:(id)arg1;
- (void)makePathSmooth:(id)arg1;
- (void)intersectPaths:(id)arg1;
- (void)makePathEditable:(id)arg1;
- (BOOL)canIntersectPaths;
- (BOOL)shouldShowInspectorForPointPathSourceOfTypes:(id)arg1;
- (BOOL)shouldShowInspectorForScalarPathSourceOfType:(int)arg1;
- (BOOL)suppressesFillInspector;
- (BOOL)infoIsLine:(id)arg1;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)strokeColorPickerTitle;
- (id)strokeSwatches;
- (void)endChangingStrokeWidth:(id)arg1;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
- (id)selectedObjectsSupportingSmartShapeAttributes;
- (id)selectedObjectsSupportingEndpoints;
- (id)selectedObjectsSupportingFill;
- (BOOL)canBeginPathEditing;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canMakePathEditable;
- (BOOL)fillInspectorDisclosed;
- (id)topLevelInspectorAutosaveName;
- (struct CGSize { float x1; float x2; })imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize { float x1; float x2; })arg2;
- (id)swatchRenderingOperationForPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 view:(id)arg5;
- (id)firstShapeInfo;
- (id)imageForPreset:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

@end
