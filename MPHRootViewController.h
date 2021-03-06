/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MusicTabBarController, MPUCoverZoomViewController;

@interface MPHRootViewController : UIViewController <MPUCoverZoomViewControllerDelegate> {
    BOOL _canShowCoverZoom;
    MPUCoverZoomViewController *_coverZoomViewController;
    BOOL _isCoverZoomVisible;
    BOOL _mediaLibrarySupportsCoverZoom;
    int _statusBarOrientation;
    MusicTabBarController *_tabBarController;
}


- (id)detailViewControllerForEntity:(id)arg1;
- (BOOL)_canShowCoverZoom;
- (void)_updateCoverFlow;
- (BOOL)_shouldShowCoverZoomWithTraitCollection:(id)arg1;
- (void)_updateCoverFlowWithTraitCollection:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_updateCanShowCoverZoom;
- (BOOL)_updateMediaLibrarySupportsCoverZoom;
- (void)_applicationWillChangeStatusBarOrientationNotification:(id)arg1;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (id)_coverZoomViewController;
- (id)initWithTabBarController:(id)arg1;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;

@end
