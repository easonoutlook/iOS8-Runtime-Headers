/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDImageInfo;

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation  {
    TSDImageInfo *mImageInfo;
    BOOL mShouldClipVertically;
}

@property(retain) TSDImageInfo * imageInfo;


- (id)imageInfo;
- (void)dealloc;
- (void)setImageInfo:(id)arg1;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 imageInfo:(id)arg5 documentRoot:(id)arg6;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7;

@end
