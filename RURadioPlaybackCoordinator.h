/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPAVRoutingController, RUPlaybackTimeoutInfoController, MPUserNotification, NSObject<OS_dispatch_source>, MPAVRoute, MPUReportingController, RadioStation, NSDate, RURadioAVPlayer;

@interface RURadioPlaybackCoordinator : NSObject <MPAVRoutingControllerDelegate> {
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    BOOL _deviceIsDocked;
    BOOL _deviceIsLocked;
    BOOL _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    BOOL _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    RadioStation *_playbackNotificationStation;
    BOOL _playbackIsPaused;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    RUPlaybackTimeoutInfoController *_playbackTimeoutInfoController;
    MPUserNotification *_playbackTimeoutNotification;
    BOOL _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    NSObject<OS_dispatch_source> *_presentPlaybackTimeoutTimerSource;
    BOOL _wasUsingBackgroundNetwork;
    RURadioAVPlayer *_player;
    RadioStation *_currentStation;
    MPUReportingController *_reportingController;
}

@property(readonly) RURadioAVPlayer * player;
@property(retain) RadioStation * currentStation;
@property(retain) MPUReportingController * reportingController;


- (id)player;
- (void)setReportingController:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification { }*)arg1 withResponseFlags:(unsigned long)arg2;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (BOOL)_isRadioRelevantItem:(id)arg1;
- (void)_setupPlayerWithRadioPlaybackContext:(id)arg1;
- (void)setCurrentStation:(id)arg1;
- (id)reportingController;
- (void)_cancelPresentPlaybackTimeoutTimer;
- (void)_cancelPauseTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_itemIsLikedDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangeNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_updatePlaybackTimerForDeviceStateChange;
- (BOOL)_isPauseTimeoutActive;
- (void)_dismissExpiredPlaybackTimeoutNotificationForced:(BOOL)arg1;
- (void)_resetPlaybackTimeoutInformation;
- (void)setupPlaybackQueueWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (id)currentStation;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;

@end
