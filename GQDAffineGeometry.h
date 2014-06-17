/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint { 
        float x; 
        float y; 
    } mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfTransformedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(id)arg2;
+ (void)transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(id)arg2 upperLeft:(struct CGPoint { float x1; float x2; }*)arg3 lowerLeft:(struct CGPoint { float x1; float x2; }*)arg4 lowerRight:(struct CGPoint { float x1; float x2; }*)arg5 upperRight:(struct CGPoint { float x1; float x2; }*)arg6;

- (void)setAspectRatioLocked:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (float)angle;
- (void)setAngle:(float)arg1;
- (id).cxx_construct;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGPoint { float x1; float x2; })position;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })nonrotatedPosition;
- (void)setShearYAngle:(float)arg1;
- (float)shearYAngle;
- (void)setShearXAngle:(float)arg1;
- (float)shearXAngle;
- (void)setVerticalFlip:(BOOL)arg1;
- (BOOL)verticalFlip;
- (void)setHorizontalFlip:(BOOL)arg1;
- (BOOL)horizontalFlip;
- (BOOL)aspectRatioLocked;
- (void)setSizesLocked:(BOOL)arg1;
- (BOOL)sizesLocked;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })naturalBounds;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;
- (struct CGSize { float x1; float x2; })sizeOfBoundingBox;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
