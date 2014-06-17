/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation> {
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;

- (void)getChangeBatchWithCompletionHandler:(id)arg1;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;

@end