/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailDescriptor : NSObject  {
    float _scaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property struct CGSize { float x1; float x2; } size;
@property float scaleFactor;

+ (id)descriptorWithSize:(struct CGSize { float x1; float x2; })arg1 scaleFactor:(float)arg2;

- (void)setScaleFactor:(float)arg1;
- (float)scaleFactor;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end