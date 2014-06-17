/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CITwirlDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputAngle;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
