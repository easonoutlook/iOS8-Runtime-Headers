/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class _UIBackdropView, UIColor;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    _UIBackdropView *_blurView;
    UIColor *_tintColor;
    int _backgroundStyle;
    float _blurRadius;
    BOOL _blursSelf;
}

@property int backgroundStyle;
@property(retain) UIColor * tintColor;
@property float blurRadius;
@property BOOL blursSelf;

+ (void)requestEmergencyCallControllerWithCompletion:(id)arg1;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)blursSelf;
- (void)_createAndAddBlurViewIfNecessary;
- (void)setBlursSelf:(BOOL)arg1;
- (id)tintColorForBackgroundStyle:(int)arg1 outBlurRadius:(float*)arg2;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (void)dismiss;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)dealloc;

@end
