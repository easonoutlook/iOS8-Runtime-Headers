/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
    NSNumber *inputFalloff;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputIntensity;
@property(retain) NSNumber * inputFalloff;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputFalloff;
- (void)setInputFalloff:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (id)inputRadius;
- (BOOL)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
