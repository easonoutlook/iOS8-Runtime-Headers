/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject  {
    BOOL _settingUpActivationState;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _isNonUIInstall;
    BOOL _isVendorInstall;
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    unsigned int _state;
}

@property(readonly) BOOL isNonUIInstall;
@property(readonly) BOOL isVendorInstall;
@property(readonly) BOOL isInternalInstall;
@property(readonly) BOOL isCarrierInstall;
@property(readonly) BOOL isActivated;
@property(readonly) BOOL isExpired;
@property(readonly) NSString * uniqueDeviceIdentifier;
@property(setter=_setState:) unsigned int _state;
@property BOOL _settingUpActivationState;
@property BOOL _isVendorInstall;
@property BOOL _isInternalInstall;
@property BOOL _isNonUIInstall;
@property BOOL _isCarrierInstall;
@property BOOL _hasShownWaitingAlertThisSession;
@property BOOL _hasShownMismatchedSIM;

+ (id)sharedInstance;

- (BOOL)isActivated;
- (BOOL)isInternalInstall;
- (void)set_hasShownWaitingAlertThisSession:(BOOL)arg1;
- (BOOL)_hasShownWaitingAlertThisSession;
- (void)set_hasShownMismatchedSIM:(BOOL)arg1;
- (BOOL)_hasShownMismatchedSIM;
- (void)set_isVendorInstall:(BOOL)arg1;
- (BOOL)_isVendorInstall;
- (void)set_isNonUIInstall:(BOOL)arg1;
- (BOOL)_isNonUIInstall;
- (void)set_isCarrierInstall:(BOOL)arg1;
- (BOOL)_isCarrierInstall;
- (void)set_isInternalInstall:(BOOL)arg1;
- (void)set_settingUpActivationState:(BOOL)arg1;
- (BOOL)_settingUpActivationState;
- (id)uniqueDeviceIdentifier;
- (BOOL)isCarrierInstall;
- (void)_resetActivationState;
- (void)_activationFailed;
- (int)lockdownState;
- (void)_setupActivationState;
- (void)_calculateInstallType;
- (BOOL)isVendorInstall;
- (BOOL)isNonUIInstall;
- (BOOL)isExpired;
- (BOOL)_isInternalInstall;
- (void)_setState:(unsigned int)arg1;
- (unsigned int)_state;
- (id)description;
- (void)dealloc;
- (id)init;

@end
