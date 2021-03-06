/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError;

@interface RCTrimTimeRangeOperation : NSOperation  {
    BOOL _canSimulateTrimmingProgress;
    float _simulatedProgress;
    BOOL _trimMode;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressUpdateBlock;

    struct { 
        double beginTime; 
        double endTime; 
    } _timeRange;
}

@property(readonly) struct { double x1; double x2; } timeRange;
@property(readonly) BOOL trimMode;
@property(copy) id progressUpdateBlock;
@property(readonly) BOOL success;
@property(readonly) NSError * error;
@property(readonly) double exportedDuration;
@property(readonly) BOOL progressShouldContinueUpdating;
@property(readonly) double progress;


- (BOOL)progressShouldContinueUpdating;
- (void)_postFinalProgressUpdateNotification;
- (void)updateExportSessionProgressWithInterval:(double)arg1;
- (void)setCanSimulateTrimmingProgress:(BOOL)arg1;
- (void)setProgressUpdateBlock:(id)arg1;
- (void)simulateTrimmingProgress;
- (id)progressUpdateBlock;
- (BOOL)trimMode;
- (id)initWithTimeRange:(struct { double x1; double x2; })arg1 trimMode:(int)arg2;
- (float)_progress;
- (struct { double x1; double x2; })timeRange;
- (void).cxx_destruct;
- (void)main;
- (double)progress;
- (void)start;

@end
