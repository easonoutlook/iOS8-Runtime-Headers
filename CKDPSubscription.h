/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPSubscriptionNotification, CKDPIdentifier, NSMutableArray, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _mutationTriggers;
    int _evaluationType;
    NSMutableArray *_filters;
    CKDPIdentifier *_identifier;
    CKDPSubscriptionNotification *_notification;
    int _owner;
    NSMutableArray *_recordTypes;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    BOOL _fireOnce;
    struct { 
        unsigned int evaluationType : 1; 
        unsigned int owner : 1; 
        unsigned int fireOnce : 1; 
    } _has;
}

@property(readonly) BOOL hasIdentifier;
@property(retain) CKDPIdentifier * identifier;
@property BOOL hasEvaluationType;
@property int evaluationType;
@property BOOL hasOwner;
@property int owner;
@property(readonly) unsigned int mutationTriggersCount;
@property(readonly) int* mutationTriggers;
@property(readonly) BOOL hasNotification;
@property(retain) CKDPSubscriptionNotification * notification;
@property(retain) NSMutableArray * filters;
@property(retain) NSMutableArray * recordTypes;
@property BOOL hasFireOnce;
@property BOOL fireOnce;
@property(readonly) BOOL hasZoneIdentifier;
@property(retain) CKDPRecordZoneIdentifier * zoneIdentifier;


- (void)setOwner:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)fireOnce;
- (void)setRecordTypes:(id)arg1;
- (id)recordTypes;
- (int)evaluationType;
- (BOOL)hasFireOnce;
- (void)setHasFireOnce:(BOOL)arg1;
- (void)setFireOnce:(BOOL)arg1;
- (BOOL)hasNotification;
- (void)setMutationTriggers:(int*)arg1 count:(unsigned int)arg2;
- (int*)mutationTriggers;
- (BOOL)hasOwner;
- (void)setHasOwner:(BOOL)arg1;
- (BOOL)hasEvaluationType;
- (void)setHasEvaluationType:(BOOL)arg1;
- (void)setEvaluationType:(int)arg1;
- (id)recordTypesAtIndex:(unsigned int)arg1;
- (void)clearRecordTypes;
- (unsigned int)recordTypesCount;
- (void)setNotification:(id)arg1;
- (void)addMutationTriggers:(int)arg1;
- (int)mutationTriggersAtIndex:(unsigned int)arg1;
- (void)clearMutationTriggers;
- (unsigned int)mutationTriggersCount;
- (void)addRecordTypes:(id)arg1;
- (id)filtersAtIndex:(unsigned int)arg1;
- (void)clearFilters;
- (unsigned int)filtersCount;
- (void)addFilters:(id)arg1;
- (BOOL)hasIdentifier;
- (id)zoneIdentifier;
- (BOOL)hasZoneIdentifier;
- (void)setZoneIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:(id)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)notification;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)owner;
- (id)description;
- (void)dealloc;

@end
