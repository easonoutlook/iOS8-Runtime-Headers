/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSMutableOrderedSet, NSMutableSet, LSObserverTimer, NSObject<OS_dispatch_queue>, LSInstallProgressList, NSMutableDictionary;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {
    NSMutableDictionary *_observers;
    LSInstallProgressList *_progresses;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableDictionary *_installIndexes;
    NSMutableSet *_inactiveInstalls;
    LSObserverTimer *installsStartedTimer;
    LSObserverTimer *iconsUpdatedTimer;
    LSObserverTimer *installsUpdatedTimer;
    LSObserverTimer *installsFinishedTimer;
    LSObserverTimer *didUninstallTimer;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _usingNetwork;
}


- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleCancelInstallationForApp:(id)arg1;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)rebuildInstallIndexes;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned int)arg2 isActive:(BOOL)arg3;
- (void)restoreInactiveInstalls;
- (void)sendNetworkUsageChangedNotification;
- (void)sendUninstalledNotificationForApp:(id)arg1 reply:(id)arg2;
- (void)sendInstalledNotificationForApp:(id)arg1 reply:(id)arg2;
- (void)installationFailedForApplication:(id)arg1 reply:(id)arg2;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned int)arg2 andPublishingString:(id)arg3;
- (void)sendChangeNotificationForApp:(id)arg1;
- (void)sendInstalledNotificationForApps:(id)arg1;
- (void)sendIconUpdatedNotificationForApp:(id)arg1;
- (void)placeholderInstalledForApp:(id)arg1;
- (void)sendUninstalledNotificationForApps:(id)arg1;
- (void)installationEndedForApplication:(id)arg1;
- (void)sendFailedNotificationForApp:(id)arg1 isUninstall:(BOOL)arg2;
- (void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(BOOL)arg3;
- (void)removeObserverWithUUID:(id)arg1;
- (void)addObserver:(id)arg1 withUUID:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;

@end
