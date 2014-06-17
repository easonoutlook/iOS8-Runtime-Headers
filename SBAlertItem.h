/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIAlertView, NSArray;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
    BOOL _pendWhileKeyBagLocked;
    NSArray *_allowedBundleIDs;
    BOOL _allowInCar;
    BOOL _allowMessageInCar;
}

@property BOOL ignoreIfAlreadyDisplaying;
@property BOOL allowInSetup;
@property BOOL pendInSetupIfNotAllowed;
@property BOOL pendWhileKeyBagLocked;
@property(retain) NSArray * allowedBundleIDs;
@property BOOL allowInCar;
@property BOOL allowMessageInCar;

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;

- (BOOL)allowMessageInCar;
- (void)setAllowInCar:(BOOL)arg1;
- (BOOL)allowInCar;
- (void)setAllowedBundleIDs:(id)arg1;
- (id)allowedBundleIDs;
- (void)setPendWhileKeyBagLocked:(BOOL)arg1;
- (BOOL)pendWhileKeyBagLocked;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)allowInSetup;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (BOOL)ignoreIfAlreadyDisplaying;
- (id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)displayActionButtonOnLockScreen;
- (int)alertPriority;
- (BOOL)preventInterruption;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)behavesSuperModally;
- (id)alertItemNotificationSender;
- (id)alertItemNotificationDate;
- (int)alertItemNotificationType;
- (void)noteVolumeOrLockPressed;
- (void)willDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)screenWillUndim;
- (void)didActivate;
- (BOOL)_didEverActivate;
- (void)setPreventLockOver:(BOOL)arg1;
- (BOOL)preventLockOver;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (double)autoDismissInterval;
- (id)shortLockLabel;
- (void)playPresentationSound;
- (BOOL)isCriticalAlert;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)togglesMediaControls;
- (int)unlockSource;
- (BOOL)unlocksScreen;
- (BOOL)undimsScreen;
- (BOOL)allowAutoUnlock;
- (BOOL)allowMenuButtonDismissal;
- (void)cleanPreviousConfiguration;
- (BOOL)hasActiveKeyboardOnScreen;
- (void)_playPresentationSound;
- (BOOL)didPlayPresentationSound;
- (void)setAllowMessageInCar:(BOOL)arg1;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setAllowInSetup:(BOOL)arg1;
- (id)sound;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (BOOL)shouldShowInEmergencyCall;
- (id)lockLabel;
- (void)willActivate;
- (void)dismiss:(int)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)performUnlockAction;
- (BOOL)dismissOnLock;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (Class)alertSheetClass;
- (void)buttonDismissed;
- (void)didDeactivateForReason:(int)arg1;
- (id)alertSheet;
- (id)alertController;
- (void)dismiss;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)init;

@end
