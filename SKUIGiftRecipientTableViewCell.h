/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, ABPeoplePickerNavigationController, UILabel, UIView, NSAttributedString, NSString, SKUIGiftContactSearchController, SKUIGiftComposeRecipientView;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate> {
    void *_addressBook;
    ABPeoplePickerNavigationController *_peoplePickerController;
    UILabel *_placeholderLabel;
    SKUIGiftComposeRecipientView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
}

@property(copy) NSAttributedString * attributedPlaceholder;
@property(copy) NSString * label;
@property(copy) NSArray * recipientAddresses;


- (void)searchControllerDidFinishSearch:(id)arg1;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)_sendDidUpdateSearchController;
- (void)_sendDidChangeRecipients;
- (void)_resetSearchController;
- (void)_sendDismissPeoplePicker;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(BOOL)arg2;
- (void)presentSearchResultsPopover:(id)arg1 animated:(BOOL)arg2;
- (void)setRecipientAddresses:(id)arg1;
- (id)recipientAddresses;
- (void*)_addressBook;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1;
- (id)label;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)dealloc;

@end
