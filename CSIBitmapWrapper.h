/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSData;

@interface CSIBitmapWrapper : NSObject  {
    struct CGContext { } *_bitmapContext;
    NSData *_pixelData;
    NSData *_rawData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long _rowbytes;
    BOOL _allowsMultiPassEncoding;
}

@property unsigned int pixelFormat;
@property BOOL allowsMultiPassEncoding;


- (void)setPixelData:(id)arg1;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)pixelData;
- (struct CGContext { }*)bitmapContext;
- (void)setAllowsMultiPassEncoding:(BOOL)arg1;
- (BOOL)allowsMultiPassEncoding;
- (id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned int*)arg3;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned int)pixelFormat;
- (unsigned int)height;
- (unsigned int)width;
- (void)dealloc;
- (void)finalize;

@end
