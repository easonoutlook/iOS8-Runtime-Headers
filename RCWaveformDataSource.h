/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL, NSHashTable, RCWaveform, NSObject<OS_dispatch_queue>, RCWaveformGenerator, RCMutableWaveform;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    RCMutableWaveform *_accumulatorWaveform;
    BOOL _hasStartedLoading;
    BOOL _hasSavedGeneratedWaveform;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    RCWaveformGenerator *_waveformGenerator;
    NSURL *_generatedWaveformOutputURL;
    NSHashTable *_weakObservers;
}

@property(readonly) RCWaveform * accumulatorWaveform;
@property(readonly) BOOL finished;
@property(readonly) BOOL canceled;
@property(readonly) float loadingProgress;
@property(readonly) double duration;
@property(readonly) struct { double x1; double x2; } timeRangeToHighlight;
@property(readonly) double averagePowerLevelsRate;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) NSObject<OS_dispatch_queue> * observerQueue;
@property(readonly) RCWaveformGenerator * waveformGenerator;
@property(readonly) NSURL * generatedWaveformOutputURL;
@property(readonly) NSHashTable * weakObservers;
@property(readonly) BOOL hasStartedLoading;
@property(readonly) BOOL hasSavedGeneratedWaveform;


- (BOOL)hasSavedGeneratedWaveform;
- (BOOL)hasStartedLoading;
- (id)weakObservers;
- (id)observerQueue;
- (void)setAccumulatorWaveformSegments:(id)arg1;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (id)waveformSegmentsInTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (void)saveGeneratedWaveformIfNecessary;
- (id)saveableWaveform;
- (double)averagePowerLevelsRate;
- (id)accumulatorWaveform;
- (void)_performOnObserversBlock:(id)arg1;
- (id)waveformGenerator;
- (id)generatedWaveformOutputURL;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)_performObserversBlock:(id)arg1;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)beginLoading;
- (float)loadingProgress;
- (BOOL)waitUntilFinished;
- (BOOL)canceled;
- (id)queue;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (BOOL)setPaused:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (double)duration;
- (void)dealloc;
- (BOOL)finished;

@end
