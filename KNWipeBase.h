/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLShader, KNAnimParameterGroup, TSDGLDataBuffer, KNWipeDataBuffer;

@interface KNWipeBase : KNAnimationEffect <KNAnimationPluginArchiving> {
    KNWipeDataBuffer *mWipeDataBuffer;
    TSDGLDataBuffer *mPreviousDataBuffer;
    TSDGLShader *mPreviousShader;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frameRect;
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
    BOOL _isBuildOut;
    KNAnimParameterGroup *_parameterGroup;
}

+ (id)animationName;
+ (BOOL)isTransition;
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
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_teardown;

@end