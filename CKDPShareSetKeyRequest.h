/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSData, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShareSetKeyRequest : PBRequest <NSCopying> {
    NSString *_currentKeyVersion;
    NSData *_keyData;
    NSMutableArray *_participantIds;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) BOOL hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(readonly) BOOL hasCurrentKeyVersion;
@property(retain) NSString * currentKeyVersion;
@property(readonly) BOOL hasKeyData;
@property(retain) NSData * keyData;
@property(retain) NSMutableArray * participantIds;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setParticipantIds:(id)arg1;
- (id)participantIds;
- (id)currentKeyVersion;
- (BOOL)hasCurrentKeyVersion;
- (id)participantIdAtIndex:(unsigned int)arg1;
- (void)clearParticipantIds;
- (unsigned int)participantIdsCount;
- (void)setCurrentKeyVersion:(id)arg1;
- (void)addParticipantId:(id)arg1;
- (id)keyData;
- (BOOL)hasKeyData;
- (void)setKeyData:(id)arg1;
- (id)shareId;
- (BOOL)hasShareId;
- (void)setShareId:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end