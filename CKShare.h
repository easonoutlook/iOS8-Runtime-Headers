/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, CKShareID, NSMapTable, NSMutableArray, NSString, NSMutableSet, NSData, CKSharedItemID;

@interface CKShare : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isKnownToServer;
    CKShareID *_shareID;
    CKSharedItemID *_sharedItemID;
    NSData *_protectionData;
    NSString *_protectionVersion;
    NSMutableArray *_existingParticipants;
    NSMapTable *_addedParticipantsToOutgoingInvitationsTable;
    NSMutableArray *_removedParticipants;
    NSMutableSet *_pendingServerParticipants;
}

@property(copy) CKShareID * shareID;
@property(copy) CKSharedItemID * sharedItemID;
@property(copy,readonly) NSArray * allParticipants;
@property(retain) NSData * protectionData;
@property(retain) NSString * protectionVersion;
@property BOOL isKnownToServer;
@property(retain) NSMutableArray * existingParticipants;
@property(retain) NSMapTable * addedParticipantsToOutgoingInvitationsTable;
@property(retain) NSMutableArray * removedParticipants;
@property(retain) NSMutableSet * pendingServerParticipants;

+ (BOOL)supportsSecureCoding;

- (id)protectionVersion;
- (id)sharedItemID;
- (void)setProtectionVersion:(id)arg1;
- (void)setSharedItemID:(id)arg1;
- (void)setExistingParticipants:(id)arg1;
- (id)_initBare;
- (void)setIsKnownToServer:(BOOL)arg1;
- (id)removedParticipants;
- (id)existingParticipants;
- (id)addedParticipantsToOutgoingInvitationsTable;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)CKPropertiesDescription;
- (BOOL)isKnownToServer;
- (id)protectionData;
- (void)setProtectionData:(id)arg1;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (void)removeParticipant:(id)arg1;
- (id)addParticipantWithEmailAddress:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)addParticipantWithUserRecordID:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (int)acceptanceStatusForParticipant:(id)arg1;
- (int)participantListPermissionForParticipant:(id)arg1;
- (void)setParticipantListPermission:(int)arg1 forParticipant:(id)arg2;
- (int)itemPermissionForParticipant:(id)arg1;
- (void)setItemPermission:(int)arg1 forParticipant:(id)arg2;
- (id)initWithItem:(id)arg1 error:(id*)arg2;
- (void)setPendingServerParticipants:(id)arg1;
- (id)pendingServerParticipants;
- (id)_addParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2 invitationMessage:(id)arg3 invitationImageURL:(id)arg4;
- (void)_addParticipant:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)_matchingParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (id)allParticipants;
- (void)setAddedParticipantsToOutgoingInvitationsTable:(id)arg1;
- (void)setRemovedParticipants:(id)arg1;
- (id)initWithItem:(id)arg1 shareName:(id)arg2 error:(id*)arg3;
- (id)initWithItem:(id)arg1 shareName:(id)arg2;
- (id)_initWithSharedItemID:(id)arg1 shareID:(id)arg2 error:(id*)arg3;
- (void)_updateFromPendingServerParticipants;
- (void)_mergeServerParticipants:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;

@end