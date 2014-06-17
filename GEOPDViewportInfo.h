/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    int _mapMode;
    GEOMapRegion *_mapRegion;
    unsigned int _timeSinceMapViewportChanged;
    struct { 
        unsigned int mapMode : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
    } _has;
}

@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property BOOL hasTimeSinceMapViewportChanged;
@property unsigned int timeSinceMapViewportChanged;
@property BOOL hasMapMode;
@property int mapMode;

+ (id)viewportInfoForTraits:(id)arg1;

- (int)mapMode;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapMode:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (id)mapRegion;
- (BOOL)hasMapMode;
- (void)setHasMapMode:(BOOL)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (BOOL)hasTimeSinceMapViewportChanged;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (BOOL)hasMapRegion;
- (id)initWithTraits:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
