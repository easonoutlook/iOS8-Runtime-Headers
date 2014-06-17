/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier;

@interface CKDPShareRetrieveRequest : PBRequest <NSCopying> {
    CKDPShareIdentifier *_shareId;
}

@property(readonly) BOOL hasShareId;
@property(retain) CKDPShareIdentifier * shareId;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)shareId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (BOOL)hasShareId;
- (void)setShareId:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
