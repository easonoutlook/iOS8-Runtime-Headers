/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, CIColor, NSNumber;

@interface CICopyMachineTransition : CIFilter  {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputOpacity;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputTargetImage;
@property(retain) CIVector * inputExtent;
@property(retain) CIColor * inputColor;
@property(retain) NSNumber * inputTime;
@property(retain) NSNumber * inputAngle;
@property(retain) NSNumber * inputWidth;
@property(retain) NSNumber * inputOpacity;

+ (id)customAttributes;

- (id)outputImage;
- (void)setInputTime:(id)arg1;
- (void)setDefaults;
- (id)inputImage;
- (id)inputOpacity;
- (void)setInputOpacity:(id)arg1;
- (id)inputTime;
- (void)setInputTargetImage:(id)arg1;
- (id)inputTargetImage;
- (id)inputWidth;
- (void)setInputWidth:(id)arg1;
- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (id)inputExtent;
- (void)setInputImage:(id)arg1;
- (void)setInputExtent:(id)arg1;

@end
