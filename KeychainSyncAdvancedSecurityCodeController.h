/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
    float _cellTextWidth;
    UIFont *_cellFont;
    UIAlertView *_disableRecoveryConfirmationAlert;
    BOOL _showsDisableRecoveryOption;
}

@property BOOL showsDisableRecoveryOption;


- (BOOL)showsDisableRecoveryOption;
- (void)_finishedWithSpecifier:(id)arg1;
- (void)setShowsDisableRecoveryOption:(BOOL)arg1;
- (void)nextPressed;
- (id)specifiers;
- (void)viewDidLoad;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
