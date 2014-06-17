/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSMutableDictionary, <MSPublishStorageProtocolDelegate>;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
    <MSPublishStorageProtocolDelegate> *_delegate;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
    unsigned int *_itemFlags;
    int _itemsInFlight;
}

@property <MSPublishStorageProtocolDelegate> * delegate;


- (void)_putItemsFailure;
- (void)_requestCompleted;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1;
- (void).cxx_destruct;
- (void)deactivate;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
