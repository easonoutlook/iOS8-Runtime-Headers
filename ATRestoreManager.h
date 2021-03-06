/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class ATStoreAssetLink, MSVXPCTransaction, ATRestoreAssetLink, NSObject<OS_dispatch_queue>, ATAssetManager;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATAssetManagerObserver> {
    ATRestoreAssetLink *_restoreLink;
    ATStoreAssetLink *_storeLink;
    ATAssetManager *_assetManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
    MSVXPCTransaction *_xpcTransaction;
}


- (id)_dataClasses;
- (void)assetManager:(id)arg1 didFinishAsset:(id)arg2;
- (BOOL)restoreSessionActive;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void).cxx_destruct;
- (void)resume;
- (void)_start;
- (void)suspend;
- (id)init;

@end
