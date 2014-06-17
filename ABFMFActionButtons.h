/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, ABUnknownPersonViewController;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {
    ABUnknownPersonViewController *_upvc;
    UIButton *_messageButton;
    UIButton *_facetimeButton;
    UIButton *_callButton;
}

@property void* displayedPerson;
@property(readonly) BOOL hasTelephonyCapability;


- (void)setDisplayedPerson:(void*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3;
- (void)showFMFCallButton:(BOOL)arg1 withAction:(id)arg2;
- (void)showFMFFacetimeButton:(BOOL)arg1 withAction:(id)arg2;
- (void)showFMFMessageButton:(BOOL)arg1 withAction:(id)arg2;
- (void*)displayedPerson;
- (BOOL)hasTelephonyCapability;

@end
