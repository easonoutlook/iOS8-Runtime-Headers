/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, UIViewController, UITraitCollection, <UIAdaptivePresentationControllerDelegate>;

@interface UIPresentationController : NSObject <_UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIAppearanceContainer, UITraitEnvironment, UIContentContainer> {
    BOOL _isDisconnectedRoot;
    BOOL _transitionAsDisconnectedRoot;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL _monitorsSystemLayoutFittingSize;
    id _target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    BOOL _changedPresentingViewControllerDuringAdaptation;
    BOOL _containerIgnoresDirectTouchEvents;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    UIView *_containerView;
    <UIAdaptivePresentationControllerDelegate> *_delegate;
    UITraitCollection *_overrideTraitCollection;
    <UIViewControllerAnimatedTransitioning> *_currentTransitionController;
    <UIViewControllerInteractiveTransitioning> *_currentInteractionController;
    UIView *_presentationView;
    UIView *__currentPresentationSuperview;
    int _state;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __transitionViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __fromViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __toViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __computeToEndFrameForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __currentTransitionDidComplete;

    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
}

@property(retain) UIViewController * presentingViewController;
@property(retain) UIViewController * presentedViewController;
@property(readonly) int presentationStyle;
@property(retain) UIView * containerView;
@property <UIAdaptivePresentationControllerDelegate> * delegate;
@property(copy) UITraitCollection * overrideTraitCollection;
@property(getter=_currentTransitionController,setter=_setCurrentTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * currentTransitionController;
@property(getter=_currentInteractionController,setter=_setCurrentInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * currentInteractionController;
@property(getter=_presentationView,setter=_setPresentationView:,retain) UIView * presentationView;
@property(getter=_currentPresentationSuperview,setter=_setCurrentPresentationSuperview:,retain) UIView * _currentPresentationSuperview;
@property int state;
@property(getter=_preferredContentSize,setter=_setPreferredContentSize:) struct CGSize { float x1; float x2; } _preferredContentSize;
@property(getter=_changedPresentingViewControllerDuringAdaptation,setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation;
@property(copy) id _transitionViewForCurrentTransition;
@property(copy) id _fromViewForCurrentTransition;
@property(copy) id _toViewForCurrentTransition;
@property(copy) id _computeToEndFrameForCurrentTransition;
@property(copy) id _currentTransitionDidComplete;
@property(getter=_containerIgnoresDirectTouchEvents,setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents;
@property(readonly) UITraitCollection * traitCollection;
@property(readonly) struct CGSize { float x1; float x2; } preferredContentSize;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (id)_currentTransitionController;
- (struct CGSize { float x1; float x2; })_preferredContentSize;
- (void)setOverrideTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (id)_presentationControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fullscreenFrameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3 fromViewController:(id)arg4;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)dismissed;
- (BOOL)presented;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)overrideTraitCollection;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)initWithPresenting:(id)arg1 presented:(id)arg2;
- (int)adaptivePresentationStyle;
- (void)_setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (id)presentedView;
- (BOOL)_shouldGrabPresentersView;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (BOOL)_transitioningFrom;
- (BOOL)_transitioningTo;
- (BOOL)_containerIgnoresDirectTouchEvents;
- (void)transitionDidStart;
- (void)transitionDidFinish:(BOOL)arg1;
- (id)_fromViewForCurrentTransition;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (int)presentationStyle;
- (id)_currentInteractionController;
- (id)_presentationView;
- (id)_parentPresentationController;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_computeToEndFrameForCurrentTransition;
- (id)_toViewForCurrentTransition;
- (id)_currentPresentationSuperview;
- (id)_transitionViewForCurrentTransition;
- (id)_childPresentationController;
- (void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1;
- (BOOL)_changedPresentingViewControllerDuringAdaptation;
- (void)runTransitionForCurrentState;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (id)_currentContextPresentationSuperview;
- (id)_fullscreenPresentationSuperview;
- (BOOL)shouldPresentInFullscreen;
- (void)set_toViewForCurrentTransition:(id)arg1;
- (void)set_fromViewForCurrentTransition:(id)arg1;
- (void)set_currentTransitionDidComplete:(id)arg1;
- (void)set_computeToEndFrameForCurrentTransition:(id)arg1;
- (void)set_transitionViewForCurrentTransition:(id)arg1;
- (void)_setCurrentPresentationSuperview:(id)arg1;
- (void)_cleanup;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (void)_setCurrentInteractionController:(id)arg1;
- (void)_setCurrentTransitionController:(id)arg1;
- (BOOL)dismissing;
- (void)_setPresentationView:(id)arg1;
- (BOOL)presenting;
- (id)_currentTransitionDidComplete;
- (BOOL)shouldRemovePresentersView;
- (void)_performBlockWithoutTriggeringResponderEvents:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)_updateTraitsIfNecessary;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (Class)_appearanceGuideClass;
- (struct { int x1; int x2; })__sizeClassPair;
- (id)_appearanceContainer;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)presentedViewController;
- (void)_setContainerView:(id)arg1;
- (id)traitCollection;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)setState:(int)arg1;
- (id)presentingViewController;
- (int)state;
- (id)containerView;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
