/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADShade, NSMutableArray, OADRelativeRect;

@interface OADGradientFill : OADFill  {
    NSMutableArray *mStops;
    BOOL mAreStopsOverridden;
    OADRelativeRect *mTileRect;
    BOOL mIsTileRectOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
    BOOL mIsShadeOverridden;
}

+ (id)stringForTileFlipMode:(int)arg1;
+ (id)defaultProperties;

- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (BOOL)rotateWithShape;
- (int)flipMode;
- (id)tileRect;
- (void)sortStops;
- (float)stopPositionAtIndex:(unsigned int)arg1;
- (BOOL)isShadeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isTileRectOverridden;
- (id)stops;
- (BOOL)areStopsOverridden;
- (void)setStops:(id)arg1;
- (void)clearStops;
- (void)setStyleColor:(id)arg1;
- (void)setShade:(id)arg1;
- (void)setTileRect:(id)arg1;
- (void)setFlipMode:(int)arg1;
- (void)addStopColor:(id)arg1 position:(float)arg2;
- (void)setRotateWithShape:(BOOL)arg1;
- (id)shade;
- (id)stopColorAtIndex:(unsigned int)arg1;
- (unsigned int)stopCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
