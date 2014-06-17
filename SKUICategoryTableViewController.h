/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL, NSArray, SKUICategoryArtworkLoader, <SKUICategoryTableViewControllerDelegate>, SKUIClientContext, SKUICategory;

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {
    SKUICategoryArtworkLoader *_artworkLoader;
    SKUICategory *_category;
    SKUIClientContext *_clientContext;
    <SKUICategoryTableViewControllerDelegate> *_delegate;
    NSArray *_metricsLocations;
    int _numberOfHiddenRows;
    NSURL *_selectedURL;
    NSURL *_defaultURL;
    BOOL _isRoot;
    BOOL _childrenHaveArtwork;
}

@property(retain) SKUICategoryArtworkLoader * artworkLoader;
@property(retain) SKUICategory * category;
@property(retain) SKUIClientContext * clientContext;
@property <SKUICategoryTableViewControllerDelegate> * delegate;
@property(copy) NSArray * metricsLocations;
@property int numberOfHiddenRows;
@property(retain) NSURL * selectedURL;
@property(retain) NSURL * defaultURL;
@property(getter=isRoot) BOOL root;


- (id)selectedURL;
- (int)numberOfHiddenRows;
- (id)metricsLocations;
- (id)defaultURL;
- (void)setNumberOfHiddenRows:(int)arg1;
- (void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3;
- (int)_metricsLocationPostionForIndexPath:(id)arg1;
- (void)setMetricsLocations:(id)arg1;
- (id)_metricsLocationsToPushIndexPath:(id)arg1;
- (void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)_categoryAtIndexPath:(id)arg1;
- (void)setDefaultURL:(id)arg1;
- (void)setSelectedURL:(id)arg1;
- (void)setArtworkLoader:(id)arg1;
- (id)artworkLoader;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (void)setRoot:(BOOL)arg1;
- (BOOL)isRoot;
- (void).cxx_destruct;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_doneButtonAction:(id)arg1;

@end
