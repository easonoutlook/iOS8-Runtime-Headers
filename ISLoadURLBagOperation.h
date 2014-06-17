/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLBag, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
}

@property(readonly) SSURLBagContext * context;
@property(readonly) ISURLBag * URLBag;


- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (id)uniqueKey;
- (id)URLBag;
- (id)initWithBagContext:(id)arg1;
- (void)run;
- (id)context;
- (void)dealloc;
- (id)init;

@end