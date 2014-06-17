/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadPolicy, NSNumber, NSMutableDictionary, SSDownloadStatus, SSDownloadMetadata, SSXPCConnection, NSArray;

@interface SSDownload : SSEntity <SSXPCCoding> {
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

@property(readonly) long long persistentIdentifier;
@property(getter=isCancelable,readonly) BOOL cancelable;
@property(copy) SSDownloadPolicy * downloadPolicy;
@property(readonly) long long downloadSizeLimit;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) id downloadIdentifier;
@property(retain) NSArray * assets;
@property(copy) SSDownloadMetadata * metadata;
@property(retain) SSDownloadStatus * status;
@property(getter=_XPCConnection,readonly) SSXPCConnection * _XPCConnection;

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;

- (double)estimatedSecondsRemaining;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (id)_XPCConnection;
- (void)_resetStatus;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)arg1;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (id)networkConstraints;
- (id)backgroundNetworkingJobGroupName;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)copyXPCEncoding;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetLocalIVars;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
- (id)_errorWithXPCReply:(id)arg1;
- (id)downloadPolicy;
- (BOOL)isEligibleForRestore:(id*)arg1;
- (id)_errorWithData:(id)arg1;
- (BOOL)isCancelable;
- (id)initWithDownloadMetadata:(id)arg1;
- (void)setAssets:(id)arg1;
- (id)assets;
- (long long)persistentIdentifier;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)pause;
- (void)resume;
- (double)percentComplete;
- (BOOL)removeAsset:(id)arg1;
- (BOOL)isExternal;
- (void)dealloc;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id)arg2;
- (void)setDownloadPolicy:(id)arg1;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (long long)downloadSizeLimit;
- (id)assetsForType:(id)arg1;
- (id)downloadPhaseIdentifier;
- (id)downloadIdentifier;
- (id)failureError;
- (BOOL)addAsset:(id)arg1 forType:(id)arg2;

@end