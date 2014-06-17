/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class NSMutableArray;

@interface BLImagePatchList : NSObject  {
    struct CGImage { } *_baseImage;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSMutableArray *_patchArray;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage { }*)arg1;

- (void)removeAllPatches;
- (void)addPatch:(id)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)description;
- (int)count;
- (void)dealloc;

@end