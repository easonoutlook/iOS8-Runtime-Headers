/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    int mType;
    float mScalar;
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
}

@property int type;
@property float scalar;
@property(readonly) float maxScalar;
@property struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) unsigned int numberOfControlKnobs;

+ (id)chevronWithScalar:(float)arg1 naturalSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)rectangleWithNaturalSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)pathSourceWithType:(int)arg1 scalar:(float)arg2 naturalSize:(struct CGSize { float x1; float x2; })arg3;
+ (id)regularPolygonWithScalar:(float)arg1 naturalSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)roundedRectangleWithScalar:(float)arg1 naturalSize:(struct CGSize { float x1; float x2; })arg2;

- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (float)maxScalar;
- (struct CGPath { }*)p_newChevronPath;
- (struct CGPath { }*)p_newRegularPolygonPath;
- (struct CGPath { }*)p_newRoundedRectPath;
- (void)setScalarValue:(id)arg1;
- (void)p_setControlKnobPointForChevron:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })p_getControlKnobPointForChevron;
- (struct CGPoint { float x1; float x2; })p_getControlKnobPointForRegularPolygon;
- (struct CGPoint { float x1; float x2; })p_getControlKnobPointForRoundedRect;
- (void)setScalar:(float)arg1;
- (id)initWithType:(int)arg1 scalar:(float)arg2 naturalSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGSize { float x1; float x2; })scaleFactorForInscribedRectangle;
- (unsigned int)numberOfControlKnobs;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned int)arg1;
- (id)getFeedbackStringForKnob:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;
- (void)setControlKnobPosition:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)valueForSetSelector:(SEL)arg1;
- (void)scaleToNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)bezierPathWithoutFlips;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (float)scalar;

@end