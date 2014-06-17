/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDView3D : NSObject  {
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    boolmRightAngleAxes;
    boolmCluster;
    boolmAutoscale;
}


- (void)setCluster:(bool)arg1;
- (bool)isCluster;
- (bool)isRightAngleAxes;
- (int)rotationY;
- (bool)isAutoscale;
- (int)heightPercent;
- (int)rotationX;
- (int)perspective;
- (int)gapDepthPercent;
- (int)depthPercent;
- (void)setAutoscale:(bool)arg1;
- (void)setHeightPercent:(int)arg1;
- (void)setGapDepthPercent:(int)arg1;
- (void)setDepthPercent:(int)arg1;
- (void)setRightAngleAxes:(bool)arg1;
- (void)setPerspective:(int)arg1;
- (void)setRotationY:(int)arg1;
- (void)setRotationX:(int)arg1;
- (id)init;

@end
