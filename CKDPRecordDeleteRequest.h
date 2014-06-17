/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPRecordIdentifier;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    NSString *_etag;
    CKDPRecordIdentifier *_recordIdentifier;
}

@property(readonly) BOOL hasRecordIdentifier;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (BOOL)hasRecordIdentifier;
- (void)setRecordIdentifier:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
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
