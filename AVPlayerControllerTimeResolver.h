/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayerController, NSTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {
    AVPlayerController *_playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    NSTimer *_timer;
}

@property(readonly) double remainingTime;
@property(readonly) double currentTimeWithinEndTimes;
@property(readonly) double remainingTimeWithinEndTimes;
@property(getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges,readonly) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property(getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property(retain) AVPlayerController * playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;

- (void)setPlayerController:(id)arg1;
- (void)setResolution:(double)arg1;
- (double)resolution;
- (double)remainingTime;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (id)playerController;
- (double)interval;
- (void)setInterval:(double)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;
- (BOOL)isCurrentTimeAtEndOfSeekableTimeRanges;
- (BOOL)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
- (double)remainingTimeWithinEndTimes;
- (double)currentTimeWithinEndTimes;

@end
