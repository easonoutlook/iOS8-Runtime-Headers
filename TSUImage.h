/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class UIImage;

@interface TSUImage : NSObject  {
    struct CGImage { } *mCachedSliceableImage;
    struct __CFDictionary { } *mImageSlices;
    long mImageSliceCacheLock;
    id mCachedSystemImage;
    long mCachedImageLock;
}

@property(readonly) UIImage * UIImage;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) int imageOrientation;
@property(readonly) float scale;

+ (id)noisePatternWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 factor:(float)arg3;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 stretchingCenterWidthBy:(float)arg3;
- (id)stretchedImageOfSize:(struct CGSize { float x1; float x2; })arg1 leftCapWidth:(float)arg2 rightCapWidth:(float)arg3 topCapHeight:(float)arg4 bottomCapHeight:(float)arg5;
- (id)PNGRepresentation;
- (id)JPEGRepresentationWithCompressionQuality:(float)arg1;
- (id)TIFFRepresentation;
- (id)imagePartsWithLeftCapWidth:(float)arg1 rightCapWidth:(float)arg2 topCapHeight:(float)arg3 bottomCapHeight:(float)arg4;
- (struct CGImage { }*)CGImageForContentsScale:(float)arg1;
- (id)initWithUIImage:(id)arg1;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithImageSourceRef:(struct CGImageSource { }*)arg1;
- (id)UIImage;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (int)imageOrientation;
- (struct CGImage { }*)CGImage;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (id)init;
- (id)compositedImageWithColor:(id)arg1 alpha:(float)arg2 blendMode:(int)arg3;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { float x1; float x2; })arg1 inContext:(struct CGContext { }*)arg2 orLayer:(id)arg3;

@end
