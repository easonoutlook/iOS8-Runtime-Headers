/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject  {
    TSDImageAdjustments *mImageAdjustments;
}


- (void)dealloc;
- (id)init;
- (struct CGImage { }*)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage { }*)arg2;
- (struct CGImage { }*)newFilteredImageForImage:(struct CGImage { }*)arg1 enhancedImage:(struct CGImage {}**)arg2;
- (id)initWithImageAdjustments:(id)arg1;

@end
