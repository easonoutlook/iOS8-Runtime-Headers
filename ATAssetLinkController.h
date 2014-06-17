/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMapTable, NSMutableOrderedSet;

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate> {
    NSMutableOrderedSet *_assetLinks;
    NSMutableOrderedSet *_assetQueue;
    NSMapTable *_assetsToLinks;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)removeAssetLink:(id)arg1;
- (void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
- (void)addAssetLink:(id)arg1;
- (void)cancelAsset:(id)arg1;
- (void)enqueueAssets:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
- (void)prioritizeAsset:(id)arg1;
- (void)enqueueAssets:(id)arg1;
- (void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3;
- (id)allAssetLinks;
- (void)_assetsDidChange;
- (BOOL)_canEnqueueAsset:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
