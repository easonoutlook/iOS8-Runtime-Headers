/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHImageManagerRequest, NSObject<OS_dispatch_group>, <_PLImageLoadingAsset>, PLCPLDownloadContext;

@interface PHImageManagerRequest : NSObject  {
    BOOL _cancelled;
    BOOL _CPLDownloadDegraded;
    unsigned int _requestID;
    <_PLImageLoadingAsset> *_asset;
    id _domain;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;

    PLCPLDownloadContext *_CPLDownloadContext;
    NSObject<OS_dispatch_group> *_CPLDownloadWaitGroup;
    unsigned int _registrationRefCount;
    PHImageManagerRequest *_nextRequest;
}

@property(readonly) BOOL isVideo;
@property(readonly) unsigned int requestID;
@property(readonly) <_PLImageLoadingAsset> * asset;
@property(readonly) id domain;
@property(copy) id cancellationHandler;
@property BOOL CPLDownloadDegraded;
@property(retain) PLCPLDownloadContext * CPLDownloadContext;
@property(retain) NSObject<OS_dispatch_group> * CPLDownloadWaitGroup;
@property(readonly) unsigned int registrationRefCount;
@property(retain) PHImageManagerRequest * nextRequest;

+ (void)initialize;

- (BOOL)isVideo;
- (id)asset;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id)cancellationHandler;
- (void)setCancellationHandler:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (id)domain;
- (void)setNextRequest:(id)arg1;
- (unsigned int)registrationRefCount;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (id)CPLDownloadWaitGroup;
- (void)setCPLDownloadContext:(id)arg1;
- (id)CPLDownloadContext;
- (void)setCPLDownloadDegraded:(BOOL)arg1;
- (BOOL)CPLDownloadDegraded;
- (void)clearResultHandler;
- (int)decrementRegistrationRefCount;
- (int)incrementRegistrationRefCount;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (unsigned int)requestID;
- (id)nextRequest;
- (id)init;

@end
