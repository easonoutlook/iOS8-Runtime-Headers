/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem  {
    unsigned int mStride;
    float mAngleInDegrees;
    float mAngleInRadians;
}

@property(readonly) unsigned int stride;


- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)stride;
- (id)p_overrideLabelStringForHitTestingEmptyLabel;
- (id)p_axisFromLayoutItem;
- (int)p_smallestSecondValueLabelIndex:(int)arg1 start:(int)arg2 end:(int)arg3 inLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 paragraphStyle:(id)arg5;
- (int)p_smallestSecondValueLabelIndex:(int)arg1 start:(int)arg2 end:(int)arg3 inLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 paragraphStyle:(id)arg5 isTop:(BOOL)arg6;
- (void)p_rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 andTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 inLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forIndex:(unsigned int)arg4 paragraphStyle:(id)arg5;
- (unsigned int)p_computeAutoStrideInLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForRenderingLabel:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 usingString:(id)arg6 stride:(unsigned int*)arg7 useAngle:(BOOL)arg8;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutSpaceRectForAllLabels;
- (struct CGPoint { float x1; float x2; })labelAnchorForPosition:(int)arg1 degrees:(float)arg2;
- (struct CGPoint { float x1; float x2; })axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 unrotatedSize:(struct CGSize { float x1; float x2; })arg4 unitSpaceValue:(double)arg5;
- (id)selectionPathLabelType;
- (unsigned int)strideInLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showLabelsForAxis:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id)arg2;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)labelsLayoutItem;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 usingString:(id)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4 useAngle:(BOOL)arg5;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)labelStringForAxis:(id)arg1 index:(unsigned int)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 outElementSize:(struct CGSize { float x1; float x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1 axis:(id)arg2;
- (unsigned int)numberOfLabelsForAxis:(id)arg1;
- (id)axisLayoutItem;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned int)arg2;
- (id)mutationTuplesToApplyDuringResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (void)clearAll;

@end
