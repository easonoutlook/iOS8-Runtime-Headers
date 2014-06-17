/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODIState;

@interface ODILinear : NSObject  {
    BOOL mIsHorizontal;
    BOOL mWithConnectors;
    BOOL mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    BOOL mIsTextCenteredHorizontally;
    BOOL mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (void)mapUnknownWithState:(id)arg1;
+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;

- (void)map;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)nextPointBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setLogicalBounds;
- (void)setIsTextCenteredVertically:(BOOL)arg1;
- (void)setIsTextCenteredHorizontally:(BOOL)arg1;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)setIsTextCentered:(BOOL)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setStretch:(BOOL)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setWithConnectors:(BOOL)arg1;
- (id)initWithState:(id)arg1;
- (void)setIsHorizontal:(BOOL)arg1;
- (void)setPadding:(float)arg1;

@end
