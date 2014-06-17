/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSTimer, IMHandle, IMScheduledUpdater, IMAccount, <IMChatItemRules>, IMMessage, IMTimingCollection, NSDate, IMChatItem, NSMutableSet, NSArray, NSSet, IMMultiDict, IMChatRegistry, NSString, NSMutableDictionary, NSMutableArray, <IMChatSendProgressDelegate>;

@interface IMChat : NSObject  {
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_currentLocationGUID;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_groupID;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableDictionary *_unfinishedMessageMap;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_itemMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    IMTimingCollection *_timingCollection;
    NSMutableArray *_chatItems;
    NSMutableArray *_chatItemsUpdates;
    <IMChatItemRules> *_chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    IMChatItem *_nextStaleChatItem;
    IMMultiDict *_messageActionsMap;
    <IMChatSendProgressDelegate> *_sendProgressDelegate;
    NSTimer *_sendProgressTimer;
    NSMutableDictionary *_sendingItems;
    float _cachedSendProgress;
    int _joinState;
    unsigned char _style;
    unsigned int _numberOfMessagesToKeepLoaded;
    unsigned int _dbFailedCount;
    unsigned int _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured : 1;
    unsigned int _isFirstMessageInvitation : 1;
    unsigned int _wasInvitationHandled : 1;
    unsigned int _didSendAFinishedMessage : 1;
    unsigned int _hasPendingMarkRead : 1;
    unsigned int _isUpdatingChatItems : 1;
    unsigned int _isRecording : 1;
    BOOL _downgradeState;
    BOOL _ignoreDowngradeStatusUpdates;
}

@property unsigned int numberOfMessagesToKeepLoaded;
@property(readonly) BOOL hasMoreMessagesToLoad;
@property(copy,readonly) NSArray * attachments;
@property <IMChatSendProgressDelegate> * sendProgressDelegate;
@property(retain,readonly) NSSet * fmfHandles;
@property(retain,readonly) NSSet * allSiblingFMFHandles;
@property(readonly) BOOL hasRecipientsFollowingLocation;
@property(readonly) BOOL allRecipientsFollowingLocation;
@property(readonly) BOOL hasRecipientsSharingLocation;
@property(readonly) BOOL allRecipientsSharingLocation;
@property(retain,readonly) IMChatRegistry * chatRegistry;
@property(readonly) NSString * guid;
@property(readonly) IMAccount * account;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSString * chatIdentifier;
@property(retain,readonly) NSString * persistentID;
@property(readonly) unsigned int messageCount;
@property(readonly) unsigned int unreadMessageCount;
@property(readonly) unsigned int messageFailureCount;
@property(readonly) BOOL canLeaveChat;
@property(readonly) BOOL canHaveMultipleParticipants;
@property(readonly) unsigned int overallChatStatus;
@property NSString * displayName;
@property(readonly) NSString * roomName;
@property(readonly) NSString * roomNameWithoutSuffix;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateModified;
@property(retain) NSArray * frequentReplies;
@property(readonly) int joinState;
@property(readonly) BOOL hasUnhandledInvitation;
@property BOOL localUserIsTyping;
@property BOOL localUserIsRecording;
@property(readonly) NSString * localTypingMessageGUID;
@property(readonly) IMMessage * lastMessage;
@property(readonly) IMMessage * lastFinishedMessage;
@property(readonly) IMMessage * lastIncomingMessage;
@property(readonly) IMMessage * lastIncomingFinishedMessage;
@property(readonly) NSArray * participants;
@property(retain) IMHandle * recipient;
@property(retain) IMMessage * invitationForPendingParticipants;
@property(readonly) BOOL _shouldRegisterChat;
@property(retain,readonly) NSString * lastAddressedHandleID;
@property(retain,readonly) NSString * groupID;
@property void* contextInfo;
@property(setter=_setGUIDs:,retain) NSMutableSet * _guids;
@property(getter=_nextStaleChatItem,setter=_setNextStaleChatItem:,retain) IMChatItem * nextStaleChatItem;

+ (void)setChatItemRulesClass:(Class)arg1;
+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;

- (id)groupID;
- (id)dateCreated;
- (void)join;
- (id)persistentID;
- (id)guid;
- (id)testChatItems;
- (BOOL)allRecipientsSharingLocation;
- (BOOL)hasRecipientsFollowingLocation;
- (id)fmfHandles;
- (id)sendProgressDelegate;
- (void)_sendProgressTimerFired:(id)arg1;
- (float)progressSending:(unsigned int*)arg1 of:(unsigned int*)arg2;
- (void)_updateSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (id)chatItemsForItems:(id)arg1;
- (id)chatItemsForMessages:(id)arg1;
- (void)_replaceStaleChatItems;
- (void)_unmapSendingItem:(id)arg1;
- (void)_queueReplaceStaleChatItems;
- (void)resetSendProgressAndFinished:(BOOL)arg1;
- (BOOL)_hasSendingMessages;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_setTypingIndicatorTimeout;
- (id)loadFrequentRepliesLimit:(unsigned int)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)hasMoreMessagesToLoad;
- (void)_setAttachments:(id)arg1;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned int)arg3 loadImmediately:(BOOL)arg4;
- (void)_trimMessagesAsNeeded;
- (void)_trimMessagesLeavingNumber:(unsigned int)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5;
- (id)dateModified;
- (void)_setGUIDs:(id)arg1;
- (id)_guids;
- (void)_setNextStaleChatItem:(id)arg1;
- (id)_nextStaleChatItem;
- (void)setFrequentReplies:(id)arg1;
- (id)frequentReplies;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (void)_targetToService:(id)arg1 newComposition:(BOOL)arg2;
- (void)addPendingParticipants:(id)arg1;
- (void)_invitePendingParticipants;
- (BOOL)canAddParticipants:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (void)markMessageAsPlayed:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (BOOL)canSendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
- (BOOL)hasUnhandledInvitation;
- (id)roomNameWithoutSuffix;
- (void)setRoomName:(id)arg1;
- (unsigned int)overallChatStatus;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (BOOL)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_endTiming;
- (void)_startTiming:(id)arg1;
- (id)_timingCollection;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (BOOL)_shouldAnnouncePeopleJoin;
- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(BOOL)arg2;
- (void)_setDBFailedCount:(unsigned int)arg1;
- (void)_setDBUnreadCount:(unsigned int)arg1;
- (id)_messageActionsMap;
- (void)_unmapItem:(id)arg1;
- (void)_mapItem:(id)arg1;
- (BOOL)_shouldRegisterChat;
- (void)_setupObservation;
- (id)lastAddressedHandleID;
- (void)_clearDowngradeMarkers;
- (void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)_previousAccountForService:(id)arg1;
- (BOOL)_sanityCheckAccounts;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (id)invitationForPendingParticipants;
- (id)_pendingParticipants;
- (id)participantsWithState:(unsigned int)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_addParticipant:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)_clearUnreadCount;
- (id)_itemsForGUIDs:(id)arg1;
- (void)_markItemsAsRead:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (BOOL)canSendTransfer:(id)arg1;
- (void)_setLocalUserIsTyping:(BOOL)arg1 recording:(BOOL)arg2 suppliedGUID:(id)arg3;
- (id)chatRegistry;
- (void)_setJoinState:(int)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_clearCachedIdentifier;
- (id)roomName;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (void)_updateTypingIndicatorTimeout;
- (void)_clearTypingIndicatorTimeout;
- (void)_clearIncomingTypingIndicators;
- (void)_replaceChatItemsForItem:(id)arg1 withChatItemsForItem:(id)arg2;
- (void)_mapSendingItem:(id)arg1;
- (BOOL)_isDuplicate:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1 shouldQueue:(BOOL)arg2;
- (void)_queueChatItemsUpdate:(id)arg1;
- (void)_removeChatItemsForItem:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (unsigned int)stateForParticipant:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_removeChatItemsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(id)arg3;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (void)_replaceChatItemsWithChatItemsForItems:(id)arg1;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned int)arg5;
- (unsigned int)numberOfMessagesToKeepLoaded;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id)arg2;
- (void)_appendChatItemsForItem:(id)arg1;
- (void)_configureLocationShareItem:(id)arg1;
- (unsigned int)messageFailureCount;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7;
- (void)_initialize;
- (void)_buildInitialChatItems:(id)arg1;
- (id)chatIdentifier;
- (void)_updateChatItems;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (BOOL)canHaveMultipleParticipants;
- (void)_accountControllerUpdated:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)_updateDisplayName:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)account;
- (id)participants;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)deleteChatItems:(id)arg1;
- (void)updateChatItemsIfNeeded;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (BOOL)isDowngraded;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (BOOL)localUserIsRecording;
- (BOOL)localUserIsTyping;
- (id)localTypingMessageGUID;
- (void)_setAccount:(id)arg1;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (BOOL)deleteAllHistory;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_calculateDowngradeState;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (int)joinState;
- (BOOL)canLeaveChat;
- (unsigned char)chatStyle;
- (void)_setupPreferredServiceChangeHandlers;
- (id)valueForChatProperty:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)_invalidateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (id)lastMessage;
- (unsigned int)unreadMessageCount;
- (void)setContextInfo:(void*)arg1;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned int)arg1;
- (void*)contextInfo;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)setLocalUserIsRecording:(BOOL)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)markAllMessagesAsRead;
- (void)setSendProgressDelegate:(id)arg1;
- (void)leave;
- (void)shareLocationUntilDate:(id)arg1;
- (void)stopSharingLocation;
- (void)sendCurrentLocationMessage;
- (BOOL)canSendCurrentLocationMessage;
- (BOOL)authorizedToSendCurrentLocationMessage;
- (BOOL)allRecipientsFollowingLocation;
- (id)lastFinishedMessage;
- (void)deleteTransfers:(id)arg1;
- (id)chatItems;
- (id)allSiblingFMFHandles;
- (BOOL)hasRecipientsSharingLocation;
- (void)stopTrackingParticipantLocations;
- (void)startTrackingParticipantLocations;
- (id)attachments;
- (id)displayName;
- (void)remove;
- (unsigned int)messageCount;
- (void)clear;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setDisplayName:(id)arg1;
- (BOOL)__ck_hasValidAccountForService:(id)arg1;
- (BOOL)__ck_hasDowngradeMarkers;
- (id)__ck_muteUntilDate;
- (BOOL)__ck_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2;
- (void)__ck_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)__ck_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)__ck_previousAccountForService:(id)arg1;
- (long long)__ck_watermarkMessageID;
- (id)__ck_watermarkDate;
- (void)__ck_clearDowngradeMarkers;
- (void)__ck_setMuteUntilDate:(id)arg1;
- (BOOL)__ck_isMuted;

@end