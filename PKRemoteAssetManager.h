/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURLSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface PKRemoteAssetManager : NSObject  {
    NSURL *_directoryURL;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
}


- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (void)cancelDownloads;
- (void)_flushBundleCaches;
- (BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3;
- (id)itemWithRelativePath:(id)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(id)arg3;
- (BOOL)assetExistsLocally:(id)arg1;
- (id)remoteAssetManifests;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (void)dealloc;

@end
