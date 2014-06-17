/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell  {
    TableViewManager *_parentTableManager;
    NSMutableDictionary *_cellDict;
    NSIndexPath *_currentIndexPath;
    float _cellXEdgeInset;
    float _neededContentHeight;
    float _computedRightmostEditTextInset;
    float _forcedRightmostEditTextInset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _modifiedContentViewFrame;
}

@property TableViewManager * parentTableManager;
@property(retain) NSMutableDictionary * cellDict;
@property(retain) NSIndexPath * currentIndexPath;
@property(readonly) float neededContentHeight;
@property(readonly) float computedRightmostEditTextInset;
@property float forcedRightmostEditTextInset;


- (float)forcedRightmostEditTextInset;
- (void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3;
- (float)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3 withRemainingContentWidth:(float)arg4;
- (id)parentTableManager;
- (float)verticalInset;
- (float)verticalSpacingForView:(id)arg1 withItem:(id)arg2;
- (float)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (float)leftInsetForView:(id)arg1 withItem:(id)arg2;
- (float)usableContentWidth;
- (float)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2;
- (float)rightInsetForView:(id)arg1 withItem:(id)arg2;
- (float)edgeInsetValue:(id)arg1;
- (id)cellDict;
- (float)computedRightmostEditTextInset;
- (float)neededContentHeight;
- (void)setCellDict:(id)arg1;
- (void)setForcedRightmostEditTextInset:(float)arg1;
- (void)setParentTableManager:(id)arg1;
- (id)accessibilityValue;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCurrentIndexPath:(id)arg1;
- (id)currentIndexPath;
- (void)dealloc;

@end