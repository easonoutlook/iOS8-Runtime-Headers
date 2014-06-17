/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject> {
}

@property(readonly) CPLPlatformObject * platformObject;


- (void)getChangeBatchWithCompletionHandler:(id)arg1;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (id)_sessionLogDomain;
- (id)init;

@end
