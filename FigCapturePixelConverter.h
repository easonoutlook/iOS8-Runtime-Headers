/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWVideoFormat, BWPixelBufferPool;

@interface FigCapturePixelConverter : NSObject  {
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_pool;
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
}

+ (void)initialize;

- (long)_buildTransferSession;
- (long)_buildBufferPoolWithFormat:(unsigned long)arg1 dimensions:(struct { int x1; int x2; })arg2 poolCapacity:(int)arg3;
- (long)convertSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 outputSampleBuffer:(struct opaqueCMSampleBuffer {}**)arg2;
- (long)updateOutputPixelFormat:(unsigned long)arg1 dimensions:(struct { int x1; int x2; })arg2 poolCapacity:(int)arg3;
- (void)_purgeResources;
- (void)dealloc;
- (id)init;

@end