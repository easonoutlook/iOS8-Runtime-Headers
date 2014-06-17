/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UISegmentedControl, NSArray, NSString, <SKUIFlexibleSegmentedControlDelegate>;

@interface SKUIFlexibleSegmentedControl : UIView  {
    <SKUIFlexibleSegmentedControlDelegate> *_delegate;
    float _desiredSegmentWidth;
    BOOL _isMoreListSelected;
    NSArray *_itemTitles;
    int _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
    int _previousSelectedSegmentIndex;
    UISegmentedControl *_segmentedControl;
    int _selectedSegmentIndex;
}

@property <SKUIFlexibleSegmentedControlDelegate> * delegate;
@property float desiredSegmentWidth;
@property(copy) NSArray * itemTitles;
@property int maximumNumberOfVisibleItems;
@property(readonly) int moreListIndex;
@property(copy) NSString * moreListTitle;
@property int selectedSegmentIndex;


- (id)itemTitles;
- (void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_valueChangeAction:(id)arg1;
- (float)desiredSegmentWidth;
- (void)setMaximumNumberOfVisibleItems:(int)arg1;
- (int)maximumNumberOfVisibleItems;
- (void)setMoreListTitle:(id)arg1;
- (id)moreListTitle;
- (void)setItemTitles:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForSegmentWithIndex:(int)arg1;
- (int)moreListIndex;
- (void)cancelMoreList;
- (void)setDesiredSegmentWidth:(float)arg1;
- (void).cxx_destruct;
- (int)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:(int)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end