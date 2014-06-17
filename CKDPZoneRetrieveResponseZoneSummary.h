/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, CKDPZone;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {
    long long _assetQuotaUsage;
    long long _deleteTimeSec;
    long long _disableTimeSec;
    long long _metadataQuotaUsage;
    NSData *_clientChangeToken;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    CKDPZone *_targetZone;
    struct { 
        unsigned int assetQuotaUsage : 1; 
        unsigned int deleteTimeSec : 1; 
        unsigned int disableTimeSec : 1; 
        unsigned int metadataQuotaUsage : 1; 
        unsigned int deviceCount : 1; 
    } _has;
}

@property(readonly) BOOL hasTargetZone;
@property(retain) CKDPZone * targetZone;
@property(readonly) BOOL hasCurrentServerContinuationToken;
@property(retain) NSData * currentServerContinuationToken;
@property(readonly) BOOL hasClientChangeToken;
@property(retain) NSData * clientChangeToken;
@property BOOL hasDeviceCount;
@property int deviceCount;
@property BOOL hasAssetQuotaUsage;
@property long long assetQuotaUsage;
@property BOOL hasMetadataQuotaUsage;
@property long long metadataQuotaUsage;
@property BOOL hasDisableTimeSec;
@property long long disableTimeSec;
@property BOOL hasDeleteTimeSec;
@property long long deleteTimeSec;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (long long)deleteTimeSec;
- (long long)disableTimeSec;
- (long long)metadataQuotaUsage;
- (long long)assetQuotaUsage;
- (int)deviceCount;
- (id)clientChangeToken;
- (id)currentServerContinuationToken;
- (id)targetZone;
- (BOOL)hasDeleteTimeSec;
- (void)setHasDeleteTimeSec:(BOOL)arg1;
- (void)setDeleteTimeSec:(long long)arg1;
- (BOOL)hasDisableTimeSec;
- (void)setHasDisableTimeSec:(BOOL)arg1;
- (void)setDisableTimeSec:(long long)arg1;
- (BOOL)hasMetadataQuotaUsage;
- (void)setHasMetadataQuotaUsage:(BOOL)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (BOOL)hasAssetQuotaUsage;
- (void)setHasAssetQuotaUsage:(BOOL)arg1;
- (void)setAssetQuotaUsage:(long long)arg1;
- (BOOL)hasDeviceCount;
- (void)setHasDeviceCount:(BOOL)arg1;
- (void)setDeviceCount:(int)arg1;
- (BOOL)hasClientChangeToken;
- (BOOL)hasCurrentServerContinuationToken;
- (BOOL)hasTargetZone;
- (void)setClientChangeToken:(id)arg1;
- (void)setCurrentServerContinuationToken:(id)arg1;
- (void)setTargetZone:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
