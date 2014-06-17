/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, UILabel, KeychainSyncPhoneSettingsFragment, <KeychainSyncViewControllerDelegate>;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UIAlertView *_invalidPhoneNumberAlert;
    UILabel *_footerLabel;
}

@property <KeychainSyncViewControllerDelegate> * delegate;


- (void)controllerDone;
- (void)nextPressed;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;

@end
