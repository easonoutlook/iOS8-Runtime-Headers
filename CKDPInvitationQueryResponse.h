/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPInvitationQueryResponse : PBCodable <NSCopying> {
    NSMutableArray *_invitations;
}

@property(retain) NSMutableArray * invitations;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setInvitations:(id)arg1;
- (id)invitations;
- (id)invitationAtIndex:(unsigned int)arg1;
- (void)clearInvitations;
- (unsigned int)invitationsCount;
- (void)addInvitation:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
