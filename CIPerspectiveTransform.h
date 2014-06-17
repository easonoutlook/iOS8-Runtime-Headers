/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIPerspectiveTransform : CIFilter  {
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputTopLeft;
@property(retain) CIVector * inputTopRight;
@property(retain) CIVector * inputBottomRight;
@property(retain) CIVector * inputBottomLeft;

+ (id)customAttributes;

- (id)outputImage;
- (id)inputImage;
- (void)setInputBottomLeft:(id)arg1;
- (id)inputBottomLeft;
- (void)setInputBottomRight:(id)arg1;
- (id)inputBottomRight;
- (void)setInputTopRight:(id)arg1;
- (id)inputTopRight;
- (void)setInputTopLeft:(id)arg1;
- (id)inputTopLeft;
- (void)setInputImage:(id)arg1;

@end
