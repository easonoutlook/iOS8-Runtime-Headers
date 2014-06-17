/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary, BWVideoFormat;

@interface BWPixelBufferPool : NSObject  {
    BWVideoFormat *_videoFormat;
    unsigned long _capacity;
    long _pixelBufferPoolOnce;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    NSDictionary *_pixelBufferPoolAuxAttributes;
    long _pixelBufferPoolCreateError;
}

@property(readonly) unsigned long capacity;
@property(readonly) struct __CVPixelBufferPool { }* cvPixelBufferPool;

+ (void)initialize;

- (unsigned long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (long)preallocate;
- (long)_ensurePool;
- (void)preallocateWithCompletionHandler:(id)arg1;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long)arg2;
- (struct __CVBuffer { }*)newPixelBuffer;
- (void)dealloc;

@end
