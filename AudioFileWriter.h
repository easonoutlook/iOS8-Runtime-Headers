/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface AudioFileWriter : NSObject  {
    BOOL isWriting;
    struct OpaqueExtAudioFile { } *fFile;
}


- (short)addSamples:(void*)arg1 len:(long)arg2;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;
- (void)close;
- (void)dealloc;

@end
