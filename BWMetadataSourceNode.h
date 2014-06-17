/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_queue>;

@interface BWMetadataSourceNode : BWSourceNode  {
    BOOL _running;
    struct opaqueCMFormatDescription { } *_formatDescription;
    struct OpaqueCMClock { } *_clock;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;

+ (void)initialize;

- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)stop:(id*)arg1;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;
- (struct OpaqueCMClock { }*)clock;
- (BOOL)start:(id*)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)nodeSubType;
- (void)dealloc;

@end
