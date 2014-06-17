/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    int _localSearchProviderID;
    int _resultIndex;
    int _sequenceNumber;
    struct { 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property BOOL hasBusinessID;
@property unsigned long long businessID;
@property BOOL hasPlaceID;
@property long long placeID;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;
@property BOOL hasSearchResponseRelativeTimestamp;
@property double searchResponseRelativeTimestamp;
@property BOOL hasResultIndex;
@property int resultIndex;

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;

- (unsigned long long)businessID;
- (BOOL)hasBusinessID;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (BOOL)hasResultIndex;
- (void)setHasResultIndex:(BOOL)arg1;
- (BOOL)hasSearchResponseRelativeTimestamp;
- (void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1;
- (id)initWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (long long)placeID;
- (BOOL)hasPlaceID;
- (void)setHasPlaceID:(BOOL)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (BOOL)hasSequenceNumber;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setSequenceNumber:(int)arg1;
- (int)localSearchProviderID;
- (BOOL)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (int)sequenceNumber;

@end
