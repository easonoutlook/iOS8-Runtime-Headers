/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSMutableSet, <MSASAssetUploaderDelegate>, NSMutableArray, NSMutableDictionary;

@interface MSASAssetUploader : MSASAssetTransferer  {
    BOOL _didEncounterNetworkConditionError;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;
    NSMutableDictionary *_assetToAssetCollectionMap;
    NSMutableArray *_finishedAssetCollections;
    NSMutableSet *_assetCollectionsWithAuthorizationError;
    NSMutableDictionary *_assetCollectionGUIDToRequestorContext;
}

@property <MSASAssetUploaderDelegate> * delegate;
@property int state;
@property(retain) NSMutableArray * itemsInFlight;
@property(retain) NSMutableDictionary * assetCollectionsToItemInFlightMap;
@property(retain) NSMutableDictionary * assetToAssetCollectionMap;
@property(retain) NSMutableArray * finishedAssetCollections;
@property(retain) NSMutableSet * assetCollectionsWithAuthorizationError;
@property BOOL didEncounterNetworkConditionError;
@property(retain) NSMutableDictionary * assetCollectionGUIDToRequestorContext;


- (void)setAssetCollectionGUIDToRequestorContext:(id)arg1;
- (id)assetCollectionGUIDToRequestorContext;
- (void)setAssetCollectionsWithAuthorizationError:(id)arg1;
- (id)assetCollectionsWithAuthorizationError;
- (void)setFinishedAssetCollections:(id)arg1;
- (id)finishedAssetCollections;
- (void)setAssetToAssetCollectionMap:(id)arg1;
- (id)assetToAssetCollectionMap;
- (void)setAssetCollectionsToItemInFlightMap:(id)arg1;
- (id)assetCollectionsToItemInFlightMap;
- (void)setItemsInFlight:(id)arg1;
- (id)itemsInFlight;
- (void)workQueueCancel;
- (id)_pathForPersonID:(id)arg1;
- (BOOL)didEncounterNetworkConditionError;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)workQueueCancelAssetCollections:(id)arg1;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned int)arg2 results:(id)arg3 completionBlock:(id)arg4;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned int)arg2 completionBlock:(id)arg3;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (id)_orphanedAssetCollectionError;
- (void)setDidEncounterNetworkConditionError:(BOOL)arg1;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)_workQueueStop;
- (void)workQueueGoIdle;
- (void)workQueueUploadNextBatch;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)didFinishPuttingAllAssets;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)registerAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)cancelAssetCollections:(id)arg1;
- (void)unregisterAssetCollections:(id)arg1;
- (void)workQueueRetryOutstandingActivities;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (int)state;

@end