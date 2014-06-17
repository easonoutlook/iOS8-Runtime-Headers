/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL, NSObject<OS_dispatch_queue>;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource  {
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _cachedDuration;
    float _loadingProgress;
    NSURL *_AVFileURL;
}

@property(copy,readonly) NSURL * AVFileURL;
@property(readonly) BOOL savesGeneratedWaveform;


- (id)AVFileURL;
- (void)setLoadingProgress:(float)arg1;
- (BOOL)savesGeneratedWaveform;
- (id)initWithAVFileURL:(id)arg1;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (void)saveGeneratedWaveformIfNecessary;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(BOOL)arg2 segmentFlushInterval:(double)arg3;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (float)loadingProgress;
- (void).cxx_destruct;
- (BOOL)setPaused:(BOOL)arg1;
- (double)duration;
- (void)startLoading;

@end
