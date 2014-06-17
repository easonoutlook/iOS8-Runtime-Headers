/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray *_vertexs;
    struct { 
        unsigned int eastLng : 1; 
        unsigned int northLat : 1; 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
    } _has;
}

@property(readonly) double centerLat;
@property(readonly) double centerLng;
@property(readonly) double spanLat;
@property(readonly) double spanLng;
@property BOOL hasSouthLat;
@property double southLat;
@property BOOL hasWestLng;
@property double westLng;
@property BOOL hasNorthLat;
@property double northLat;
@property BOOL hasEastLng;
@property double eastLng;
@property(retain) NSMutableArray * vertexs;

+ (id)_mapkit_mapRegionForLatitude:(double)arg1 longitude:(double)arg2 latSpan:(double)arg3 longSpan:(double)arg4;
+ (id)_mapkit_mapRegionForGEOCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;
+ (id)_mapkit_mapRegionForCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (id)initWithCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)addVertex:(id)arg1;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWestLng:(double)arg1;
- (void)setEastLng:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (double)eastLng;
- (double)southLat;
- (double)westLng;
- (double)northLat;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)vertexs;
- (BOOL)hasEastLng;
- (void)setHasEastLng:(BOOL)arg1;
- (BOOL)hasNorthLat;
- (void)setHasNorthLat:(BOOL)arg1;
- (BOOL)hasWestLng;
- (void)setHasWestLng:(BOOL)arg1;
- (BOOL)hasSouthLat;
- (void)setHasSouthLat:(BOOL)arg1;
- (id)vertexAtIndex:(unsigned int)arg1;
- (void)clearVertexs;
- (unsigned int)vertexsCount;
- (void)setVertexs:(id)arg1;
- (BOOL)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (double)spanLng;
- (double)spanLat;
- (double)centerLng;
- (double)centerLat;
- (id)initWithRadialPlace:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_initWithCLRegion:(id)arg1;
- (BOOL)containsLocationWithAccuracy:(id)arg1;

@end