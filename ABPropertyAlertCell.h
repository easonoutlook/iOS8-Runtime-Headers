/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPropertyGroupAlertItem;

@interface ABPropertyAlertCell : ABPropertySimpleCell <ABPickerControllerDelegate> {
}

@property(readonly) ABPropertyGroupAlertItem * alertItem;

+ (BOOL)wantsChevron;

- (BOOL)shouldPerformDefaultAction;
- (id)alertItem;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)performDefaultAction;

@end
