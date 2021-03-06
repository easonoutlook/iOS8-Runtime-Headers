/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class BLPixelImageBuffer, UIImage, NSDictionary, NSMutableArray;

@interface BLBaseLayerStack : NSObject  {
    NSMutableArray *_layers;
    float _brushSize;
    float _brushSoftness;
    struct CGImage { } *_brushImageRef;
    BOOL _shouldNotify;
    int _maskLongEdgeSize;
    struct CGSize { 
        float width; 
        float height; 
    } _maskSize;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _viewToMaskTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _inverseViewToMaskTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _flippedViewToMaskTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _inverseFlippedViewToMaskTransform;
}

@property(readonly) NSMutableArray * layers;
@property struct CGSize { float x1; float x2; } maskSize;
@property(retain) BLPixelImageBuffer * workingImageBuffer;
@property(retain) UIImage * workingImage;
@property float workingImageScaleFactor;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } viewToMaskTransform;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } inverseViewToMaskTransform;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } flippedViewToMaskTransform;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } inverseFlippedViewToMaskTransform;
@property int maskLongEdgeSize;
@property BOOL shouldNotify;
@property NSDictionary * strokesDataDictionary;


- (id)layers;
- (BOOL)shouldNotify;
- (void)setMaskLongEdgeSize:(int)arg1;
- (int)maskLongEdgeSize;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })inverseFlippedViewToMaskTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })flippedViewToMaskTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })inverseViewToMaskTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })viewToMaskTransform;
- (void)setMaskSize:(struct CGSize { float x1; float x2; })arg1;
- (float)maskArea;
- (BOOL)readyToDraw;
- (BOOL)haveLayerMask;
- (id)strokesDataDictionary;
- (void)setWorkingImageScaleFactor:(float)arg1;
- (float)workingImageScaleFactor;
- (id)workingImage;
- (id)workingImageBuffer;
- (struct CGImage { }*)brushImageRefWithSize:(float)arg1 softness:(float)arg2;
- (void)setShouldNotify:(BOOL)arg1;
- (id)imageLayer;
- (void)setWorkingImageBuffer:(id)arg1;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andScale:(float)arg3;
- (void)setFlippedViewToMaskTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setViewToMaskTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGSize { float x1; float x2; })maskSize;
- (void)setWorkingImage:(id)arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (double)timestamp;
- (void)dealloc;

@end
