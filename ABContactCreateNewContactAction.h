/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, UIViewController;

@interface ABContactCreateNewContactAction : ABContactAction <ABNewPersonViewControllerDelegate> {
    CNContact *_createdContact;
    UIViewController *_presentingViewController;
}

@property(retain) CNContact * createdContact;
@property UIViewController * presentingViewController;


- (void)setPresentingViewController:(id)arg1;
- (id)presentingViewController;
- (void)dealloc;
- (id)createdContact;
- (void)setCreatedContact:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)performActionWithSender:(id)arg1;

@end
