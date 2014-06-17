/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, UITableView, <PSSpecifierDataSource>, UIView, NSDictionary, UIPopoverController, NSArray, UIKeyboard, NSString, NSMutableDictionary, NSMutableArray, UIActionSheet;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol> {
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _reusesCells;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    UIView *_containerView;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _showingSetupController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    BOOL _swapAlertButtons;
    BOOL _keyboardWasVisible;
    UIKeyboard *_keyboard;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    BOOL _popupIsModal;
    BOOL _popupIsDismissing;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetWithKeyboard;
    NSString *_highlightItemName;
    BOOL _isVisible;
    <PSSpecifierDataSource> *_dataSource;
    BOOL _edgeToEdgeCells;
    NSDictionary *_pendingURLResourceDictionary;
    NSString *_specifierIDPendingPush;
}

@property BOOL forceSynchronousIconLoadForCreatedCells;
@property BOOL edgeToEdgeCells;
@property(retain) NSDictionary * pendingURLResourceDictionary;
@property(copy) NSString * specifierIDPendingPush;
@property(readonly) int observerType;

+ (BOOL)displaysButtonBar;

- (id)popupStylePopoverController;
- (void)showPINSheet:(id)arg1;
- (id)specifierIDPendingPush;
- (id)pendingURLResourceDictionary;
- (void)setEdgeToEdgeCells:(BOOL)arg1;
- (BOOL)forceSynchronousIconLoadForCreatedCells;
- (id)specifierDataSource;
- (void)_setNotShowingSetupController;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)selectRowForSpecifier:(id)arg1;
- (BOOL)handlePendingURL;
- (void)dismissPopover;
- (id)specifiersForIDs:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2;
- (void)createPrequeuedPSTableCells:(unsigned int)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)specifierID;
- (void)loseFocus;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeLastSpecifier;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3;
- (int)numberOfGroups;
- (BOOL)containsSpecifier:(id)arg1;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)setSpecifiers:(id)arg1;
- (int)observerType;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)_moveSpecifierAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)_performHighlightForSpecifierWithID:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
- (void)highlightSpecifierWithID:(id)arg1;
- (float)verticalContentOffset;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)handleURL:(id)arg1;
- (void)setSpecifierIDPendingPush:(id)arg1;
- (void)setPendingURLResourceDictionary:(id)arg1;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (void)showController:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (BOOL)performLoadActionForSpecifier:(id)arg1;
- (BOOL)performButtonActionForSpecifier:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationActionForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (void)returnPressedAtEnd;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(BOOL)arg2;
- (float)_getKeyboardIntersectionHeight;
- (void)_loadBundleControllers;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (id)findFirstVisibleResponder;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (id)cachedCellForSpecifier:(id)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (id)specifierAtIndex:(int)arg1;
- (id)_createGroupIndices:(id)arg1;
- (Class)tableViewClass;
- (BOOL)_isRegularWidth;
- (BOOL)edgeToEdgeCells;
- (void)_returnKeyPressed:(id)arg1;
- (void)_unloadBundleControllers;
- (void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(BOOL)arg2;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (int)rowsForGroup:(int)arg1;
- (BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (id)specifierForID:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (id)specifiersInGroup:(int)arg1;
- (void)createGroupIndices;
- (id)indexPathForIndex:(int)arg1;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3;
- (void)prepareSpecifiersMetadata;
- (int)indexOfSpecifier:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)setSpecifierID:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (void)setReusesCells:(BOOL)arg1;
- (void)setCachesCells:(BOOL)arg1;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)reloadSpecifier:(id)arg1;
- (void)clearCache;
- (int)indexForIndexPath:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)_keyboardDidHide:(id)arg1;
- (id)bundle;
- (id)table;
- (void)_setContentInset:(float)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)endUpdates;
- (void)beginUpdates;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)reload;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (int)indexOfGroup:(int)arg1;

@end
