/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIArtworkRequestDelegate>, NSURL, SSVURLDataConsumer;

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {
    BOOL _cacheableByURL;
    SSVURLDataConsumer *_dataConsumer;
    <SKUIArtworkRequestDelegate> *_delegate;
    NSURL *_url;
}

@property(retain) SSVURLDataConsumer * dataConsumer;
@property <SKUIArtworkRequestDelegate> * delegate;
@property(getter=isCacheableByURL) BOOL cacheableByURL;
@property(copy) NSURL * URL;


- (void)setCacheableByURL:(BOOL)arg1;
- (id)URLCacheKey;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (BOOL)cachesInMemory;
- (BOOL)isCacheableByURL;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;
- (void).cxx_destruct;
- (void)setURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)URL;
- (void)setDelegate:(id)arg1;

@end
