/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, <UIViewControllerContextTransitioning>;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {
    BOOL _interactionAborted;
    BOOL _clipUnderlapWhileTransitioning;
    int _operation;
    <UIViewControllerContextTransitioning> *_transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    int _transitionStyle;
    float _transitionGap;
}

@property int operation;
@property(retain) <UIViewControllerContextTransitioning> * transitionContext;
@property BOOL interactionAborted;
@property _UINavigationInteractiveTransitionBase * interactionController;
@property(retain) _UIParallaxDimmingView * borderDimmingView;
@property(retain) _UIParallaxDimmingView * contentDimmingView;
@property(retain) UIView * containerFromView;
@property(retain) UIView * containerToView;
@property(retain) UIView * clipUnderView;
@property BOOL clipUnderlapWhileTransitioning;
@property int transitionStyle;
@property float transitionGap;


- (void)setTransitionGap:(float)arg1;
- (float)transitionGap;
- (void)setTransitionStyle:(int)arg1;
- (int)transitionStyle;
- (void)setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (BOOL)clipUnderlapWhileTransitioning;
- (id)clipUnderView;
- (void)setContainerToView:(id)arg1;
- (id)containerToView;
- (void)setContainerFromView:(id)arg1;
- (id)containerFromView;
- (id)transitionContext;
- (void)completeKeyboard:(id)arg1;
- (void)animateKeyboard:(id)arg1;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)initWithCurrentOperation:(int)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (void)setOperation:(int)arg1;
- (int)operation;
- (BOOL)interactionAborted;
- (void)setInteractionController:(id)arg1;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)resizeShadow:(id)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (void)setClipUnderView:(id)arg1;
- (id)borderDimmingView;
- (double)transitionDuration:(id)arg1;
- (id)contentDimmingView;
- (float)parallaxOffset;
- (float)gapBetweenViews;
- (void)setInteractionAborted:(BOOL)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)interactionController;
- (void)setBorderDimmingView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)dealloc;

@end
