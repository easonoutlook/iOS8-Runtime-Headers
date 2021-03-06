/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoComposition, AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject  {
    AVVideoCompositionRenderContextInternal *_internal;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } renderTransform;
@property(readonly) float renderScale;
@property(readonly) struct { int x1; int x2; } pixelAspectRatio;
@property(readonly) struct { float x1; float x2; float x3; float x4; } edgeWidths;
@property(readonly) BOOL highQualityRendering;
@property(readonly) AVVideoComposition * videoComposition;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;

- (struct __CVBuffer { }*)newPixelBuffer;
- (struct { int x1; int x2; })pixelAspectRatio;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (void)finalize;
- (BOOL)highQualityRendering;
- (struct { float x1; float x2; float x3; float x4; })edgeWidths;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })renderTransform;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool { }*)arg4;
- (void)_willDeallocOrFinalize;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (float)renderScale;
- (id)videoComposition;

@end
