/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBObserverServerProxy, NSMutableSet, NSString, NSObject<OS_dispatch_queue>, <BBObserverDelegate>, NSMutableDictionary;

@interface BBObserver : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    struct { 
        unsigned int addBulletinPlayLightsAndSirens : 1; 
        unsigned int addBulletin : 1; 
        unsigned int modifyBulletin : 1; 
        unsigned int modifyBulletinDEPRECATED : 1; 
        unsigned int removeBulletin : 1; 
        unsigned int removeBulletinFinal : 1; 
        unsigned int sectionOrderRule : 1; 
        unsigned int sectionOrder : 1; 
        unsigned int sectionOrderDefault : 1; 
        unsigned int sectionInfo : 1; 
        unsigned int sectionInfoDefault : 1; 
        unsigned int sectionParameters : 1; 
        unsigned int fetchImage : 1; 
        unsigned int fetchSize : 1; 
        unsigned int sizeConstraints : 1; 
        unsigned int multiSizeConstraints : 1; 
        unsigned int imageForThumbData : 1; 
        unsigned int sizeForThumbSize : 1; 
        unsigned int purgeReferences : 1; 
        unsigned int alertBehaviorOverrides : 1; 
        unsigned int alertBehaviorOverrideState : 1; 
        unsigned int invalidatedBulletinIDs : 1; 
        unsigned int serverConnectionChanged : 1; 
        unsigned int serverReceivedResponse : 1; 
    } _delegateFlags;
    NSMutableDictionary *_bulletinLifeAssertions;
    NSMutableDictionary *_sectionParameters;
    NSMutableDictionary *_attachmentInfoByBulletinID;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    unsigned int _numberOfBulletinFetchesUnderway;
    NSMutableSet *_sectionIDsWithUpdatesUnderway;
    NSMutableDictionary *_bulletinUpdateQueuesBySectionID;
    BBObserverServerProxy *_serverProxy;
    BOOL _isGateway;
    <BBObserverDelegate> *_delegate;
    unsigned int _observerFeed;
    NSString *_gatewayName;
    unsigned int _gatewayPriority;
}

@property <BBObserverDelegate> * delegate;
@property unsigned int observerFeed;
@property(copy,readonly) NSString * gatewayName;
@property(readonly) unsigned int gatewayPriority;

+ (void)initialize;

- (void)getSectionInfoWithCompletion:(id)arg1;
- (unsigned int)gatewayPriority;
- (id)gatewayName;
- (unsigned int)observerFeed;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 inCategory:(int)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(int)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2 withReply:(id)arg3;
- (void)_noteCompletedBulletinFetch;
- (void)_performBulletinFetch:(id)arg1;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned int)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg1 withCompletion:(id)arg2;
- (struct CGSize { float x1; float x2; })attachmentSizeForKey:(id)arg1 forBulletinID:(id)arg2;
- (id)attachmentImageForKey:(id)arg1 forBulletinID:(id)arg2;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)_getParametersIfNecessaryForSectionIDs:(id)arg1 withCompletion:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)getPrivilegedAddressBookGroupRecordIDAndNameWithCompletion:(id)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(id)arg1;
- (void)getAlertBehaviorOverridesWithCompletion:(id)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned int)arg3;
- (void)_performOrEnqueueBulletinUpdate:(id)arg1 forSection:(id)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)_noteCompletedBulletinUpdateForSection:(id)arg1;
- (void)_registerBulletin:(id)arg1 withTransactionID:(unsigned int)arg2;
- (void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg1;
- (void)setObserverFeed:(unsigned int)arg1;
- (id)_lifeAssertionForBulletinID:(id)arg1;
- (void)_getAttachmentSizesIfPossibleForBulletins:(id)arg1 withCompletion:(id)arg2;
- (void)_getAttachmentImagesIfPossibleForBulletins:(id)arg1 withCompletion:(id)arg2;
- (void)_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)_noteAttachmentSizesFetchedForBulletinID:(id)arg1;
- (void)_setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (BOOL)_attachmentSizesFetchedForBulletinID:(id)arg1;
- (void)_noteAttachmentImagesFetchedForBulletinID:(id)arg1;
- (void)_fetchAndProcessImageForBulletinID:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(int)arg4 completion:(id)arg5;
- (id)_reasonableConstraintsForAttachmentType:(int)arg1;
- (BOOL)_attachmentImagesFetchedForBulletinID:(id)arg1;
- (void)_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (id)_attachmentInfoForBulletinID:(id)arg1 create:(BOOL)arg2;
- (id)parametersForSectionID:(id)arg1;
- (void)_getParametersIfNecessaryForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned int)arg3;
- (void)clearSection:(id)arg1;
- (void)_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)getSectionInfoForCategory:(int)arg1 withCompletion:(id)arg2;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (void)_invalidate;
- (BOOL)isValid;
- (id)initWithQueue:(id)arg1;
- (void)sendResponse:(id)arg1;
- (id)delegate;
- (void)_commonInit:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end