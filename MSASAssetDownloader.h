/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, <MSASAssetDownloaderDelegate>, NSMutableArray, NSMutableDictionary;

@interface MSASAssetDownloader : MSASAssetTransferer  {
    BOOL _didEncounterNetworkConditionError;
    BOOL _isDownloadingThumbnails;
    BOOL _isWaitingForFirstDownloadEvent;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetToItemInFlightMap;
    NSMutableArray *_finishedAssets;
    NSString *_currentFocusAlbumGUID;
    NSString *_currentFocusAssetCollectionGUID;
    NSString *_objectGUID;
    NSString *_downloadBatchPerfGUID;
}

@property <MSASAssetDownloaderDelegate> * delegate;
@property int state;
@property(retain) NSMutableArray * itemsInFlight;
@property(retain) NSMutableDictionary * assetToItemInFlightMap;
@property(retain) NSMutableArray * finishedAssets;
@property BOOL didEncounterNetworkConditionError;
@property BOOL isDownloadingThumbnails;
@property(retain) NSString * currentFocusAlbumGUID;
@property(retain) NSString * currentFocusAssetCollectionGUID;
@property BOOL isWaitingForFirstDownloadEvent;
@property(retain) NSString * objectGUID;
@property(retain) NSString * downloadBatchPerfGUID;


- (void)setObjectGUID:(id)arg1;
- (id)objectGUID;
- (id)currentFocusAssetCollectionGUID;
- (id)currentFocusAlbumGUID;
- (BOOL)isDownloadingThumbnails;
- (void)setFinishedAssets:(id)arg1;
- (id)finishedAssets;
- (void)setAssetToItemInFlightMap:(id)arg1;
- (id)assetToItemInFlightMap;
- (id)_orphanedAssetError;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 error:(id)arg3;
- (BOOL)isWaitingForFirstDownloadEvent;
- (void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)_workQueueStopTrackingItem:(id)arg1;
- (void)workQueueUnregisterAssets:(id)arg1;
- (void)workQueueRegisterAssets:(id)arg1 completionBlock:(id)arg2;
- (void)setDownloadBatchPerfGUID:(id)arg1;
- (void)setIsDownloadingThumbnails:(BOOL)arg1;
- (void)setCurrentFocusAlbumGUID:(id)arg1;
- (void)setCurrentFocusAssetCollectionGUID:(id)arg1;
- (id)downloadBatchPerfGUID;
- (id)workQueueObjectGUID;
- (void)setIsWaitingForFirstDownloadEvent:(BOOL)arg1;
- (void)_workQueueGoIdle;
- (void)workQueueDownloadNextBatch;
- (void)setItemsInFlight:(id)arg1;
- (id)itemsInFlight;
- (void)workQueueCancel;
- (id)_pathForPersonID:(id)arg1;
- (BOOL)didEncounterNetworkConditionError;
- (void)setDidEncounterNetworkConditionError:(BOOL)arg1;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)didFinishPuttingAllAssets;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)registerAssets:(id)arg1 completionBlock:(id)arg2;
- (void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2;
- (void)unregisterAssets:(id)arg1;
- (void)workQueueRetryOutstandingActivities;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (int)state;

@end
