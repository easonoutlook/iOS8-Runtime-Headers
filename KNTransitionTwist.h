/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSDGLShader, TSDGLMotionBlurEffect, TSDGLDataBuffer;

@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_shader;
    TSDGLDataBuffer *_dataBuffer;
    NSArray *_bufferAttributes;
    unsigned int _positionAttributeIndex;
    unsigned int _texCoordAttributeIndex;
    unsigned int _normalAttributeIndex;
    unsigned int _prevPositionAttributeIndex;
    int _numPoints;
    float _twistyness;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (id)customAttributes;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (void)dealloc;
- (void)p_drawTwistWithPercent:(float)arg1 texture:(id)arg2 oldTexture:(id)arg3;
- (void)update:(id)arg1 withContext:(id)arg2;
- (void)drawGrid:(id)arg1;
- (float)fx:(float)arg1 withPercent:(float)arg2;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_teardown;

@end
