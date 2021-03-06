/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAssetResourceLoaderDelegate>, AVAssetResourceLoaderInternal, NSObject<OS_dispatch_queue>;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {
    AVAssetResourceLoaderInternal *_resourceLoader;
}

@property(readonly) <AVAssetResourceLoaderDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;


- (void)cancelLoading;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)asset;
- (id)initWithAsset:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)cachedContentInformationForURL:(id)arg1;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (void)_rejectChallenge:(id)arg1 withError:(id)arg2;
- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(BOOL)arg3 key:(id)arg4 fallbackHandler:(id)arg5;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(id)arg2;
- (id)stateQueue;
- (void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id)arg3;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(id)arg4;
- (void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id)arg3;
- (id)_weakReference;

@end
