/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUImageManager;

@interface PUFeedPreheatManager : NSObject  {
    PUImageManager *_imageManager;
}

@property(readonly) PUImageManager * imageManager;


- (void).cxx_destruct;
- (void)didUpdatePreheatedAssetsForIndexPath:(id)arg1 elementKind:(id)arg2;
- (void)invalidateIndexPaths;
- (void)didPerformUpdateRequest;
- (void)preheatAsset:(id)arg1 fastImageFormat:(int)arg2 qualityImageFormat:(int)arg3;
- (BOOL)shouldUpdatePreheatedAssetsForIndexPath:(id)arg1 elementKind:(id)arg2;
- (void)willPerformUpdateRequest;
- (id)imageManager;
- (id)initWithImageManager:(id)arg1;

@end
