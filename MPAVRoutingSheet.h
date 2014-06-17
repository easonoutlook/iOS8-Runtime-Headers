/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIButton, UIView, UIWindow, MPAVRoutingViewController;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(setter=setAVItemType:) unsigned int avItemType;


- (void).cxx_destruct;
- (void)dismiss;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })_maxRoutingViewSize;
- (float)_rotationForCurrentOrientation;
- (void)_animateControls:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)_updateRoutingSheetFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_controlsViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cancelButtonFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_routingViewFrame;
- (unsigned int)avItemType;
- (void)setAVItemType:(unsigned int)arg1;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)showInView:(id)arg1 withCompletionHandler:(id)arg2;
- (id)initWithAVItemType:(unsigned int)arg1;
- (void)_cancelButtonAction:(id)arg1;

@end
