/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputEV;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputEV;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputEV;
- (void)setInputEV:(id)arg1;
- (BOOL)_isIdentity;
- (void)setInputImage:(id)arg1;

@end