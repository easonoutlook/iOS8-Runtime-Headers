/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableArray, NSString, NSObject<OS_dispatch_queue>, <BBRemoteDataProvider>, NSXPCConnection, BBDataProviderIdentity;

@interface BBDataProviderProxy : NSObject  {
    NSString *_sectionID;
    <BBRemoteDataProvider> *_dataProvider;
    NSObject<OS_dispatch_queue> *_serverRequestQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    BOOL _dataProviderDidLoad;
    BBDataProviderIdentity *_identity;
    NSXPCConnection *_connection;
    NSMutableArray *_pendingRequests;
}

@property(copy) NSString * sectionID;
@property(retain) <BBRemoteDataProvider> * dataProvider;
@property(retain) BBDataProviderIdentity * identity;


- (id)identity;
- (void)setIdentity:(id)arg1;
- (id)sectionID;
- (void)updateSectionInfoWithHandler:(id)arg1;
- (void)updateClearedInfoWithHandler:(id)arg1;
- (void)reloadDefaultSectionInfo;
- (void)reloadSectionParameters;
- (void)addBulletin:(id)arg1 interrupt:(BOOL)arg2;
- (void)updateSectionInfoWithHandler:(id)arg1 completion:(id)arg2;
- (void)_updateIdentity:(id)arg1;
- (void)_makeServerRequest:(id)arg1;
- (void)_makeClientRequest:(id)arg1;
- (void)_processPendingRequests;
- (id)initWithDataProvider:(id)arg1 identity:(id)arg2 dataProviderQueue:(id)arg3;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned int)arg2;
- (void)invalidateBulletins;
- (void)deliverBulletinActionResponse:(id)arg1;
- (void)sectionIdentityWithCompletion:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)dataProviderDidLoad;
- (void)ping:(id)arg1;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (id)_serverProxy;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)resume;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)setSectionID:(id)arg1;

@end
