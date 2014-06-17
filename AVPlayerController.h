/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayer, NSError;

@interface AVPlayerController : UIResponder  {
    AVPlayer *_player;
    int _status;
    NSError *_error;
}

@property(getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property BOOL CALayerDestinationIsTVOut;
@property(readonly) AVPlayer * player;
@property(readonly) int status;
@property(readonly) NSError * error;

+ (void)initialize;

- (id)loadedTimeRanges;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (void)setContentDuration:(double)arg1;
- (BOOL)canSeek;
- (BOOL)canTogglePlayback;
- (void)setCanPause:(BOOL)arg1;
- (BOOL)canPause;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)currentLegibleMediaSelectionOption;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)currentAudioMediaSelectionOption;
- (BOOL)hasMediaSelectionOptions;
- (void)seekToEnd:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (BOOL)canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (BOOL)hasLiveStreamingContent;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (id)audioMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)canPlay;
- (void)seekToTime:(double)arg1;
- (id)timing;
- (double)contentDuration;
- (id)player;
- (BOOL)allowsExternalPlayback;
- (BOOL)isExternalPlaybackActive;
- (id)seekableTimeRanges;
- (void)setRate:(double)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (id)error;
- (BOOL)isLooping;
- (id)metadata;
- (void)play:(id)arg1;
- (double)rate;
- (void)setVolume:(double)arg1;
- (double)volume;
- (int)status;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)initWithPlayer:(id)arg1;
- (BOOL)CALayerDestinationIsTVOut;
- (void)setCALayerDestinationIsTVOut:(BOOL)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isPlayingOnExternalScreen;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (id)contentChapters;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (BOOL)isSeeking;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasContentChapters;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setRateWithThrottling:(double)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)setPlayingOnSecondScreen:(BOOL)arg1;
- (int)externalPlaybackType;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;

@end
