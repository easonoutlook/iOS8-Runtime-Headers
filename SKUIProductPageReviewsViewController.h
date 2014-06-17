/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStarRatingQueue, NSMutableIndexSet, SSVLoadURLOperation, SKUILayoutCache, <SKUIProductPageChildViewControllerDelegate>, SKUIFacebookLikeStatus, UIScrollView, SKUIClientContext, SKUIReviewsFacebookViewController, SKUIProductPage, SKUIReviewsHistogramViewController, SKUIProductPageTableView, SKUIProductPageHeaderViewController, SKUIIPadCustomerReviewsHeaderView, SKComposeReviewViewController, NSOperationQueue, SKUIReviewList;

@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController> {
    SKUIClientContext *_clientContext;
    SKComposeReviewViewController *_composeViewController;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    BOOL _isPad;
    SKUILayoutCache *_layoutCache;
    int _loadedPageCount;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    int _sortOrder;
    BOOL _showAllVersions;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
    BOOL _askPermission;
}

@property(readonly) SKUIProductPage * productPage;
@property(retain) SKUIClientContext * clientContext;
@property(copy) SKUIFacebookLikeStatus * facebookLikeStatus;
@property(readonly) NSOperationQueue * operationQueue;
@property BOOL askPermission;
@property(readonly) UIScrollView * scrollView;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;


- (void)reviewsFacebookViewControllerDidChange:(id)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (id)_bottomBorderColorForScheme:(id)arg1;
- (void)_sortSelectionAction:(id)arg1;
- (void)_setReviewListWithResponse:(id)arg1 error:(id)arg2;
- (void)_addReviewsFromResponse:(id)arg1 error:(id)arg2;
- (void)_writeAReviewAction:(id)arg1;
- (void)_starRatingAction:(id)arg1;
- (void)_versionSelectionAction:(id)arg1;
- (void)_appSupportAction:(id)arg1;
- (id)_textLayoutRequestWithText:(id)arg1;
- (void)_resetPersonalStarRating;
- (id)_reviewsHeaderView;
- (id)_histogramViewController;
- (BOOL)_shouldShowLoadMoreCell;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint { float x1; float x2; })arg1;
- (float)_defaultPageWidth;
- (id)_urlStringWithPageNumber:(int)arg1;
- (id)facebookLikeStatus;
- (void)setFacebookLikeStatus:(id)arg1;
- (BOOL)askPermission;
- (void)setHeaderViewController:(id)arg1;
- (id)headerViewController;
- (void)_addHeaderView;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)productPage;
- (id)clientContext;
- (id)initWithProductPage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setAskPermission:(BOOL)arg1;
- (id)operationQueue;
- (void)_reloadData;
- (void).cxx_destruct;
- (id)_tableView;
- (id)scrollView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end