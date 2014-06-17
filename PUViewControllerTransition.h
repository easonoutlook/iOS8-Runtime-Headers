/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIPercentDrivenInteractiveTransition, <UIViewControllerContextTransitioning>;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double _duration;
    <UIViewControllerContextTransitioning> *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    BOOL _interactive;
    float _interactiveProgress;
}

@property(readonly) double duration;
@property(getter=isInteractive) BOOL interactive;
@property(setter=_setInteractiveProgress:) float interactiveProgress;

+ (id)interactionControllerForAnimationController:(id)arg1;

- (id)initWithDuration:(double)arg1;
- (void).cxx_destruct;
- (id)toViewController;
- (id)fromViewController;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)transitionContext;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)isInteractive;
- (id)containerView;
- (float)interactiveProgress;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFromViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialToViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFromViewFrame;
- (id)_newInteractiveTransition;
- (void)_setInteractiveProgress:(float)arg1;
- (void)updateInteractiveTransitionProgress:(float)arg1;
- (void)setInteractive:(BOOL)arg1;
- (id)interactiveTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalToViewFrame;
- (double)duration;

@end
