/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, <SKUILayoutCacheDelegate>;

@interface SKUILayoutCache : NSObject  {
    NSMutableArray *_batchedRequests;
    <SKUILayoutCacheDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property <SKUILayoutCacheDelegate> * delegate;


- (id)layoutForIndex:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })addLayoutRequests:(id)arg1;
- (void)_addLayoutBatch:(id)arg1;
- (void)_populateCache;
- (void)_layoutRequestsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)layoutForIndex:(int)arg1 forced:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })populateCacheWithLayoutRequests:(id)arg1;
- (void)commitLayoutRequests;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
