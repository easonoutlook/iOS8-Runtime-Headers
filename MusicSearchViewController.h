/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MPHSearchViewControllerDelegate>, UILabel, SKUICircleProgressIndicator, UITableView, UIButton, UIView, NSMapTable, NSArray, UITapGestureRecognizer, NSString, NSOperationQueue, NSMutableArray;

@interface MusicSearchViewController : UIViewController <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicatorView;
    BOOL _canShowContinueSearch;
    NSMapTable *_calculatedHeightByTableViewRelatedClass;
    UIButton *_continueSearchButton;
    BOOL _isSearchInProgress;
    UILabel *_loadingLabel;
    NSMutableArray *_nonEmptySearchDataSources;
    UILabel *_noResultsLabel;
    NSArray *_searchDataSources;
    NSOperationQueue *_searchOperationQueue;
    UIView *_tableViewBackgroundView;
    UIView *_tableViewDimmingView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    <MPHSearchViewControllerDelegate> *_delegate;
    NSString *_searchTerm;
    UITableView *_tableView;
}

@property <MPHSearchViewControllerDelegate> * delegate;
@property(readonly) NSString * searchTerm;
@property(readonly) UITableView * tableView;


- (void)_updateVisibleHeadersState;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_searchSectionTitleForSearchDataSource:(id)arg1;
- (float)_heightForCellConfigurationClass:(Class)arg1 inTableView:(id)arg2;
- (void)_performDefaultActionForSearchDataSource:(id)arg1 entity:(id)arg2;
- (Class)_searchCellConfigurationClassForSearchDataSource:(id)arg1;
- (void)_searchDataSourceDidInvalidateNotification:(id)arg1;
- (id)_newSearchDataSources;
- (void)_updateResultsForSearchTerm:(id)arg1;
- (BOOL)_isSearchInProgress;
- (void)_tapGestureRecognizerAction:(id)arg1;
- (void)_continueSearchAction:(id)arg1;
- (void)_storeRestrictionsDidChangeNotification:(id)arg1;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (void)_reloadData;
- (void).cxx_destruct;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (id)tableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)searchTerm;

@end