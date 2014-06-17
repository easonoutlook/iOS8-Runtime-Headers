/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffectPropertyTransform, NSString, GLKEffect, NSMutableArray, GLKEffectPropertyTexture;

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect> {
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _center;
    float _xSize;
    float _ySize;
    float _zSize;
    GLKEffectPropertyTexture *_textureCubeMap;
    GLKEffectPropertyTransform *_transform;
    NSString *_label;
    unsigned char _effectStale;
    unsigned char _centerChanged;
    unsigned int _vao;
    unsigned int _positionVBO;
    unsigned int _texCoordVBO;
    NSMutableArray *_propertyArray;
    GLKEffect *_effect;
    unsigned int _programName;
}

@property union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } center;
@property float xSize;
@property float ySize;
@property float zSize;
@property(readonly) GLKEffectPropertyTexture * textureCubeMap;
@property(readonly) GLKEffectPropertyTransform * transform;
@property(copy) NSString * label;
@property(readonly) NSMutableArray * propertyArray;
@property unsigned char effectStale;
@property unsigned char centerChanged;
@property GLKEffect * effect;
@property unsigned int programName;
@property unsigned int vao;
@property unsigned int positionVBO;
@property unsigned int texCoordVBO;


- (void)setEffect:(id)arg1;
- (id)effect;
- (void)draw;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setCenter:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (id)transform;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })center;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setCenterChanged:(unsigned char)arg1;
- (unsigned char)centerChanged;
- (void)setTexCoordVBO:(unsigned int)arg1;
- (unsigned int)texCoordVBO;
- (void)setPositionVBO:(unsigned int)arg1;
- (unsigned int)positionVBO;
- (void)setVao:(unsigned int)arg1;
- (unsigned int)vao;
- (float)zSize;
- (float)ySize;
- (float)xSize;
- (void)setZSize:(float)arg1;
- (void)setYSize:(float)arg1;
- (void)setXSize:(float)arg1;
- (id)textureCubeMap;
- (void)updateSkyboxEffect;
- (void)createAndBindVAOWithPositions:(float*)arg1 texCoords:(float*)arg2;
- (void)setProgramName:(unsigned int)arg1;
- (unsigned int)programName;
- (void)setEffectStale:(unsigned char)arg1;
- (unsigned char)effectStale;
- (id)propertyArray;
- (void)prepareToDraw;

@end
