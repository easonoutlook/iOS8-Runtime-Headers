/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitDelay : AVAudioUnitEffect  {
}

@property double delayTime;
@property float feedback;
@property float lowPassCutoff;
@property float wetDryMix;


- (float)feedback;
- (void)setFeedback:(float)arg1;
- (id)init;
- (float)lowPassCutoff;
- (double)delayTime;
- (void)setLowPassCutoff:(float)arg1;
- (void)setDelayTime:(double)arg1;
- (float)wetDryMix;
- (void)setWetDryMix:(float)arg1;

@end
