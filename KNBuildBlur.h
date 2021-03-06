/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, TSDGLShader, NSMapTable;

@interface KNBuildBlur : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {
    KNAnimParameterGroup *_parameterGroup;
    TSDGLShader *_shader;
    NSMapTable *_blurTextures;
    NSMapTable *_dataBuffers;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    } _projectionMatrix;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _drawableFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _animationRect;
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

- (void)teardown;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)p_setupShadersWithContext:(id)arg1;
- (void)p_setupBlurTexturesWithContext:(id)arg1;
- (void)p_setupMVPMatricesWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)initWithAnimationContext:(id)arg1;

@end
