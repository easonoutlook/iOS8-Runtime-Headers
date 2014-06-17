/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSValue;

@interface CIAffineClamp : CIFilter  {
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property(retain) CIImage * inputImage;
@property(retain) NSValue * inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)_kernel;
- (id)inputTransform;
- (void)setInputTransform:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
