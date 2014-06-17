/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFaceTrackingView : CAMFocusView  {
    BOOL _isInFrame;
}

@property BOOL isInFrame;


- (void)animateToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isInFrame;
- (void)setIsInFrame:(BOOL)arg1;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize { float x1; float x2; }*)arg2;
- (double)fadeOutDuration;
- (void)fadeIn;
- (void)fadeOut;
- (id)init;

@end
