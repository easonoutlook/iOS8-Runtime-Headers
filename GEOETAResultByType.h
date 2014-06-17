/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying> {
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int travelTimeBestEstimate : 1; 
    } _has;
}

@property BOOL hasTransportType;
@property int transportType;
@property BOOL hasStatus;
@property int status;
@property BOOL hasTravelTimeBestEstimate;
@property unsigned int travelTimeBestEstimate;
@property BOOL hasHistoricTravelTime;
@property unsigned int historicTravelTime;
@property BOOL hasDistance;
@property unsigned int distance;


- (int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (unsigned int)travelTimeBestEstimate;
- (BOOL)hasTravelTimeBestEstimate;
- (void)setHasTravelTimeBestEstimate:(BOOL)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (unsigned int)historicTravelTime;
- (BOOL)hasHistoricTravelTime;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (BOOL)hasDistance;
- (void)setHasDistance:(BOOL)arg1;
- (BOOL)hasTransportType;
- (void)setHasTransportType:(BOOL)arg1;
- (BOOL)hasStatus;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setTransportType:(int)arg1;

@end
