/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface AEVConversionUtils : NSObject  {
}

+ (struct CGImage { }*)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage { }*)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage { }*)arg1;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage { }*)arg1;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage { }*)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage { }*)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;


@end
