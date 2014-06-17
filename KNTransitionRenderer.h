/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDFPSCounter, CALayer, NSMutableArray, NSDictionary;

@interface KNTransitionRenderer : KNAnimationRenderer  {
    NSMutableArray *mTextures;
    int mNumberOfAnimationsStarted;
    NSDictionary *mAnimatedLayers;
    BOOL mOutgoingSlideRendered;
    BOOL mShouldAnimateTransition;
    BOOL mAnimationsRanToCompletion;
    NSDictionary *mAttributes;
    id mTransitionEndCallbackTarget;
    SEL mTransitionEndCallbackSelector;
    CALayer *mBackgroundLayer;
    TSDFPSCounter *mFPSCounter;
}


- (void)stopAnimations;
- (void)teardown;
- (id)plugin;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)description;
- (void)dealloc;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)forceRemoveAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)animateWithDelay:(double)arg1;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)teardownMagicMove;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned int)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)p_reset;
- (void)p_removeAnimationsOnAnimatedLayers;
- (BOOL)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(BOOL)arg3;
- (BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2;
- (void)renderSlideIndex:(unsigned int)arg1;
- (void)setupLayerTreeForTransition;
- (void)p_generateLayers;
- (void)setupPluginContext;
- (void)p_checkForNullTransitions:(Class)arg1;

@end
