/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase  {
    UIScreenEdgePanGestureRecognizer *_edgePanRecognizer;
}

@property(readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer;


- (id)screenEdgePanGestureRecognizer;
- (id)initWithViewController:(id)arg1 animator:(id)arg2;
- (void)_configureNavigationGesture;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;
- (id)gestureRecognizerView;
- (void)dealloc;

@end