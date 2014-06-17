/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIImage, NSNumber, CIFilter;

@interface BLDuotoneFilter : CIFilter  {
    BOOL _needsReprocess;
    float _lastAmount;
    float _lastStrength;
    BOOL _lastAddColor;
    int _lastVersion;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    NSNumber *_inputAddColor;
    NSNumber *_inputVersion;
    CIFilter *_colorCubeFilter;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputAmount;
@property(copy) NSNumber * inputStrength;
@property(copy) NSNumber * inputAddColor;
@property(copy) NSNumber * inputVersion;
@property(retain) CIFilter * colorCubeFilter;


- (id)outputImage;
- (void)setInputVersion:(id)arg1;
- (id)inputVersion;
- (void)setInputAddColor:(id)arg1;
- (id)inputAddColor;
- (void)setColorCubeFilter:(id)arg1;
- (id)colorCubeFilter;
- (void).cxx_destruct;
- (id)inputImage;
- (void)setInputStrength:(id)arg1;
- (id)inputStrength;
- (id)inputAmount;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end