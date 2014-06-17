/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayerInternal, NSString, NSOrderedSet, NSDate, GKGameInternal;

@interface GKChallengeInternal : GKInternalRepresentation  {
    NSString *_challengeID;
    NSString *_message;
    NSDate *_issueDate;
    NSDate *_completionDate;
    NSOrderedSet *_compatibleBundleIDs;
    GKGameInternal *_game;
    GKPlayerInternal *_issuingPlayer;
    GKPlayerInternal *_receivingPlayer;
    int _state;
    NSString *_bundleID;
}

@property(retain) NSString * challengeID;
@property(retain) NSString * bundleID;
@property(retain) NSDate * issueDate;
@property(retain) NSDate * completionDate;
@property int state;
@property(retain) NSOrderedSet * compatibleBundleIDs;
@property(retain) NSString * message;
@property(retain) GKGameInternal * game;
@property(retain) GKPlayerInternal * issuingPlayer;
@property(retain) GKPlayerInternal * receivingPlayer;
@property(readonly) unsigned int type;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (id)game;
- (void)setGame:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (id)compatibleBundleIDs;
- (void)setReceivingPlayer:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (id)findLocalGameBundleID;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (id)issueDate;
- (id)challengeID;
- (id)issuingPlayer;
- (void)setIssuingPlayer:(id)arg1;
- (id)receivingPlayer;
- (id)serverRepresentation;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setState:(int)arg1;
- (unsigned int)type;
- (int)state;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;

@end
