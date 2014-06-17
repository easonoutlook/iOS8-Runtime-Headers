/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class UIImage, RCGLWaveformRenderer, RCUIConfiguration, RCComposition, RCCompositionWaveformDataSource;

@interface RCWaveformRasterizationOperation : NSOperation  {
    RCGLWaveformRenderer *_renderer;
    RCCompositionWaveformDataSource *_dataSource;
    BOOL _loadingSuccessful;
    RCComposition *_composition;
    UIImage *_rasterizedImage;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
}

@property(readonly) RCComposition * composition;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;
@property(copy) RCUIConfiguration * UIConfiguration;
@property(readonly) UIImage * rasterizedImage;

+ (id)waveformImageForComposition:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;

- (id)rasterizedImage;
- (id)initWithComposition:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;
- (id)UIConfiguration;
- (void)setUIConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)composition;

@end