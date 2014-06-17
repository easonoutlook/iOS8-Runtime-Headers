/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSObject<OS_dispatch_source>, SKUIMediaComponent, NSMapTable, SKUIGalleryPageComponent, UIPageControl, <SKUIEmbeddedMediaViewDelegate>, UIPageViewController, SKUIResourceLoader, UITapGestureRecognizer;

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    <SKUIEmbeddedMediaViewDelegate> *_embeddedMediaDelegate;
    SKUIGalleryPageComponent *_galleryComponent;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(readonly) SKUIGalleryPageComponent * galleryComponent;
@property <SKUIEmbeddedMediaViewDelegate> * embeddedMediaDelegate;
@property(readonly) SKUIMediaComponent * selectedMediaComponent;


- (id)galleryComponent;
- (id)embeddedMediaDelegate;
- (void)_showNextPaneAnimated:(BOOL)arg1;
- (void)_finishPaneAnimation;
- (void)_stopCycleTimer;
- (void)_startCycleTimer;
- (id)_newViewControllerWithIndex:(int)arg1;
- (id)_selectedViewController;
- (void)setEmbeddedMediaDelegate:(id)arg1;
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;
- (void)performActionForSelectedComponentAnimated:(BOOL)arg1;
- (void)loadArtworkForChildComponent:(id)arg1 reason:(int)arg2 constraintWidth:(float)arg3;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)selectedMediaComponent;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)_tapAction:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

@end