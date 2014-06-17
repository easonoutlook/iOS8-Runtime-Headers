/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell;

@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate> {
    UITableViewCell *_cell;
}


- (BOOL)isInline;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;

@end
