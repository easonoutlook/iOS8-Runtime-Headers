/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData;

@interface VKPTextureAtlas : PBCodable <NSCopying> {
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property(retain) NSData * texture;
@property unsigned int quadWidth;
@property unsigned int quadHeight;


- (void)setQuadHeight:(unsigned int)arg1;
- (void)setQuadWidth:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (unsigned int)quadHeight;
- (unsigned int)quadWidth;
- (id)texture;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
