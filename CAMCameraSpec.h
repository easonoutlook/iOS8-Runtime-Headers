/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCameraSpec : NSObject  {
}

@property(readonly) int bottomBarOrientation;
@property(readonly) int modeDialOrientation;
@property(readonly) BOOL shouldCreateBottomBar;
@property(readonly) BOOL shouldCreateTopBar;
@property(readonly) BOOL shouldCreateFlashButton;
@property(readonly) BOOL shouldCreateElapsedTimeView;
@property(readonly) BOOL shouldCreateFlipButton;
@property(readonly) BOOL shouldCreateStillDuringVideo;
@property(readonly) BOOL shouldCreateImageWell;
@property(readonly) BOOL shouldCreateShutterButton;
@property(readonly) BOOL shouldCreateFiltersButton;
@property(readonly) BOOL shouldCreateModeDial;
@property(readonly) BOOL shouldCreateHDRButton;
@property(readonly) BOOL shouldCreatePanoramaView;
@property(readonly) BOOL shouldCreateZoomSlider;
@property(readonly) BOOL shouldCreateAvalancheIndicator;
@property(readonly) BOOL shouldCreateSlalomIndicator;
@property(readonly) BOOL shouldCreateTimerButton;

+ (id)specForPad;
+ (id)specForPhone;
+ (id)specForCurrentPlatform;

- (BOOL)isPad;
- (BOOL)isPhone;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForOrientation:(int)arg1;
- (BOOL)shouldCreateSlalomIndicator;
- (BOOL)shouldCreateTimerButton;
- (BOOL)shouldCreateAvalancheIndicator;
- (BOOL)shouldCreateZoomSlider;
- (BOOL)shouldCreatePanoramaView;
- (BOOL)shouldCreateHDRButton;
- (BOOL)shouldCreateModeDial;
- (BOOL)shouldCreateFiltersButton;
- (BOOL)shouldCreateShutterButton;
- (BOOL)shouldCreateImageWell;
- (BOOL)shouldCreateStillDuringVideo;
- (BOOL)shouldCreateFlipButton;
- (BOOL)shouldCreateElapsedTimeView;
- (BOOL)shouldCreateFlashButton;
- (BOOL)shouldCreateTopBar;
- (BOOL)shouldCreateBottomBar;
- (int)modeDialOrientation;
- (int)bottomBarOrientation;
- (int)rotationStyle;
- (BOOL)isCameraApp;

@end
