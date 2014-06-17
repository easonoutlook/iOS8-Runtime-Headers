/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject  {
    struct __CTLine { } *_line;
    int _orientation;
    BOOL _onRoute;
    float _contentScale;
    float _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
}


- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localCollisionBounds;
- (struct Matrix<float, 2, 1> { float x1[2]; })offsetPixelForPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (id)initWithString:(id)arg1 orientation:(int)arg2 contentScale:(float)arg3 scale:(float)arg4 onRoute:(BOOL)arg5;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localRenderBounds;
- (void)_updateLayoutSize;
- (id).cxx_construct;
- (id)image;
- (void)dealloc;

@end