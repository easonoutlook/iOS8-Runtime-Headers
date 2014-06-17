/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {
    long long _storeId;
    NSString *_artworkId;
    NSString *_name;
    NSString *_sortName;
    struct { 
        unsigned int storeId : 1; 
    } _has;
}

@property BOOL hasStoreId;
@property long long storeId;
@property(readonly) BOOL hasName;
@property(retain) NSString * name;
@property(readonly) BOOL hasSortName;
@property(retain) NSString * sortName;
@property(readonly) BOOL hasArtworkId;
@property(retain) NSString * artworkId;


- (BOOL)hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)artworkId;
- (BOOL)hasArtworkId;
- (void)setArtworkId:(id)arg1;
- (id)sortName;
- (BOOL)hasSortName;
- (void)setSortName:(id)arg1;
- (long long)storeId;
- (BOOL)hasStoreId;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setStoreId:(long long)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;

@end
