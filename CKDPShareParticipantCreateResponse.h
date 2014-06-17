/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShare;

@interface CKDPShareParticipantCreateResponse : PBCodable <NSCopying> {
    CKDPShare *_share;
}

@property(readonly) BOOL hasShare;
@property(retain) CKDPShare * share;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)share;
- (BOOL)hasShare;
- (void)setShare:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
