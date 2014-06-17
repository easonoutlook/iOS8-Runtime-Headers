/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {
    BOOL _siriRestrictedOnLockScreen;
    unsigned char _lockedState;
    int _lockscreenNotifyToken;
}


- (void)_unregisterForLockscreenUpdates;
- (void)_registerForLockscreenUpdates;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
