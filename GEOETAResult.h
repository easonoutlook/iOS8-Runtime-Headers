/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOPlaceSearchResponse;

@interface GEOETAResult : PBCodable <NSCopying> {
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    int _status;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int liveTravelTime : 1; 
        unsigned int status : 1; 
    } _has;
}

@property BOOL hasStatus;
@property int status;
@property BOOL hasLiveTravelTime;
@property unsigned int liveTravelTime;
@property BOOL hasHistoricTravelTime;
@property unsigned int historicTravelTime;
@property(readonly) BOOL hasPlaceSearchResponse;
@property(retain) GEOPlaceSearchResponse * placeSearchResponse;
@property BOOL hasDistance;
@property unsigned int distance;
@property(retain) NSMutableArray * sortedETAs;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (id)sortedETAs;
- (id)placeSearchResponse;
- (unsigned int)liveTravelTime;
- (BOOL)hasPlaceSearchResponse;
- (BOOL)hasLiveTravelTime;
- (void)setHasLiveTravelTime:(BOOL)arg1;
- (void)setLiveTravelTime:(unsigned int)arg1;
- (id)sortedETAAtIndex:(unsigned int)arg1;
- (void)clearSortedETAs;
- (unsigned int)sortedETAsCount;
- (void)addSortedETA:(id)arg1;
- (void)setSortedETAs:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (unsigned int)historicTravelTime;
- (BOOL)hasHistoricTravelTime;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (BOOL)hasDistance;
- (void)setHasDistance:(BOOL)arg1;
- (BOOL)hasStatus;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end