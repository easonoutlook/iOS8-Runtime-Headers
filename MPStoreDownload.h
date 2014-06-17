/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, SSDownload, NSObject<OS_dispatch_queue>, SSPurchaseResponse, NSDictionary, NSString, SSPurchase;

@interface MPStoreDownload : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    BOOL _canceled;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    int _type;
}

@property(readonly) NSDictionary * attributes;
@property(readonly) long long bytesDownloaded;
@property(readonly) long long bytesTotal;
@property(getter=isCanceled,readonly) BOOL canceled;
@property(readonly) long long downloadIdentifier;
@property(readonly) long long downloadSizeLimit;
@property(readonly) NSError * failureError;
@property(getter=isFinished,readonly) BOOL finished;
@property(getter=isPurchasing,readonly) BOOL purchasing;
@property(getter=isPaused,readonly) BOOL paused;
@property(readonly) unsigned long long libraryItemIdentifier;
@property(readonly) double percentComplete;
@property(readonly) NSString * phaseIdentifier;
@property(readonly) NSError * purchaseError;
@property(getter=isRestore,readonly) BOOL restore;
@property(readonly) long long storeItemIdentifier;
@property(readonly) int type;

+ (id)storeDownloadForCompletionOffering:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)_storeDownloadForCompletionOffer:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 URLBagKeyOverride:(id)arg5;
+ (id)_storeDownloadForContext:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForContexts:(id)arg1 type:(int)arg2 attributes:(id)arg3;

- (BOOL)isPaused;
- (BOOL)isCanceled;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)attributes;
- (int)type;
- (double)percentComplete;
- (id)description;
- (void)_setSSDownload:(id)arg1;
- (void)_setCanceled:(BOOL)arg1;
- (long long)storeItemIdentifier;
- (id)purchaseError;
- (unsigned long long)libraryItemIdentifier;
- (BOOL)isRestore;
- (BOOL)isPurchasing;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (BOOL)_isCanceled;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)_SSDownload;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)initWithType:(int)arg1 attributes:(id)arg2;
- (id)phaseIdentifier;
- (long long)downloadSizeLimit;
- (id)assetsForType:(id)arg1;
- (long long)downloadIdentifier;
- (id)failureError;

@end
