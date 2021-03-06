/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class AVPlayer, <TSKMediaPlayerControllerDelegate>;

@interface TSKAVPlayerController : NSObject <TSKMediaPlayerController> {
    AVPlayer *mPlayer;
    <TSKMediaPlayerControllerDelegate> *mDelegate;
    BOOL mStreaming;
    int mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned int mScrubbingCount;
    BOOL mCanPlay;
    BOOL mPlaying;
    BOOL mFastReversing;
    BOOL mFastForwarding;
    BOOL mIsObservingStatus;
}

@property(readonly) AVPlayer * player;
@property(readonly) <TSKMediaPlayerControllerDelegate> * delegate;
@property(readonly) BOOL canPlay;
@property(getter=isPlaying) BOOL playing;
@property float rate;
@property double startTime;
@property double endTime;
@property int repeatMode;
@property float volume;
@property(getter=isScrubbing,readonly) BOOL scrubbing;
@property(readonly) BOOL canFastReverse;
@property(getter=isFastReversing) BOOL fastReversing;
@property(readonly) BOOL canFastForward;
@property(getter=isFastForwarding) BOOL fastForwarding;
@property(readonly) double absoluteCurrentTime;
@property(readonly) double currentTime;
@property(readonly) double remainingTime;
@property(readonly) double absoluteDuration;
@property(readonly) double duration;

+ (id)keyPathsForValuesAffectingRate;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (id)keyPathsForValuesAffectingCanFastForward;
+ (id)keyPathsForValuesAffectingCanFastReverse;
+ (id)keyPathsForValuesAffectingEndTime;
+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (id)keyPathsForValuesAffectingStartTime;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;

- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (id)player;
- (void)setRate:(float)arg1;
- (double)endTime;
- (void)teardown;
- (double)remainingTime;
- (double)currentTime;
- (int)repeatMode;
- (float)rate;
- (void)setRepeatMode:(int)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)delegate;
- (void)setEndTime:(double)arg1;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)duration;
- (void)dealloc;
- (id)init;
- (BOOL)isScrubbing;
- (void)cancelPendingSeeks;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidJumpTime:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (BOOL)p_canFastForwardAtCurrentTime;
- (BOOL)p_canFastReverseAtCurrentTime;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)p_applyVolumeToPlayerItem;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)setFastForwarding:(BOOL)arg1;
- (BOOL)isFastForwarding;
- (BOOL)canFastForward;
- (void)setFastReversing:(BOOL)arg1;
- (BOOL)isFastReversing;
- (BOOL)canFastReverse;
- (void)removePeriodicTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(id)arg2;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (double)absoluteDuration;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id)arg3;
- (double)absoluteCurrentTime;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(BOOL)arg3;
- (id)newLayer;

@end
