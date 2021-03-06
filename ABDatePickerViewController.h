/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, <ABDatePickerViewControllerDismissDelegate>;

@interface ABDatePickerViewController : UIViewController  {
    void *_context;
    UIDatePicker *_datePicker;
    <ABDatePickerViewControllerDismissDelegate> *_dismissDelegate;
}

@property void* context;
@property(retain) UIDatePicker * datePicker;
@property <ABDatePickerViewControllerDismissDelegate> * dismissDelegate;

+ (struct CGSize { float x1; float x2; })datePickerSize;

- (id)datePicker;
- (void)setDismissDelegate:(id)arg1;
- (id)dismissDelegate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setContext:(void*)arg1;
- (void*)context;
- (void)dealloc;
- (void)setDatePicker:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;

@end
