/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIWindow, AirPlayDiagnosticsFullscreenController;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {
    UIWindow *_floatingWindow;
    BOOL _presentedAnimated;
    AirPlayDiagnosticsFullscreenController *_airPlayDiagsController;
}

@property(readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;


- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)airPlayDiagsController;
- (void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(BOOL)arg2;
- (void)_destroyFloatingWindow;
- (void)presentFromFloatingWindowAnimated:(BOOL)arg1 completion:(id)arg2;

@end