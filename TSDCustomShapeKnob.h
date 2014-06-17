/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSUColor;

@interface TSDCustomShapeKnob : TSDKnob  {
    TSDBezierPath *mPath;
    TSUColor *mColor;
    float mAngle;
}

@property(retain) TSDBezierPath * path;
@property(copy) TSUColor * color;
@property float angle;

+ (id)trianglePath;
+ (id)diamondPath;

- (float)angle;
- (void)setAngle:(float)arg1;
- (void)setPath:(id)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (id)path;
- (id)layer;
- (void)dealloc;
- (id)darkColor;
- (void)createKnobLayers;
- (id)initWithType:(int)arg1 position:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 tag:(unsigned int)arg4 onRep:(id)arg5;

@end
