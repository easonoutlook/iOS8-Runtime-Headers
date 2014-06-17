/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface TimingInstance : NSObject  {
    float startTiming;
    float stopTiming;
    float totalTime;
    BOOL isRunning;
}

@property float startTiming;
@property float stopTiming;
@property float totalTime;
@property BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (float)stopTiming;
- (float)startTiming;
- (void)setStopTiming:(float)arg1;
- (void)setStartTiming:(float)arg1;
- (void)setIsRunning:(BOOL)arg1;
- (void)setTotalTime:(float)arg1;
- (float)totalTime;
- (BOOL)isRunning;
- (id)description;

@end