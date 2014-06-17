/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, TSDTextureSet, CALayer, NSMutableDictionary;

@interface TSDTexturedRectangle : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    } mOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } mOriginalPosition;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mContentRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mOriginalFrame;
    CALayer *mLayer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mRenderBlock;

    struct CGImage { } *mSourceImage;
    struct CGImage { } *mBakedImage;
    TSDTextureSet *mParent;
    int mTextureType;
    float mTextureOpacity;
    unsigned int mSingleTextureName;
    BOOL mSingleTextureContainsMipmaps;
    BOOL mIsFlattened;
    NSMutableDictionary *mAttributes;
    NSMutableArray *mTags;
    struct CGColorSpace { } *mColorSpace;
}

@property(readonly) unsigned int singleTextureName;
@property(readonly) unsigned int singleTextureTarget;
@property struct CGPoint { float x1; float x2; } originalPosition;
@property struct CGPoint { float x1; float x2; } offset;
@property struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property TSDTextureSet * parent;
@property(readonly) CALayer * layer;
@property(readonly) struct CGImage { }* image;
@property(readonly) float opacityFromAttributes;
@property(readonly) struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transformFromAttributes;
@property(retain) NSMutableDictionary * attributes;
@property(retain) NSMutableArray * tags;
@property int textureType;
@property float textureOpacity;
@property(readonly) float singleTextureOpacity;
@property BOOL isFlattened;
@property struct CGColorSpace { }* colorSpace;
@property(readonly) BOOL isRenderable;
@property(readonly) BOOL isImageSource;


- (id)parent;
- (void)setParent:(id)arg1;
- (void)setIsFlattened:(BOOL)arg1;
- (BOOL)isFlattened;
- (struct CGColorSpace { }*)colorSpace;
- (void)teardown;
- (void)setTags:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (id)tags;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setTextureType:(int)arg1;
- (int)textureType;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithLayer:(id)arg1;
- (id)description;
- (id)layer;
- (void)dealloc;
- (float)textureOpacity;
- (void)setOriginalPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })originalPosition;
- (void)bakeLayerWithAngle:(float)arg1 scale:(float)arg2;
- (float)singleTextureOpacity;
- (unsigned int)singleTextureName;
- (void)renderLayerContentsIfNeeded;
- (BOOL)isRenderable;
- (void)resetAnchorPoint;
- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint { float x1; float x2; })arg1 isMagicMove:(BOOL)arg2;
- (BOOL)isImageSource;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transformFromAttributes;
- (float)opacityFromAttributes;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg1;
- (unsigned int)singleTextureTarget;
- (struct CGImage { }*)p_newImageAndBufferWithAngle:(float)arg1 scale:(float)arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (struct CGColorSpace { }*)p_colorSpace;
- (void)p_updateFrame;
- (void)releaseSingleTexture;
- (void)setTextureOpacity:(float)arg1;
- (void)resetToSourceImage;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 offset:(struct CGPoint { float x1; float x2; })arg2 renderBlock:(id)arg3;
- (void)renderIntoContext:(struct CGContext { }*)arg1;

@end
