/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardGroupItem, NSArray;

@interface ABContactCell : UITableViewCell  {
    BOOL _addedConstantsConstraints;
    NSArray *_variableConstraints;
    BOOL _hasBeenDisplayed;
    ABCardGroupItem *_cardGroupItem;
    float _leftContentMargin;
    float _rightContentMargin;
}

@property BOOL showSeparator;
@property(retain) ABCardGroupItem * cardGroupItem;
@property float leftContentMargin;
@property float rightContentMargin;
@property BOOL hasBeenDisplayed;

+ (BOOL)requiresConstraintBasedLayout;

- (BOOL)shouldPerformDefaultAction;
- (void)updateConstraints;
- (void)prepareForReuse;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setHasBeenDisplayed:(BOOL)arg1;
- (BOOL)hasBeenDisplayed;
- (void)setRightContentMargin:(float)arg1;
- (float)rightContentMargin;
- (void)setLeftContentMargin:(float)arg1;
- (float)leftContentMargin;
- (BOOL)showSeparator;
- (void)setShowSeparator:(BOOL)arg1;
- (void)performAccessoryAction;
- (BOOL)shouldPerformAccessoryAction;
- (id)variableConstraints;
- (id)constantConstraints;
- (float)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (id)cardGroupItem;
- (void)performDefaultAction;

@end
