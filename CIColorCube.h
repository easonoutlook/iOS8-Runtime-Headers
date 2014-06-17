/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
    CIImage *_cubeImage;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputCubeDimension;
@property(copy) NSData * inputCubeData;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (void)dealloc;
- (id)inputCubeData;
- (id)inputCubeDimension;
- (id)cubeImage;
- (BOOL)_checkInputs;
- (void)setInputCubeDimension:(id)arg1;
- (void)setInputCubeData:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;

@end
