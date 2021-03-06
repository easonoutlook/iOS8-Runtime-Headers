/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredCAMCameraRollSpec : CAMCameraRollSpec  {
    BOOL _isPad;
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_loader;
}

@property(retain) CAMCameraRollSpec * spec;
@property(retain) DeferredFrameworkLoader * loader;
@property BOOL isPad;


- (BOOL)isPad;
- (id)loader;
- (void)setIsPad:(BOOL)arg1;
- (void)ensureCAMCameraRollSpec;
- (void)setLoader:(id)arg1;
- (id)initWithDeferredLoader:(id)arg1 isPad:(BOOL)arg2;
- (void).cxx_destruct;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)prepareAlbumViewControllerForReuse:(id)arg1 withAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (id)newAlbumNavigationControllerForAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (void)dealloc;

@end
