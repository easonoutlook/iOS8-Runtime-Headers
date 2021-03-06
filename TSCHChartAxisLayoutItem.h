/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisLineLayoutItem, TSCHChartAxisID, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTitleLayoutItem, TSCHChartAxisTickMarksLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem  {
    TSCHChartAxisID *mAxisID;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem *mAxisTitle;
    TSCHChartAxisPaddingLayoutItem *mAxisPadding;
    TSCHChartAxisTickMarksLayoutItem *mTickMarks;
    TSCHChartAxisLineLayoutItem *mAxisLine;
    struct CGSize { 
        float width; 
        float height; 
    } mChartBodySize;
}

@property struct CGSize { float x1; float x2; } chartBodySize;
@property(retain) TSCHChartAxisID * axisID;
@property(readonly) int axisPosition;
@property(readonly) TSCHChartAxisTitleLayoutItem * axisTitleLayoutItem;
@property(readonly) TSCHChartAxisPaddingLayoutItem * axisPaddingLayoutItem;
@property(readonly) TSCHChartAxisTickMarksLayoutItem * axisTickMarksLayoutItem;
@property(readonly) TSCHChartAxisLineLayoutItem * axisLineLayoutItem;

+ (id)selectionPathType;

- (int)axisPosition;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })chartBodySize;
- (id)axisPaddingLayoutItem;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (void)p_layoutLabelsNow;
- (id)p_description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (void)setChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)axisTickMarksLayoutItem;
- (id)axisLineLayoutItem;
- (id)axisTitleLayoutItem;
- (void)setAxisID:(id)arg1;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (id)axisID;

@end
