/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORouteAttributes : PBCodable <NSCopying> {
    struct { 
        double _time; 
        int _flexibility; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int flexibility : 1; 
            unsigned int type : 1; 
        } _has; 
    } _timepoint;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _additionalTransportTypes;
    int _basicPointsToBeIncluded;
    int _mainTransportType;
    NSString *_phoneticLocaleIdentifier;
    int _trafficType;
    unsigned int _walkingLimitMeters;
    BOOL _includeContingencyRoutes;
    BOOL _includeHistoricTravelTime;
    BOOL _includeLaneGuidance;
    BOOL _includeManeuverIcons;
    BOOL _includePhonetics;
    BOOL _includeSubsteps;
    BOOL _includeTrafficAlongRoute;
    BOOL _includeTrafficIncidents;
    BOOL _includeZilchPoints;
    struct { 
        unsigned int timepoint : 1; 
        unsigned int basicPointsToBeIncluded : 1; 
        unsigned int mainTransportType : 1; 
        unsigned int trafficType : 1; 
        unsigned int walkingLimitMeters : 1; 
        unsigned int includeContingencyRoutes : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeLaneGuidance : 1; 
        unsigned int includeManeuverIcons : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeSubsteps : 1; 
        unsigned int includeTrafficAlongRoute : 1; 
        unsigned int includeTrafficIncidents : 1; 
        unsigned int includeZilchPoints : 1; 
    } _has;
}

@property BOOL hasMainTransportType;
@property int mainTransportType;
@property BOOL hasIncludePhonetics;
@property BOOL includePhonetics;
@property BOOL hasIncludeManeuverIcons;
@property BOOL includeManeuverIcons;
@property BOOL hasIncludeZilchPoints;
@property BOOL includeZilchPoints;
@property BOOL hasIncludeContingencyRoutes;
@property BOOL includeContingencyRoutes;
@property BOOL hasIncludeLaneGuidance;
@property BOOL includeLaneGuidance;
@property BOOL hasBasicPointsToBeIncluded;
@property int basicPointsToBeIncluded;
@property BOOL hasTrafficType;
@property int trafficType;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property BOOL hasIncludeTrafficAlongRoute;
@property BOOL includeTrafficAlongRoute;
@property BOOL hasTimepoint;
@property struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } timepoint;
@property BOOL hasIncludeHistoricTravelTime;
@property BOOL includeHistoricTravelTime;
@property BOOL hasIncludeSubsteps;
@property BOOL includeSubsteps;
@property BOOL hasIncludeTrafficIncidents;
@property BOOL includeTrafficIncidents;
@property BOOL hasWalkingLimitMeters;
@property unsigned int walkingLimitMeters;
@property(readonly) unsigned int additionalTransportTypesCount;
@property(readonly) int* additionalTransportTypes;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned int)arg2;
- (int*)additionalTransportTypes;
- (BOOL)hasWalkingLimitMeters;
- (void)setHasWalkingLimitMeters:(BOOL)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (unsigned int)walkingLimitMeters;
- (BOOL)hasIncludeTrafficIncidents;
- (void)setHasIncludeTrafficIncidents:(BOOL)arg1;
- (BOOL)includeTrafficIncidents;
- (BOOL)hasIncludeSubsteps;
- (void)setHasIncludeSubsteps:(BOOL)arg1;
- (void)setIncludeSubsteps:(BOOL)arg1;
- (BOOL)includeSubsteps;
- (BOOL)hasIncludeTrafficAlongRoute;
- (void)setHasIncludeTrafficAlongRoute:(BOOL)arg1;
- (BOOL)includeTrafficAlongRoute;
- (BOOL)hasTrafficType;
- (void)setHasTrafficType:(BOOL)arg1;
- (int)trafficType;
- (BOOL)hasBasicPointsToBeIncluded;
- (void)setHasBasicPointsToBeIncluded:(BOOL)arg1;
- (int)basicPointsToBeIncluded;
- (BOOL)hasIncludeLaneGuidance;
- (void)setHasIncludeLaneGuidance:(BOOL)arg1;
- (BOOL)includeLaneGuidance;
- (BOOL)hasIncludeContingencyRoutes;
- (void)setHasIncludeContingencyRoutes:(BOOL)arg1;
- (void)setIncludeContingencyRoutes:(BOOL)arg1;
- (BOOL)includeContingencyRoutes;
- (BOOL)hasIncludeZilchPoints;
- (void)setHasIncludeZilchPoints:(BOOL)arg1;
- (BOOL)includeZilchPoints;
- (BOOL)hasIncludeManeuverIcons;
- (void)setHasIncludeManeuverIcons:(BOOL)arg1;
- (BOOL)includeManeuverIcons;
- (BOOL)hasMainTransportType;
- (void)setHasMainTransportType:(BOOL)arg1;
- (int)mainTransportType;
- (void)addAdditionalTransportType:(int)arg1;
- (int)additionalTransportTypeAtIndex:(unsigned int)arg1;
- (void)clearAdditionalTransportTypes;
- (unsigned int)additionalTransportTypesCount;
- (void)setMainTransportType:(int)arg1;
- (void)setIncludeTrafficIncidents:(BOOL)arg1;
- (void)setIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setTrafficType:(int)arg1;
- (void)setIncludeLaneGuidance:(BOOL)arg1;
- (void)setIncludeManeuverIcons:(BOOL)arg1;
- (void)setIncludeZilchPoints:(BOOL)arg1;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (BOOL)includeHistoricTravelTime;
- (struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timepoint;
- (BOOL)hasIncludeHistoricTravelTime;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (BOOL)hasTimepoint;
- (void)setHasTimepoint:(BOOL)arg1;
- (void)setTimepoint:(struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (BOOL)includePhonetics;
- (BOOL)hasIncludePhonetics;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (id)phoneticLocaleIdentifier;
- (BOOL)hasPhoneticLocaleIdentifier;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
