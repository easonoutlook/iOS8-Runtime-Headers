/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying> {
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property(retain) NSMutableArray * textureAtlas;
@property(retain) NSMutableArray * genericShields;


- (id)genericShieldAtIndex:(unsigned int)arg1;
- (void)clearGenericShields;
- (unsigned int)genericShieldsCount;
- (id)textureAtlasAtIndex:(unsigned int)arg1;
- (void)clearTextureAtlas;
- (unsigned int)textureAtlasCount;
- (void)addGenericShield:(id)arg1;
- (void)addTextureAtlas:(id)arg1;
- (void)setGenericShields:(id)arg1;
- (void)setTextureAtlas:(id)arg1;
- (id)textureAtlas;
- (id)genericShields;
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