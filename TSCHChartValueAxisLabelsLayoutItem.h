/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem  {
}


- (id)initWithParent:(id)arg1;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })labelAnchorForPosition:(int)arg1 degrees:(float)arg2;
- (struct CGPoint { float x1; float x2; })axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 unrotatedSize:(struct CGSize { float x1; float x2; })arg4 unitSpaceValue:(double)arg5;
- (id)selectionPathLabelType;
- (id)labelStringForAxis:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1 axis:(id)arg2;
- (unsigned int)numberOfLabelsForAxis:(id)arg1;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned int)arg2;

@end