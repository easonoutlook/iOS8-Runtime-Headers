/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ATLegacyAssetLink, NSDate, NSObject<OS_dispatch_queue>, ATAsset, ATLegacyMessageLink, NSMutableArray, ATClientController, NSString, NSMutableDictionary, ATUserDefaults;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ATEnvironmentMonitorObserver, ATAssetManagerObserver> {
    ATUserDefaults *_defaults;
    ATClientController *_clientController;
    NSMutableDictionary *_diskUsageInfo;
    NSObject<OS_dispatch_queue> *_diskUsageQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageLinks;
    ATLegacyMessageLink *_currentMessageLink;
    ATLegacyAssetLink *_assetLink;
    NSMutableArray *_dataclasses;
    NSMutableArray *_reconciledDataclasses;
    unsigned long _grappaId;
    NSDate *_startTime;
    BOOL _localSyncRequestCanceled;
    BOOL _isSyncing;
    BOOL _localSyncRequest;
    BOOL _automaticSync;
    unsigned int _currentStage;
    NSString *_currentDataclass;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _clientProgressCallback;

    NSMutableDictionary *_dataclassTimers;
    NSString *_currentStatus;
    ATAsset *_currentAsset;
}

+ (id)legacyDeviceSyncManager;

- (void)endTimer;
- (void)_endiTunesTimer;
- (void)_updatePurgeableStorageUsage;
- (void)_startAssetTransfersForDataclass:(id)arg1;
- (void)endReconcileTimerForDataclass:(id)arg1;
- (void)endPrepTimerForDataclass:(id)arg1;
- (void)_startTimerForDataclass:(id)arg1;
- (BOOL)_currentLinkIsWifiConnection;
- (void)_syncError:(id)arg1 localOrigin:(BOOL)arg2;
- (BOOL)_endSyncIfCompleted;
- (void)_reportLocalProgress;
- (void)_sendSyncAllowed;
- (void)_sendDiskUsageForDataClasses:(id)arg1;
- (void)_sendInstalledAssets;
- (void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)assetManager:(id)arg1 didUpdateAsset:(id)arg2 withProgress:(float)arg3;
- (void)assetManagerDidFinish:(id)arg1;
- (void)assetManager:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetManagerDidUpdate:(id)arg1;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)_startTimer;
- (void).cxx_destruct;
- (void)_reset;
- (id)init;

@end
