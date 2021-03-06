/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSMutableDictionary, NSString, NSDictionary, NSURL;

@interface PKRemoteAssetManifest : NSObject  {
    NSURL *_fileURL;
    NSMutableDictionary *_remoteAssets;
    NSString *_name;
}

@property(readonly) NSURL * fileURL;
@property(readonly) NSString * name;
@property(readonly) NSDictionary * remoteAssets;


- (id)deviceSpecificAssetForScreenScale:(float)arg1 suffix:(id)arg2;
- (id)remoteAssets;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3;
- (id)deviceSpecificAsset;
- (id)fileURL;
- (id)name;
- (void)dealloc;

@end
