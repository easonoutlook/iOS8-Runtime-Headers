/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCWaveformGenerator, NSMutableArray;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    BOOL _finishedSuccessfully;
    RCWaveformGenerator *_generator;
    NSMutableArray *_segments;
}

@property(retain) RCWaveformGenerator * generator;
@property(retain) NSMutableArray * segments;
@property(readonly) BOOL finishedSuccessfully;


- (BOOL)finishedSuccessfully;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (id)initWithWaveformGenerator:(id)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (id)generator;
- (void)setGenerator:(id)arg1;
- (BOOL)waitUntilFinished;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSegments:(id)arg1;
- (id)segments;

@end
