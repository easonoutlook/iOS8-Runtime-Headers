/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSArray;

@interface TSDGLFrameBufferTextureConfig : NSObject  {
    BOOL _isTextureNameGenerated;
    int _GLInternalFormat;
    unsigned int _GLFormat;
    unsigned int _GLType;
    NSString *_name;
    unsigned int _attachment;
    NSArray *_textureParameters;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) int GLInternalFormat;
@property(readonly) unsigned int GLFormat;
@property(readonly) unsigned int GLType;
@property(readonly) NSString * name;
@property(readonly) unsigned int attachment;
@property(readonly) NSArray * textureParameters;

+ (id)textureConfigWithSize:(struct CGSize { float x1; float x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;
+ (id)textureConfigWithSize:(struct CGSize { float x1; float x2; })arg1 textureParameters:(id)arg2 name:(id)arg3;
+ (id)textureConfigWithSize:(struct CGSize { float x1; float x2; })arg1 name:(id)arg2;
+ (id)textureConfigWithSize:(struct CGSize { float x1; float x2; })arg1 attachment:(unsigned int)arg2 textureParameters:(id)arg3 name:(id)arg4;

- (unsigned int)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)name;
- (void)dealloc;
- (id)textureParameters;
- (unsigned int)GLType;
- (unsigned int)GLFormat;
- (int)GLInternalFormat;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;

@end
