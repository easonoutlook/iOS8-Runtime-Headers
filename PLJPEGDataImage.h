/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData;

@interface PLJPEGDataImage : UIImage  {
    NSData *_plData;
    struct __CVBuffer { } *_pixelBuffer;
}

+ (id)pl_imageWithStoredJPEGData:(id)arg1;

- (id)pl_imageJPEGData;
- (void)dealloc;

@end
