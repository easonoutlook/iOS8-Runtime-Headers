/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPChangePlaybackRateCommand, MPSkipIntervalCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPPurchaseCommand, MPRatingCommand, MPRemoteCommand, NSArray;

@interface MPRemoteCommandCenter : NSObject  {
    NSArray *_commandsArray;
    void *_mediaRemoteCommandHandler;
    BOOL _scheduledSupportedCommandsChangedNotification;
    BOOL _canBeNowPlayingApplication;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPPurchaseCommand *_buyTrackCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPRemoteCommand *_setPlaybackQueueCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
}

@property(readonly) MPRemoteCommand * pauseCommand;
@property(readonly) MPRemoteCommand * playCommand;
@property(readonly) MPRemoteCommand * stopCommand;
@property(readonly) MPRemoteCommand * togglePlayPauseCommand;
@property(readonly) MPRemoteCommand * nextTrackCommand;
@property(readonly) MPRemoteCommand * previousTrackCommand;
@property(readonly) MPSkipIntervalCommand * skipForwardCommand;
@property(readonly) MPSkipIntervalCommand * skipBackwardCommand;
@property(readonly) MPRemoteCommand * seekForwardCommand;
@property(readonly) MPRemoteCommand * seekBackwardCommand;
@property(readonly) MPRatingCommand * ratingCommand;
@property(readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;
@property(readonly) MPFeedbackCommand * likeCommand;
@property(readonly) MPFeedbackCommand * dislikeCommand;
@property(readonly) MPFeedbackCommand * bookmarkCommand;

+ (id)sharedCommandCenter;

- (id)seekForwardCommand;
- (id)seekBackwardCommand;
- (id)togglePlayPauseCommand;
- (id)playCommand;
- (id)pauseCommand;
- (void).cxx_destruct;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;
- (id)bookmarkCommand;
- (id)dislikeCommand;
- (id)likeCommand;
- (id)changePlaybackRateCommand;
- (id)ratingCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)previousTrackCommand;
- (id)nextTrackCommand;
- (id)stopCommand;
- (id)setPlaybackQueueCommand;
- (id)createRadioStationCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)preOrderAlbumCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)changeShuffleModeCommand;
- (id)changeRepeatModeCommand;
- (id)changePlaybackPositionCommand;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (void)_scheduleSupportedCommandsChangedNotify;
- (void)_teardownNotifications;
- (void)_teardownMediaRemoteControlClient;
- (void)_teardownCommandConfigurationObservers;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_setupMediaRemoteControlClient;
- (void)_setupCommandConfigurationObservers;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupNotifications;

@end
