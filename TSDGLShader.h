/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSMutableDictionary, NSMutableSet;

@interface TSDGLShader : NSObject  {
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
    BOOL _isActive;
    NSString *_name;
    unsigned int _programObject;
}

@property(copy) NSString * name;
@property(readonly) unsigned int programObject;
@property(readonly) BOOL isActive;


- (void)teardown;
- (int)locationForUniform:(id)arg1;
- (void)activate;
- (void)deactivate;
- (BOOL)isActive;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)validateUniforms;
- (void)setMat4WithTransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forUniform:(id)arg2;
- (void)setColor:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forUniform:(id)arg2;
- (void)setLifeSpan:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setCGFloat:(float)arg1 forUniform:(id)arg2;
- (void)setInteger:(int)arg1 forUniform:(id)arg2;
- (void)setInteger:(int)arg1 forShaderQualifier:(id)arg2;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned int)arg1 isSingleObject:(BOOL)arg2;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureShader;
- (void)setMat4WithTransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forShaderQualifier:(id)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(int)arg2;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (void)p_setQualifiersIfNecessary;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (BOOL)p_compileShader:(unsigned int*)arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4;
- (unsigned int)programObject;
- (BOOL)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 uniforms:(id)arg4 attributes:(id)arg5 defines:(id)arg6;
- (id)initWithDefaultTextureShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (int)locationForAttribute:(id)arg1;

@end
