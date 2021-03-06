/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject  {
    void *_impl;
}

@property BOOL enable;
@property float level;
@property(readonly) AVAudioUnitEQFilterParameters * filterParameters;


- (id)filterParameters;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long *x_5_1_1; unsigned int x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; struct AudioComponentDescription { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct OpaqueAudioComponentInstance {} *x9; struct AVAudio3DPoint { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_11_1_1; struct AVAudio3DPoint { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_11_1_2; } x11; struct AVAudio3DAngularOrientation { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; struct map<AVAudio3DMixingImpl *, unsigned long, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned long> > > { struct __tree<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long>, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long>, std::__1::less<AVAudio3DMixingImpl *>, true>, std::__1::allocator<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long> > > { struct __tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned long>, std::__1::less<AVAudio3DMixingImpl *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_13_1_1; } x13; id x14; unsigned int x15; float x16; float x17; float x18; id x19; id x20; boolx21; float x22; float x23; float x24; float x25; }*)arg1;
- (BOOL)enable;
- (float)level;
- (void)setLevel:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)loadFactoryReverbPreset:(int)arg1;
- (void)setEnable:(BOOL)arg1;

@end
