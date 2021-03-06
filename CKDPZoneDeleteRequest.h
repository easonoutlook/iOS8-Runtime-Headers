/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {
    long long _deleteAfterSec;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    struct { 
        unsigned int deleteAfterSec : 1; 
    } _has;
}

@property(readonly) BOOL hasZoneIdentifier;
@property(retain) CKDPRecordZoneIdentifier * zoneIdentifier;
@property BOOL hasDeleteAfterSec;
@property long long deleteAfterSec;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (long long)deleteAfterSec;
- (BOOL)hasDeleteAfterSec;
- (void)setHasDeleteAfterSec:(BOOL)arg1;
- (void)setDeleteAfterSec:(long long)arg1;
- (id)zoneIdentifier;
- (BOOL)hasZoneIdentifier;
- (void)setZoneIdentifier:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
