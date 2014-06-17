/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {
    GEOPlace *_place;
    BOOL _currentLocation;
    struct { 
        unsigned int currentLocation : 1; 
    } _has;
}

@property(readonly) BOOL hasPlace;
@property(retain) GEOPlace * place;
@property BOOL hasCurrentLocation;
@property BOOL currentLocation;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)place;
- (BOOL)hasCurrentLocation;
- (void)setHasCurrentLocation:(BOOL)arg1;
- (BOOL)hasPlace;
- (void)setPlace:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setCurrentLocation:(BOOL)arg1;
- (BOOL)currentLocation;

@end
