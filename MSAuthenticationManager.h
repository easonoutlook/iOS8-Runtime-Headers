/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class MSAlertManager;

@interface MSAuthenticationManager : NSObject  {
    int _state;
    MSAlertManager *_alertManager;
    int _bagRefetchCount;
    BOOL _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

@property(getter=isWaitingForAuth,readonly) BOOL waitingForAuth;
@property BOOL isListeningToKeybagChanges;
@property int keybagChangeNotifyToken;

+ (id)sharedManager;

- (void)setKeybagChangeNotifyToken:(int)arg1;
- (void)rearmAuthenticationAlert;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;
- (void)waitForDeviceUnlock;
- (id)_accountForPersonID:(id)arg1;
- (void)setIsListeningToKeybagChanges:(BOOL)arg1;
- (void)_didReceiveAccountConfigChangedNotification;
- (int)keybagChangeNotifyToken;
- (BOOL)isListeningToKeybagChanges;
- (id)initWithAlertManager:(id)arg1;
- (BOOL)isWaitingForAuth;
- (void).cxx_destruct;
- (void)dealloc;

@end
