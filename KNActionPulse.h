/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup;

@interface KNActionPulse : KNAnimationEffect <KNActionEffectBuildAnimator> {
    KNAnimParameterGroup *_parameterGroup;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (id)customAttributes;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)actionEffectStyle;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (void)dealloc;
- (void)p_addAnimationsToLayer:(id)arg1 maxScale:(float)arg2 scaleMin:(float)arg3 scaleMinThreshold:(float)arg4 scaleMaxThreshold:(float)arg5 scaleDownTiming:(id)arg6 scaleUpTiming:(id)arg7 pulseCount:(float)arg8 duration:(double)arg9 result:(id)arg10;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (id)initWithAnimationContext:(id)arg1;

@end
