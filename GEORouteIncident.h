/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEORouteIncident : PBCodable <NSCopying> {
    long long _endTime;
    long long _startTime;
    long long _updateTime;
    NSString *_crossStreet;
    NSString *_incidentId;
    NSString *_info;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    GEOLatLng *_position;
    int _significance;
    NSString *_street;
    int _type;
    BOOL _endTimeReliable;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
        unsigned int updateTime : 1; 
        unsigned int laneClosureCount : 1; 
        unsigned int laneClosureType : 1; 
        unsigned int significance : 1; 
        unsigned int type : 1; 
        unsigned int endTimeReliable : 1; 
    } _has;
}

@property(readonly) BOOL hasPosition;
@property(retain) GEOLatLng * position;
@property(readonly) BOOL hasIncidentId;
@property(retain) NSString * incidentId;
@property(readonly) BOOL hasInfo;
@property(retain) NSString * info;
@property BOOL hasType;
@property int type;
@property(readonly) BOOL hasStreet;
@property(retain) NSString * street;
@property(readonly) BOOL hasCrossStreet;
@property(retain) NSString * crossStreet;
@property BOOL hasStartTime;
@property long long startTime;
@property BOOL hasEndTime;
@property long long endTime;
@property BOOL hasUpdateTime;
@property long long updateTime;
@property BOOL hasLaneClosureType;
@property int laneClosureType;
@property BOOL hasLaneClosureCount;
@property unsigned int laneClosureCount;
@property BOOL hasEndTimeReliable;
@property BOOL endTimeReliable;
@property BOOL hasSignificance;
@property int significance;


- (long long)updateTime;
- (id)crossStreet;
- (id)street;
- (id)incidentId;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (int)significance;
- (long long)endTime;
- (BOOL)hasEndTime;
- (BOOL)hasStartTime;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (BOOL)endTimeReliable;
- (BOOL)hasSignificance;
- (void)setHasSignificance:(BOOL)arg1;
- (void)setSignificance:(int)arg1;
- (BOOL)hasEndTimeReliable;
- (void)setHasEndTimeReliable:(BOOL)arg1;
- (void)setEndTimeReliable:(BOOL)arg1;
- (BOOL)hasLaneClosureCount;
- (void)setHasLaneClosureCount:(BOOL)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (BOOL)hasLaneClosureType;
- (void)setHasLaneClosureType:(BOOL)arg1;
- (void)setLaneClosureType:(int)arg1;
- (BOOL)hasUpdateTime;
- (void)setHasUpdateTime:(BOOL)arg1;
- (void)setUpdateTime:(long long)arg1;
- (BOOL)hasCrossStreet;
- (BOOL)hasStreet;
- (BOOL)hasIncidentId;
- (BOOL)hasPosition;
- (void)setCrossStreet:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setHasEndTime:(BOOL)arg1;
- (BOOL)hasInfo;
- (void)setInfo:(id)arg1;
- (long long)startTime;
- (id)dictionaryRepresentation;
- (id)info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setEndTime:(long long)arg1;
- (id)position;
- (id)description;
- (void)setPosition:(id)arg1;
- (void)dealloc;
- (struct CGImage { }*)_mapKitImage;

@end
