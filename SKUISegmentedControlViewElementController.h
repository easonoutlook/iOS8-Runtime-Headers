/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, SKUIMenuPopoverController, SKUIFlexibleSegmentedControl, UIView, SKUIPickerView, SKUIFocusedTouchGestureRecognizer, UIViewController, SKUISegmentedControlViewElement;

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIPickerViewDelegate> {
    SKUIClientContext *_clientContext;
    int _defaultMaximumNumberOfVisibleItems;
    float _desiredSegmentedWidth;
    UIViewController *_parentViewController;
    SKUIFocusedTouchGestureRecognizer *_pickerDismissGestureRecognizer;
    SKUIPickerView *_pickerView;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
    SKUISegmentedControlViewElement *_viewElement;
    float _desiredSegmentWidth;
}

@property(retain) SKUIClientContext * clientContext;
@property int defaultMaximumNumberOfVisibleItems;
@property float desiredSegmentWidth;
@property UIViewController * parentViewController;
@property(readonly) UIView * segmentedControlView;


- (float)desiredSegmentWidth;
- (int)defaultMaximumNumberOfVisibleItems;
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(int)arg2;
- (void)_dismissPickerViewAction:(id)arg1;
- (void)_dismissPickerView;
- (void)_showPickerViewMoreListWithTitles:(id)arg1;
- (void)_showPopoverMoreListWithTitles:(id)arg1;
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;
- (id)_segmentedControl;
- (void)_connectToSegmentedControl:(id)arg1;
- (void)setDesiredSegmentWidth:(float)arg1;
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(int)arg2;
- (void)_destroyPopoverController;
- (void)setDefaultMaximumNumberOfVisibleItems:(int)arg1;
- (id)segmentedControlView;
- (void)reloadAfterDocumentUpdate;
- (void)pickerView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)clientContext;
- (id)initWithViewElement:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)setParentViewController:(id)arg1;
- (id)parentViewController;
- (void)dealloc;

@end