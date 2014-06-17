/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioChannelLayout, NSDictionary;

@interface AVAudioFormat : NSObject  {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _asbd;
    AVAudioChannelLayout *_layout;
    unsigned int _commonFormat;
    void *_reserved;
}

@property(getter=isStandard,readonly) BOOL standard;
@property(readonly) unsigned int commonFormat;
@property(readonly) unsigned int channelCount;
@property(readonly) double sampleRate;
@property(getter=isInterleaved,readonly) BOOL interleaved;
@property(readonly) const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }* streamDescription;
@property(readonly) AVAudioChannelLayout * channelLayout;
@property(readonly) NSDictionary * settings;

+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;

- (double)sampleRate;
- (id)initWithSettings:(id)arg1;
- (id).cxx_construct;
- (id)settings;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isInterleaved;
- (unsigned int)commonFormat;
- (BOOL)isStandard;
- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;
- (id)initWithCommonFormat:(unsigned int)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4;
- (id)initWithCommonFormat:(unsigned int)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(BOOL)arg4;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)channelLayout;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;
- (unsigned int)channelCount;

@end
