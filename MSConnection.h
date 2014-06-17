/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, NSXPCConnection;

@interface MSConnection : NSObject  {
    NSXPCConnection *_center;
    NSXPCConnection *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;

- (BOOL)isBusy;
- (void)isBusyCompletionBlock:(id)arg1;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (void)resume:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)forgetPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (void)_waitForMessageToBeSent;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (id)pause;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end