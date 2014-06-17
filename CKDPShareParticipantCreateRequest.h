/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier, NSString, NSMutableArray;

@interface CKDPShareParticipantCreateRequest : PBRequest <NSCopying> {
    NSString *_invitationImageUrl;
    NSString *_invitationMessage;
    NSMutableArray *_participants;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) BOOL hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(retain) NSMutableArray * participants;
@property(readonly) BOOL hasInvitationMessage;
@property(retain) NSString * invitationMessage;
@property(readonly) BOOL hasInvitationImageUrl;
@property(retain) NSString * invitationImageUrl;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)invitationImageUrl;
- (id)invitationMessage;
- (void)setParticipants:(id)arg1;
- (id)participants;
- (id)shareId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (BOOL)hasInvitationImageUrl;
- (BOOL)hasInvitationMessage;
- (BOOL)hasShareId;
- (void)setInvitationImageUrl:(id)arg1;
- (void)setInvitationMessage:(id)arg1;
- (id)participantAtIndex:(unsigned int)arg1;
- (void)clearParticipants;
- (unsigned int)participantsCount;
- (void)setShareId:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
