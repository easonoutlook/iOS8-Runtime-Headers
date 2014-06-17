/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderEditor, <EKStyleProvider>, <EKReminderViewControllerDelegate>, EKEventStore, EKReminder;

@interface EKReminderViewController : UIViewController <EKCalendarItemEditorDelegate, EKReminderEditorDelegate, EKPickerTableViewDelegate> {
    float _minimumTableHeight;
    BOOL _shouldShowDatePicker;
    id _datePickerTarget;
    SEL _datePickerAction;
    <EKReminderViewControllerDelegate> *_delegate;
    EKReminderEditor *_editor;
}

@property(retain) EKReminder * reminder;
@property(retain) EKEventStore * eventStore;
@property(retain) <EKStyleProvider> * styleProvider;
@property <EKReminderViewControllerDelegate> * delegate;
@property(retain) EKReminderEditor * editor;


- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (id)navigationItem;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)saveReminderAnimated:(BOOL)arg1;
- (void)didEndDatePickingWithTarget:(id)arg1 animated:(BOOL)arg2;
- (void)willBeginDatePickingWithDate:(id)arg1 target:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 minimumTableHeight:(float)arg5;
- (void)editItemChanged;
- (void)viewSizeChangedAnimated:(BOOL)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)pickerTableViewDidChangeDatePickerInterval:(id)arg1;
- (void)setEditor:(id)arg1;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(id)arg1 didChangeHeightAnimated:(BOOL)arg2;
- (void)setEventStore:(id)arg1;
- (id)eventStore;
- (id)viewForActionSheet;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end