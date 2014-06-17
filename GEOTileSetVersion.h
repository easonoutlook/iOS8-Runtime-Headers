/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *_availableTiles;
    unsigned int _availableTilesCount;
    unsigned int _availableTilesSpace;
    struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_genericTiles;
    unsigned int _genericTilesCount;
    unsigned int _genericTilesSpace;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct { 
        unsigned int supportedLanguagesVersion : 1; 
        unsigned int timeToLiveSeconds : 1; 
    } _has;
}

@property unsigned int identifier;
@property(readonly) unsigned int availableTilesCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }* availableTiles;
@property BOOL hasTimeToLiveSeconds;
@property unsigned int timeToLiveSeconds;
@property(readonly) unsigned int genericTilesCount;
@property(readonly) struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* genericTiles;
@property BOOL hasSupportedLanguagesVersion;
@property unsigned int supportedLanguagesVersion;


- (unsigned int)timeToLiveSeconds;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)supportedLanguagesVersion;
- (BOOL)hasSupportedLanguagesVersion;
- (void)setHasSupportedLanguagesVersion:(BOOL)arg1;
- (void)setSupportedLanguagesVersion:(unsigned int)arg1;
- (void)setGenericTiles:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)genericTiles;
- (BOOL)hasTimeToLiveSeconds;
- (void)setHasTimeToLiveSeconds:(BOOL)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (void)setAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (void)addGenericTile:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })genericTileAtIndex:(unsigned int)arg1;
- (unsigned int)genericTilesCount;
- (void)addAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned int)arg1;
- (unsigned int)availableTilesCount;
- (void)clearGenericTiles;
- (void)clearAvailableTiles;
- (id)dictionaryRepresentation;
- (void)setIdentifier:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
