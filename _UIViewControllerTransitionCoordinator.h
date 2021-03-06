/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewControllerTransitionContext, NSMutableArray;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(setter=_setMainContext:) _UIViewControllerTransitionContext * _mainContext;
@property(setter=_setAlongsideAnimations:,retain) NSMutableArray * _alongsideAnimations;
@property(setter=_setAlongsideAnimationViews:,retain) NSMutableArray * _alongsideAnimationViews;
@property(setter=_setAlongsideCompletions:,retain) NSMutableArray * _alongsideCompletions;
@property(setter=_setInteractiveChangeHandlers:,retain) NSMutableArray * _interactiveChangeHandlers;


- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;
- (BOOL)isCompleting;
- (id)_interactiveChangeHandlers:(BOOL)arg1;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (id)_interactiveChangeHandlers;
- (void)_setAlongsideCompletions:(id)arg1;
- (id)initWithMainContext:(id)arg1;
- (id)_alongsideCompletions;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetTransform;
- (float)completionVelocity;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_alongsideCompletions:(BOOL)arg1;
- (id)_alongsideAnimations:(BOOL)arg1;
- (BOOL)initiallyInteractive;
- (id)_mainContext;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (id)_alongsideAnimationViews;
- (int)completionCurve;
- (double)transitionDuration;
- (BOOL)isCancelled;
- (BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (int)presentationStyle;
- (BOOL)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (id)_alongsideAnimations;
- (void)_setAlongsideAnimations:(id)arg1;
- (BOOL)isAnimated;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)isRotating;
- (float)percentComplete;
- (BOOL)isInteractive;
- (id)viewControllerForKey:(id)arg1;
- (id)containerView;
- (void)dealloc;

@end
