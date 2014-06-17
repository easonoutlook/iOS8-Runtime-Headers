/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEmbeddedMediaView, SKUIMediaComponent, SKUIArtwork;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {
    SKUIArtwork *_artwork;
    unsigned int _artworkRequestID;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

@property(retain) SKUIMediaComponent * pageComponent;


- (void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2;
- (void)_loadImageWithReason:(int)arg1;
- (int)defaultPinStyle;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)setSectionIndex:(int)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
