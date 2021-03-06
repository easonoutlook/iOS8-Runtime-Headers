/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMembersFilteredDataSource, UITableViewController, <ABMembersControllerSearchCompletionDelegate>, ABMembersDataSource, UITableView, UISearchController, <ABStyleProvider>, UIViewController, _UINavigationControllerPalette, NSString, <ABMembersControllerDelegate>, NSOperationQueue, NSIndexPath;

@interface ABMembersController : ABContentController <UISearchControllerDelegate, UISearchResultsUpdating, ABMembersDataSourceDelegate, UITextFieldDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
    ABMembersDataSource *_membersDataSource;
    ABMembersFilteredDataSource *_searchDataSource;
    <ABStyleProvider> *_styleProvider;
    unsigned int _cellsCreated;
    unsigned int _memberCount;
    UITableView *_tableView;
    UISearchController *_searchController;
    UITableViewController *_searchResultsController;
    UIViewController *_parentViewController;
    unsigned int _searchSequenceNumber;
    NSOperationQueue *_operationQueue;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    BOOL _showingCardFromSearch;
    BOOL _shouldDeactivateSearch;
    NSIndexPath *_selectedIndexPath;
    BOOL _searchEnabled;
    BOOL _needToClearOldResults;
    int _initiallyVisibleRow;
    <ABMembersControllerSearchCompletionDelegate> *_searchCompletionDelegate;
    _UINavigationControllerPalette *_searchPalette;
}

@property(getter=isSearchEnabled) BOOL searchEnabled;
@property(retain) <ABStyleProvider> * styleProvider;
@property <ABMembersControllerDelegate> * membersControllerDelegate;
@property(readonly) UITableViewController * searchResultsController;
@property <ABMembersControllerSearchCompletionDelegate> * searchCompletionDelegate;
@property(readonly) BOOL isServerSearchGroup;
@property(readonly) NSString * currentSearchText;
@property(retain) _UINavigationControllerPalette * searchPalette;

+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void*)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned int*)arg5;

- (id)initWithAddressBook:(void*)arg1;
- (void)_reloadFontSizes;
- (id)operationQueue;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (id)searchPalette;
- (void)setSearchPalette:(id)arg1;
- (BOOL)_shouldDeactivateOnCancelButtonClicked;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)tableView;
- (id)searchResultsController;
- (BOOL)shouldShowIndex;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)contentView;
- (void)reload;
- (void)setAddressBook:(void*)arg1;
- (void)dealloc;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)setSearchCompletionDelegate:(id)arg1;
- (id)searchCompletionDelegate;
- (void)setSearchEnabled:(BOOL)arg1;
- (BOOL)isSearchEnabled;
- (void)_deselectAllRowsWithAnimation;
- (void)displayedMembersListChanged;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)makeMainTableViewVisible;
- (id)_localizedStringForError:(int)arg1;
- (id)__searchController;
- (id)__searchBar;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (id)selectedCell;
- (void)setCellsCreated:(unsigned int)arg1;
- (unsigned int)cellsCreated;
- (void)scrollMemberToTop:(void*)arg1;
- (void)stopScrolling;
- (void)setMembersControllerDelegate:(id)arg1;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)_updateCountString;
- (BOOL)selectAndScrollMemberVisible:(void*)arg1;
- (void*)_selectedPerson;
- (void)_searchForWords:(id)arg1;
- (id)currentSearchText;
- (void)reloadSearchTableView;
- (BOOL)isServerSearchGroup;
- (void)_cancelGALSearch;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (BOOL)shouldShowGroups;
- (id)currentTableView;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_scrollIndexToTop:(int)arg1;
- (id)tableViewPathToMember:(void*)arg1;
- (int)globalIndexOfMember:(void*)arg1;
- (id)searchDataSource;
- (id)membersDataSource;
- (void)_updateRowsHeights;
- (id)contactsFilter;
- (id)membersControllerDelegate;
- (BOOL)isSearching;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
