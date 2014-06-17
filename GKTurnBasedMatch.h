/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKTurnBasedParticipant, GKTurnBasedMatchInternal, NSData, GKGame, GKPlayer, NSString, NSDate, NSArray;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
    unsigned int _state;
}

@property(retain,readonly) NSString * matchID;
@property(retain,readonly) NSDate * creationDate;
@property(retain,readonly) NSArray * participants;
@property(readonly) int status;
@property(retain) GKTurnBasedParticipant * currentParticipant;
@property(retain,readonly) NSData * matchData;
@property(copy) NSString * message;
@property unsigned int matchDataMaximumSize;
@property(retain,readonly) NSArray * exchanges;
@property(retain,readonly) NSArray * activeExchanges;
@property(retain,readonly) NSArray * completedExchanges;
@property(readonly) unsigned int exchangeDataMaximumSize;
@property(readonly) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property(retain) GKTurnBasedMatchInternal * internal;
@property(copy) NSDate * lastTurnDate;
@property(readonly) int turnNumber;
@property(readonly) NSDate * dateSortKey;
@property(readonly) GKTurnBasedParticipant * previousParticipant;
@property(readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer;
@property(readonly) GKTurnBasedParticipant * localPlayerParticipant;
@property(readonly) GKPlayer * showcasePlayer;
@property(readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser;
@property(readonly) GKPlayer * currentPlayer;
@property(retain) NSString * bundleID;
@property(retain) NSString * bundleVersion;
@property unsigned int state;
@property(readonly) BOOL isMyTurn;
@property(readonly) BOOL localPlayerHasRecentTurn;
@property(readonly) GKGame * game;

+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTurnBasedMatchSummaries:(id)arg1;
+ (void)loadMatchesWithCompletionHandler:(id)arg1;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(id)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)previousParticipantOrFirstKnownPlayer;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)activeExchanges;
- (id)localPlayerParticipant;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)currentParticipant;
- (id)game;
- (id)internal;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(id)arg4;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(id)arg6;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(id)arg3;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id)arg2;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(id)arg2;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id)arg3;
- (void)loadMatchDataWithCompletionHandler:(id)arg1;
- (void)removeWithCompletionHandler:(id)arg1;
- (id)completedExchanges;
- (id)showcasePlayer;
- (BOOL)localPlayerHasRecentTurn;
- (BOOL)isMyTurn;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(id)arg4;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id)arg5;
- (id)indexesForParticipants:(id)arg1;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id)arg4;
- (void)declineInviteWithCompletionHandler:(id)arg1;
- (id)previousParticipant;
- (void)setCurrentParticipant:(id)arg1;
- (id)dateSortKey;
- (unsigned int)matchDataMaximumSize;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (id)currentPlayer;
- (id)exchanges;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (id)exchangeForID:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(id)arg1;
- (void)rematchWithCompletionHandler:(id)arg1;
- (unsigned int)exchangeMaxInitiatedExchangesPerPlayer;
- (unsigned int)exchangeDataMaximumSize;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)participants;
- (int)status;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (int)compare:(id)arg1;
- (id)message;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setState:(unsigned int)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)state;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
