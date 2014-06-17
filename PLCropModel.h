/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropModel : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    float _cropConstrain;
    float _angle;
    struct CGSize { 
        float width; 
        float height; 
    } _photoSize;
    struct CGSize { 
        float width; 
        float height; 
    } _nsqPhotoSize;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property float angle;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropRect;
@property float cropConstrain;


- (void)setCropConstrain:(float)arg1;
- (void)drawAspectedPreviewFromImage:(struct CGImage { }*)arg1 inContext:(struct CGContext { }*)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 withRatio:(float)arg4;
- (struct CGImage { }*)newAspectedPreviewFromImage:(struct CGImage { }*)arg1 forSize:(struct CGSize { float x1; float x2; })arg2 andRatio:(float)arg3;
- (struct CGImage { }*)newRenderedCroppedImageFromImage:(struct CGImage { }*)arg1 forSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })recomputeCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStraightenAngle:(float)arg2;
- (void)calculateCornerPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (float)cropConstrain;
- (void)changeCropAspectRatioTo:(float)arg1;
- (struct CGPoint { float x1; float x2; })scalePointForCropAction:(int)arg1;
- (void)adjustEdgeForDragAction:(int)arg1 withAmount:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(struct CGPoint { float x1; float x2; })arg2;
- (void)rotate:(float)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
- (float)maxAllowedRotationFromPoint:(struct CGPoint { float x1; float x2; })arg1 counterClockwise:(BOOL)arg2;
- (void)scale:(float)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
- (double)maxAllowedScaleFromPoint:(struct CGPoint { float x1; float x2; })arg1 scaleUp:(BOOL)arg2;
- (void)translate:(float)arg1 atAngle:(float)arg2;
- (double)maxAllowedTranslateWithDirection:(double)arg1;
- (int)touchedImageSidesForCurrentCrop;
- (float)angle;
- (void)setAngle:(float)arg1;
- (void)reset;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;

@end