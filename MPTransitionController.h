/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, MPViewController, UIView, UIViewController;

@interface MPTransitionController : NSObject  {
    struct __CFDictionary { } *_observers;
    float _duration;
    UIView *_rootView;
    NSMutableSet *_persistentViewsToFadeOut;
    NSMutableSet *_viewsToFadeOut;
    NSMutableSet *_persistentViewsToFadeIn;
    NSMutableSet *_viewsToFadeIn;
    MPViewController *_fromViewController;
    int _fromInterfaceOrientation;
    MPViewController *_toViewController;
    int _toInterfaceOrientation;
    UIViewController *_toContainerViewController;
}

@property float duration;
@property int fromInterfaceOrientation;
@property(retain) MPViewController * fromViewController;
@property(retain) UIView * rootView;
@property int toInterfaceOrientation;
@property(retain) MPViewController * toViewController;
@property(retain) UIViewController * toContainerViewController;


- (void).cxx_destruct;
- (id)toViewController;
- (id)fromViewController;
- (void)removeObserver:(id)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)setToViewController:(id)arg1;
- (int)toInterfaceOrientation;
- (void)setRootView:(id)arg1;
- (void)setFromViewController:(id)arg1;
- (int)fromInterfaceOrientation;
- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)willBeginTransition:(unsigned int)arg1;
- (void)messageObserversWithSuccess:(BOOL)arg1;
- (id)toContainerViewController;
- (void)setFromInterfaceOrientation:(int)arg1;
- (void)setToInterfaceOrientation:(int)arg1;
- (void)didFinishTransition:(BOOL)arg1;
- (void)fadeViewsForRestore:(BOOL)arg1;
- (void)setToContainerViewController:(id)arg1;
- (id)rootView;
- (void)performTransition:(unsigned int)arg1;
- (void)transition:(unsigned int)arg1;
- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;

@end
