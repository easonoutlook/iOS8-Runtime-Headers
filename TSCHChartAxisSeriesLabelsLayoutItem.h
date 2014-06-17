/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem  {
}


- (id)initWithParent:(id)arg1;
- (id)selectionPathLabelType;
- (unsigned int)strideInLayoutArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showLabelsForAxis:(id)arg1;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (id)labelStringForAxis:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1 axis:(id)arg2;
- (unsigned int)numberOfLabelsForAxis:(id)arg1;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned int)arg2;

@end