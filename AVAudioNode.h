/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVAudioEngine, AVAudioTime;

@interface AVAudioNode : NSObject <AVAudioMixing> {
    void *_impl;
}

@property(readonly) AVAudioEngine * engine;
@property(readonly) unsigned int numberOfInputs;
@property(readonly) unsigned int numberOfOutputs;
@property(readonly) AVAudioTime * lastRenderTime;
@property float volume;


- (void)setRate:(float)arg1;
- (id)engine;
- (float)rate;
- (id)clock;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)reset;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)dealloc;
- (id)init;
- (void)removeTapOnBus:(unsigned int)arg1;
- (void)installTapOnBus:(unsigned int)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(id)arg4;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (unsigned int)numberOfOutputs;
- (unsigned int)numberOfInputs;
- (id)lastRenderTime;
- (id)nameForOutputBus:(unsigned int)arg1;
- (id)nameForInputBus:(unsigned int)arg1;
- (BOOL)setOutputFormat:(id)arg1 forBus:(unsigned int)arg2;
- (id)inputFormatForBus:(unsigned int)arg1;
- (id)outputFormatForBus:(unsigned int)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long *x_5_1_1; unsigned int x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)impl;
- (void)setOcclusion:(float)arg1;
- (float)occlusion;
- (void)setObstruction:(float)arg1;
- (float)obstruction;
- (void)setReverbBlend:(float)arg1;
- (float)reverbBlend;
- (void)setRenderingAlgorithm:(int)arg1;
- (int)renderingAlgorithm;
- (void)setPan:(float)arg1;
- (float)pan;
- (void)didAttachToEngine:(id)arg1;
- (id)initWithImpl:(struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long *x_5_1_1; unsigned int x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)arg1;

@end