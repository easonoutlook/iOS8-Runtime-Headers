/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching> {
}

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (BOOL)isDraggable;
- (struct CGColor { }*)selectionHighlightColor;
- (Class)layerClass;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRect;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplay;
- (BOOL)p_handleSubselectionTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)allRepsContainedInGroup;
- (void)dynamicOperationDidBegin;
- (BOOL)intersectsUnscaledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldShowCommentHighlight;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1 withSlop:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)handleMultipleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)wantsToHandleTapsWhenLocked;
- (void)processChangedProperty:(int)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (BOOL)shouldShowSelectionHighlight;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInUnscaledCanvas;
- (struct CGPoint { float x1; float x2; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { float x1; float x2; })arg1;

@end
