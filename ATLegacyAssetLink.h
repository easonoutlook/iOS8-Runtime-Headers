/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class ATLegacyMessageLink, NSMutableSet, <ATAssetLinkDelegate>, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {
    NSMutableSet *_unqueuedAssets;
    NSMutableDictionary *_enqueuedAssetsByDataClass;
    ATLegacyMessageLink *_messageLink;
    BOOL _open;
    <ATAssetLinkDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(getter=isOpen,readonly) BOOL open;
@property <ATAssetLinkDelegate> * delegate;


- (BOOL)open;
- (BOOL)isOpen;
- (id)_assetManifestForDataclasses:(id)arg1;
- (id)_assetForDataClass:(id)arg1 identifier:(id)arg2;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_enqueueAndRequestAssets;
- (void)_handleFileProgressMessage:(id)arg1;
- (void)_handleFileErrorMessage:(id)arg1;
- (void)_handleFileCompleteMessage:(id)arg1;
- (id)initWithMessageLink:(id)arg1;
- (BOOL)linkIsReady;
- (unsigned int)maximumBatchSize;
- (void)prioritizeAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (BOOL)canEnqueueAsset:(id)arg1;
- (BOOL)enqueueAssets:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)priority;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
