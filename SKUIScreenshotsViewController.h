/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, UICollectionView, SKUIClientContext, SKUIVideoImageDataConsumer, <SKUIScreenshotsDelegate>, NSMutableArray, SKUIScreenshotDataConsumer, NSArray;

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    SKUIScreenshotDataConsumer *_dataConsumer;
    <SKUIScreenshotsDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    NSArray *_screenshots;
    NSMutableArray *_screenshotImages;
    NSMutableArray *_screenshotRawImages;
    struct CGSize { 
        float width; 
        float height; 
    } _screenshotMaxSize;
    SKUIVideoImageDataConsumer *_trailerConsumer;
    NSArray *_trailers;
    NSMutableArray *_trailerImages;
}

@property(readonly) SKUIClientContext * clientContext;
@property <SKUIScreenshotsDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;


- (void)_setTrailerImage:(id)arg1 forIndex:(int)arg2;
- (void)_setImage:(id)arg1 forIndex:(int)arg2;
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(int)arg2;
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(int)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(int)arg2 size:(struct CGSize { float x1; float x2; }*)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(int)arg2;
- (int)numberOfItemsInSlideshowViewController:(id)arg1;
- (id)clientContext;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;

@end
