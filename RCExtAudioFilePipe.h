/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL, NSObject<OS_dispatch_queue>;

@interface RCExtAudioFilePipe : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long _accessQueueID;
    struct OpaqueExtAudioFile { } *_audioFileRef;
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
    } _outputFormatDescriptionStruct;
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
    } _sourceFormatDescriptionStruct;
    NSURL *_sourceURL;
    unsigned long long _sourceFileSize;
}

@property(readonly) NSURL * sourceURL;
@property(readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }* outputFormatDescription;
@property(readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }* sourceFormatDescription;
@property(readonly) unsigned long long sourceFileSize;


- (unsigned long long)sourceFileSize;
- (long)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(long)arg2;
- (long long)sourceCurrentFrameIndex;
- (BOOL)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceFrameIndexForTime:(double)arg1;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned long)arg3;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)outputFormatDescription;
- (void)_accessExtAudioFileWithBlock:(id)arg1;
- (void)performTransactionWithBlock:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sourceURL;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)sourceFormatDescription;

@end
