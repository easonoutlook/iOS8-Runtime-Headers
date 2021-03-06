/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageEditor : TSDMediaEditor <TSDStylePresetsInspectorPaneDelegate> {
}


- (void)insertNewline:(id)arg1;
- (id)stroke;
- (id)reflectionForEffectsInspector:(id)arg1;
- (float)opacityForEffectsInspector:(id)arg1;
- (id)shadowForEffectsInspector:(id)arg1;
- (id)selectedImageObjects;
- (BOOL)firstImageIsPortrait;
- (BOOL)p_canResetMask;
- (void)resetMask:(id)arg1;
- (BOOL)p_canToggleMaskEditMode;
- (void)toggleMaskEditMode:(id)arg1;
- (BOOL)p_canRemoveInstantAlpha;
- (void)removeInstantAlpha:(id)arg1;
- (BOOL)p_canEnterInstantAlphaMode;
- (void)toggleInstantAlphaMode:(id)arg1;
- (void)beginInstantAlphaMode:(id)arg1;
- (BOOL)p_canHandleInsertNewline;
- (id)firstImageInfo;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)topLevelInspectorAutosaveName;
- (struct CGSize { float x1; float x2; })imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize { float x1; float x2; })arg2;
- (id)swatchRenderingOperationForPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 view:(id)arg5;
- (id)imageForPreset:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

@end
