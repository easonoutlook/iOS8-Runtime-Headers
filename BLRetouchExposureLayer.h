/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchExposureLayer : BLRetouchEffectLayer  {
    float _currentExposure;
    float *_cubeData;
    float _exposure;
}

@property float exposure;

+ (id)layerWithExposure:(float)arg1;

- (void)setExposure:(float)arg1;
- (float)exposure;
- (id)cubeData;
- (struct CGImage { }*)newImageFromContextWithEffect:(struct CGContext { }*)arg1;
- (void)dealloc;

@end
