/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (BOOL)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
