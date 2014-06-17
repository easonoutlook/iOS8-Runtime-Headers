/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCRawImage : NSObject  {
    struct CGImage { } *_imageRef;
    char *_data;
    int _width;
    int _height;
    int _bytesPerPixel;
}

@property char * data;
@property int width;
@property int height;
@property int bytesPerPixel;
@property(retain) struct CGImage { }* imageRef;

+ (id)rawImageForImage:(struct CGImage { }*)arg1;

- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setBytesPerPixel:(int)arg1;
- (int)bytesPerPixel;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)height;
- (int)width;
- (struct CGImage { }*)imageRef;
- (void)setData:(char *)arg1;
- (char *)data;
- (void)dealloc;

@end
