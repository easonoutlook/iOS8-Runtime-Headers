/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNMotionBlurAnimationPluginWrapper;

@interface KNBuildBouncy : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginArchiving> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (BOOL)requiresSingleTexturePerStage;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (id)p_keyframeAnimationWithTR:(id)arg1 context:(id)arg2 chunks:(unsigned int)arg3 thisBeginTime:(double)arg4 thisDuration:(double)arg5;
- (id)p_hopsArrayWithLayer:(id)arg1 parent:(id)arg2 numBounces:(int)arg3 direction:(unsigned int)arg4 duration:(double)arg5 isBuildIn:(BOOL)arg6;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)animationsWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;

@end
