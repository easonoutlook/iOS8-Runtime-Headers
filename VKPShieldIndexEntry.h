/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPShieldIndexEntry : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _defaultForFeatureTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(readonly) BOOL hasArtworkIdentifier;
@property(retain) NSString * artworkIdentifier;
@property(readonly) unsigned int shieldTypesCount;
@property(readonly) int* shieldTypes;
@property(readonly) unsigned int defaultForFeatureTypesCount;
@property(readonly) int* defaultForFeatureTypes;


- (void)setDefaultForFeatureTypes:(int*)arg1 count:(unsigned int)arg2;
- (int*)defaultForFeatureTypes;
- (void)setShieldTypes:(int*)arg1 count:(unsigned int)arg2;
- (BOOL)hasArtworkIdentifier;
- (void)addDefaultForFeatureType:(int)arg1;
- (void)clearDefaultForFeatureTypes;
- (void)addShieldTypes:(int)arg1;
- (int)shieldTypesAtIndex:(unsigned int)arg1;
- (void)clearShieldTypes;
- (void)setArtworkIdentifier:(id)arg1;
- (int)defaultForFeatureTypeAtIndex:(unsigned int)arg1;
- (unsigned int)defaultForFeatureTypesCount;
- (id)artworkIdentifier;
- (int*)shieldTypes;
- (unsigned int)shieldTypesCount;
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
