/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDTextureCanvas : NSObject <MDRenderTarget> {
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    struct CGSize { 
        float width; 
        float height; 
    } _sizeInPixels;
    float _contentScale;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) float contentScale;
@property(readonly) struct CGSize { float x1; float x2; } sizeInPixels;
@property(readonly) float averageFPS;


- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (void)didDrawView;
- (void)willDrawView;
- (struct CGSize { float x1; float x2; })sizeInPixels;
- (float)contentScale;
- (id).cxx_construct;
- (struct CGSize { float x1; float x2; })size;
- (id)description;
- (void)dealloc;

@end
