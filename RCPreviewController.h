/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSHashTable, RCAVPlayer, NSUUID, RCAudioSessionRoutingAssertion, AVPlayerItem, RCAVState, NSMutableDictionary;

@interface RCPreviewController : NSObject <RCAVPlayerDelegate> {
    BOOL _resetUseVoiceMemoSettingsValue;
    BOOL _voiceMemoSettingEnabledNeedsReset;
    BOOL _isPreparingForPreview;
    double _currentTimeTarget;
    double _currentRateTarget;
    RCAudioSessionRoutingAssertion *_activePreviewRouteAssertion;
    RCAudioSessionRoutingAssertion *_preparingToPreviewRouteAssertion;
    NSUUID *_preparingToPreviewRouteAssertionSessionUUID;
    NSHashTable *_weakObservers;
    NSMutableDictionary *_monitoredDispatchSourcesByURL;
    BOOL _useVoiceMemoSettings;
    AVPlayerItem *_AVPlayerItem;
    RCAVState *_AVState;
    RCAVPlayer *_AVPlayer;
    double _currentTimeDelegateUpdateRate;
}

@property(retain) AVPlayerItem * AVPlayerItem;
@property struct { double x1; double x2; } playableTimeRange;
@property double currentTime;
@property(readonly) float rate;
@property(retain) RCAVState * AVState;
@property double currentTimeDelegateUpdateRate;
@property BOOL useVoiceMemoSettings;
@property(readonly) RCAVPlayer * AVPlayer;


- (void)setRate:(float)arg1;
- (id)AVPlayer;
- (double)currentTimeDelegateUpdateRate;
- (void)setAVState:(id)arg1;
- (id)AVPlayerItem;
- (void)_setPreparingToPlay:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)handlePreviewEnded;
- (void)setCurrentTimeDelegateUpdateRate:(double)arg1;
- (struct { double x1; double x2; })playableTimeRange;
- (void)setPlayableTimeRange:(struct { double x1; double x2; })arg1;
- (void)playOrRestart;
- (void)playerDidBecomeInvalid:(id)arg1;
- (void)playerCurrentTimeDidChange:(id)arg1;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)playerCurrentItemDidBecomeReadyToPlay:(id)arg1;
- (void)_performWithObserversBlock:(id)arg1;
- (void)_postDelegateCurrentTimeUpdate;
- (void)_postDelegateCurrentRateChangeToRate:(float)arg1;
- (void)_beginActivePreviewRouteAssertion;
- (void)_endActivePreviewRouteAssertion;
- (void)_handleDidStopPlaybackWithError:(id)arg1;
- (void)_playerCurrentRateDidChangeToRate:(float)arg1 hadPlaybackItem:(BOOL)arg2;
- (id)_AVPlayerIfActive;
- (void)playWithTimeRange:(struct { double x1; double x2; })arg1 startTime:(double)arg2;
- (void)_readyToPlay_playPlayer:(id)arg1;
- (void)setUseVoiceMemoSettings:(BOOL)arg1;
- (BOOL)useVoiceMemoSettings;
- (void)_beginPreparingToPreviewRouteAssertion;
- (BOOL)_monitorUnderlyingAssetPathInPlayerItem:(id)arg1 assetDisappearedBlock:(id)arg2;
- (void)_handleUnderlyingAssetDisappeared;
- (void)_stopMonitoringUnderylingAssetPath;
- (void)_audioRouteControllerWillDeactivateAudioSessionNotification:(id)arg1;
- (id)_recreateAVPlayer;
- (id)AVState;
- (void)setAVPlayerItem:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (float)rate;
- (void)addObserver:(id)arg1;
- (void)pause;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)stop;
- (void)dealloc;
- (id)init;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

@end