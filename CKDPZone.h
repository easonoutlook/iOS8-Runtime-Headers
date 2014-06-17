/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPProtectionInfo, CKDPShareIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPZone : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPProtectionInfo *_protectionInfo;
    CKDPShareIdentifier *_shareId;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    NSString *_zoneProtectionInfoTag;
}

@property(readonly) BOOL hasZoneIdentifier;
@property(retain) CKDPRecordZoneIdentifier * zoneIdentifier;
@property(readonly) BOOL hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(readonly) BOOL hasProtectionInfo;
@property(retain) CKDPProtectionInfo * protectionInfo;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;
@property(readonly) BOOL hasZoneProtectionInfoTag;
@property(retain) NSString * zoneProtectionInfoTag;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)zoneProtectionInfoTag;
- (BOOL)hasZoneProtectionInfoTag;
- (void)setZoneProtectionInfoTag:(id)arg1;
- (id)zoneIdentifier;
- (BOOL)hasZoneIdentifier;
- (void)setZoneIdentifier:(id)arg1;
- (id)protectionInfo;
- (BOOL)hasProtectionInfo;
- (void)setProtectionInfo:(id)arg1;
- (id)shareId;
- (BOOL)hasShareId;
- (void)setShareId:(id)arg1;
- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end