/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSData, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShare : PBCodable <NSCopying> {
    NSData *_keyData;
    NSString *_keyVersion;
    NSMutableArray *_participants;
    NSData *_resource;
    NSString *_resourceProvider;
    int _resourceState;
    CKDPShareIdentifier *_shareId;
    struct { 
        unsigned int resourceState : 1; 
    } _has;
}

@property(readonly) BOOL hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(retain) NSMutableArray * participants;
@property(readonly) BOOL hasResourceProvider;
@property(retain) NSString * resourceProvider;
@property(readonly) BOOL hasResource;
@property(retain) NSData * resource;
@property BOOL hasResourceState;
@property int resourceState;
@property(readonly) BOOL hasKeyVersion;
@property(retain) NSString * keyVersion;
@property(readonly) BOOL hasKeyData;
@property(retain) NSData * keyData;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resource;
- (id)keyVersion;
- (int)resourceState;
- (id)resourceProvider;
- (BOOL)hasKeyVersion;
- (BOOL)hasResourceState;
- (void)setHasResourceState:(BOOL)arg1;
- (void)setResourceState:(int)arg1;
- (BOOL)hasResource;
- (BOOL)hasResourceProvider;
- (void)setKeyVersion:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (id)keyData;
- (BOOL)hasKeyData;
- (void)setKeyData:(id)arg1;
- (void)setParticipants:(id)arg1;
- (id)participants;
- (id)shareId;
- (BOOL)hasShareId;
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
