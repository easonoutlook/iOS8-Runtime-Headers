/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _additionalPlaceTypes;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    BOOL _splitIntoClusters;
    struct { 
        unsigned int splitIntoClusters : 1; 
    } _has;
}

@property BOOL hasSplitIntoClusters;
@property BOOL splitIntoClusters;
@property(retain) NSMutableArray * locations;
@property(readonly) unsigned int additionalPlaceTypesCount;
@property(readonly) int* additionalPlaceTypes;
@property(retain) NSMutableArray * serviceTags;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)locations;
- (unsigned int)locationsCount;
- (void)setSplitIntoClusters:(BOOL)arg1;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (BOOL)hasSplitIntoClusters;
- (void)setHasSplitIntoClusters:(BOOL)arg1;
- (BOOL)splitIntoClusters;
- (void)clearLocations;
- (void)addLocation:(id)arg1;
- (id)locationAtIndex:(unsigned int)arg1;
- (int*)additionalPlaceTypes;
- (void)addAdditionalPlaceType:(int)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaceTypes;
- (unsigned int)additionalPlaceTypesCount;
- (id)serviceTags;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)description;
- (void)dealloc;

@end
