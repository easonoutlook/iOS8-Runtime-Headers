/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwareSparkle : KNContentAwareMagicMoveSuperset <KNContentAwareFrameAnimator> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    NSArray *_effects;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (BOOL)requiresPerspectiveTransform;
+ (BOOL)requiresMagicMoveTextures;
+ (BOOL)requiresBullets;
+ (BOOL)isCharacterAwareEffect;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (void)dealloc;
- (id)animationsWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;

@end