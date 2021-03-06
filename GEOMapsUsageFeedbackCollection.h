/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceActionDetails, GEOCarInfo;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _sessionRelativeTimestamp;
    int _actionType;
    GEOCarInfo *_carInfo;
    GEOPlaceActionDetails *_placeActionDetails;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int actionType : 1; 
    } _has;
}

@property BOOL hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property BOOL hasActionType;
@property int actionType;
@property BOOL hasSessionRelativeTimestamp;
@property double sessionRelativeTimestamp;
@property(readonly) BOOL hasPlaceActionDetails;
@property(retain) GEOPlaceActionDetails * placeActionDetails;
@property(readonly) BOOL hasCarInfo;
@property(retain) GEOCarInfo * carInfo;

+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)carInfo;
- (id)placeActionDetails;
- (double)sessionRelativeTimestamp;
- (BOOL)hasCarInfo;
- (BOOL)hasPlaceActionDetails;
- (BOOL)hasSessionRelativeTimestamp;
- (void)setHasSessionRelativeTimestamp:(BOOL)arg1;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (BOOL)hasActionType;
- (void)setHasActionType:(BOOL)arg1;
- (BOOL)hasSessionID;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
