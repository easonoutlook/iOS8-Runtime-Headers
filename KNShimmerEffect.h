/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNShimmerObjectSystem, TSDGLTextureInfo, TSDGLShader, TSDTexturedRectangle, TSDGLDataBuffer, KNShimmerParticleSystem, KNAnimationContext;

@interface KNShimmerEffect : NSObject <KNAnimationOpenGLEffect> {
    KNShimmerObjectSystem *mObjectSystem;
    TSDGLShader *mObjectSystemShader;
    KNShimmerParticleSystem *mParticleSystem;
    TSDGLShader *mParticleSystemShader;
    TSDGLTextureInfo *mShimmerTexture;
    TSDTexturedRectangle *mTexture;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mDestinationRect;
    float mDuration;
    unsigned int mDirection;
    int mBuildType;
    KNAnimationContext *mAnimationContext;
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
    } mTranslate;
    BOOL mIsSetup;
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
    } mBaseTransform;
    TSDGLShader *mObjectShader;
    TSDGLDataBuffer *mObjectDataBuffer;
}


- (void)setupEffectIfNecessary;
- (unsigned int)p_numberOfParticlesForTR:(id)arg1 slideRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(float)arg3;
- (id)particleSystemForTR:(id)arg1 slideRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(float)arg3;
- (id)objectSystemForTR:(id)arg1 slideRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(float)arg3;
- (void)teardownEffectWithTextures:(id)arg1;
- (void)renderEffectAtPercent:(double)arg1;
- (id)initWithAnimationContext:(id)arg1 texture:(id)arg2 destinationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 translate:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg4 duration:(float)arg5 direction:(unsigned int)arg6 buildType:(int)arg7;

@end
