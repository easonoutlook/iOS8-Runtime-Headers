/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, ABDatePickerViewController, ABPersonTableView, ABMultiCellContentView_RelatedName, <ABCardContentProvider>, NSString, ABPersonTableViewDataSource, <ABStyleProvider>, UITableView, UIPopoverController, UIViewController, UIBarButtonItem, <ABUnknownPersonViewControllerDelegate>, <ABPersonEditDelegate>, NSArray, ABUIPerson, NSIndexPath, <ABPersonViewControllerPrivateDelegate>, ABPeoplePickerNavigationController, ABPersonTableViewLinkingDelegate;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration> {
    UIViewController *_viewController;
    <ABPersonEditDelegate> *_editDelegate;
    struct __CFArray { } *_displayedProperties;
    ABDatePickerViewController *_datePickerViewController;
    BOOL _isAnimatingDatePickerInputView;
    BOOL _willPresentDatePickerViewController;
    id _activeDialog;
    id _deletionDelegate;
    id _actionSheetDelegate;
    BOOL _allowsSettingAsPreferredCardForName;
    BOOL _animatedRight;
    BOOL _automaticallySetEditing;
    BOOL _allowsAddingToAddressBook;
    BOOL _showsPeoplePickerCancelButton;
    BOOL _savesNewContactOnSuspend;
    void *_addressBook;
    struct __CFDictionary { } *_valueByProperty;
    <ABStyleProvider> *_styleProvider;
    <ABCardContentProvider> *_cardContentProvider;
    BOOL _isOverridingCardContentProvider;
    UIView *_cardContentProviderHeaderView;
    int _selectedCardContentIndex;
    BOOL _isLocation;
    NSString *_addToPersonButtonTitle;
    UIBarButtonItem *_reusableCancelButton;
    ABPersonTableView *_controllerTableView;
    unsigned int _modelDatabaseLocalChangeCancellationCount;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForRelatedNames;
    ABMultiCellContentView_RelatedName *_relatedPersonCell;
    BOOL _disablePopoverUpdates;
    int _favoritesListChangeNotificationCount;
    BOOL _hasAddedUnknownPersonActions;
    ABUIPerson *_displayedPerson;
    NSArray *_displayedPeople;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
}

@property(readonly) UIViewController * viewController;
@property <ABPersonEditDelegate> * editDelegate;
@property BOOL automaticallySetEditing;
@property void* addressBook;
@property(readonly) void* existingAddressBook;
@property(retain) ABUIPerson * displayedPerson;
@property(readonly) NSArray * displayedPeople;
@property(copy) NSArray * displayedProperties;
@property(getter=isReadonly,readonly) BOOL readonly;
@property BOOL showsPeoplePickerCancelButton;
@property(readonly) UIBarButtonItem * reusableCancelButton;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsAddingToAddressBook;
@property BOOL isLocation;
@property(retain) <ABStyleProvider> * styleProvider;
@property BOOL savesNewContactOnSuspend;
@property BOOL disablePopoverUpdates;
@property ABPersonTableViewDataSource * dataSource;
@property ABPersonTableViewLinkingDelegate * linkingDelegate;
@property(readonly) UITableView * controllerTableView;
@property(readonly) BOOL hasPopoverController;
@property(readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate;
@property(readonly) <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(copy) NSString * addToPersonButtonTitle;
@property(retain) NSIndexPath * popoverCellIndexPath;
@property(retain) NSIndexPath * popoverViewInCellIndexPath;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void*)addressBook;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewController;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)dataSource;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(id)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)dealloc;
- (void)setAddToPersonButtonTitle:(id)arg1;
- (id)addToPersonButtonTitle;
- (void)setIsLocation:(BOOL)arg1;
- (BOOL)automaticallySetEditing;
- (void)loadUnknownViewWithPerson:(id)arg1 allowActions:(BOOL)arg2;
- (void)pushViewController:(id)arg1;
- (id)viewToRepresentPopover:(id)arg1;
- (void)dismissPickerViewController:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (id)popoverViewInCellIndexPath;
- (id)popoverCellIndexPath;
- (BOOL)_updatePeopleDataForExternalChangeWithFullReload:(BOOL)arg1;
- (void)_attemptSave;
- (void)_dismissDatePickerInputViewAnimated:(BOOL)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (void)setPopoverCellIndexPath:(id)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)shouldAnimateDatePickerInputView;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)removeSelectedPerson;
- (void)performActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2;
- (void)performInstantMessageActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performSocialProfileActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (id)_chatURLWithPropertyValue:(id)arg1;
- (void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)showWeiboSheetForPropertyValue:(id)arg1;
- (void)showTweetSheetForPropertyValue:(id)arg1;
- (void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)openSocialProfile:(id)arg1;
- (void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)shouldShowAddToExistingContact;
- (void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2;
- (void)_mergeIntoDisplayedPerson:(void*)arg1;
- (BOOL)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3;
- (void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(BOOL)arg3;
- (id)_preparePeoplePicker;
- (id)_newContactViewControllerForAddToContacts;
- (void)_addProperties:(id)arg1 toPerson:(id)arg2;
- (void)removeDisplayedPeople;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (void)setDatePickerViewController:(id)arg1;
- (void)updateLinkBarButtonItem;
- (id)prepareViewWithPerson:(id)arg1;
- (void)addUnknownPersonActionsIfNeeded;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)contentSwitchingTabsTapped:(id)arg1;
- (void)notifyScrollViewDidLoad;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)_updateDisplayedPeopleForcingReloadData:(BOOL)arg1;
- (void)setDisplayedPeople:(id)arg1 forceReload:(BOOL)arg2;
- (void)updateAllowsSettingAsPreferredCardForName;
- (BOOL)_shouldHideContentSwitchingTabsWhenEditing:(BOOL)arg1;
- (id)personContainerView;
- (id)_personToUseForAddressBook;
- (void)_setCardContentProvider:(id)arg1;
- (void)_updateBackgroundForCardContentProvider;
- (void)showSelectedContentView;
- (void)updateContentSwitchingTabs;
- (void)_updateCardContentProviderHeaderViewForEditing:(BOOL)arg1;
- (void)_favoritesListChanged:(id)arg1;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)updateAllDataForExternalChange;
- (void)updateTableDataForExternalChange;
- (BOOL)updatePeopleDataForExternalChange;
- (void)ab_updatePopoverSize;
- (void)updateDisplayedPeopleAndReloadData;
- (void*)existingAddressBook;
- (void)didDismissModalViewController;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (void)setCardContentProvider:(id)arg1;
- (BOOL)allowsSettingAsPreferredCardForName;
- (id)controllerTableView;
- (BOOL)isLocation;
- (id)displayedPeople;
- (id)unknownPersonViewDelegate;
- (id)personViewDelegate;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (void)_updateDisplayedPeople;
- (void)reloadNameData;
- (void)setLinkingDelegate:(id)arg1;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (BOOL)personTableViewDataSourceIsInPopover:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(BOOL)arg3;
- (float)personTableViewDataSourceHeaderPadding:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowHeader:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(BOOL)arg2;
- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
- (void)personTableViewDataSourceDidReloadData:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(int)arg2;
- (id)editDelegate;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (id)viewForActionSheet;
- (void)setActiveDialog:(id)arg1;
- (void)setDisablePopoverUpdates:(BOOL)arg1;
- (BOOL)disablePopoverUpdates;
- (id)viewControllerToPresentModal;
- (BOOL)hasPopoverController;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (void)setEditDelegate:(id)arg1;
- (id)linkingDelegate;
- (void)loadViewWithPerson:(id)arg1 allowDeletion:(BOOL)arg2 allowActions:(BOOL)arg3;
- (id)reusableCancelButton;
- (void)ignoreNextLocalChange;
- (void)updateEditButton;
- (void)setShowsPeoplePickerCancelButton:(BOOL)arg1;
- (BOOL)showsPeoplePickerCancelButton;
- (void)setAutomaticallySetEditing:(BOOL)arg1;
- (id)initWithViewController:(id)arg1 style:(int)arg2;
- (BOOL)savesNewContactOnSuspend;
- (id)newPersonViewDelegate;
- (BOOL)shouldBeRemovedFromNavigationStack;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)imageUpdatedForPerson:(void*)arg1;
- (void)personWasDeleted;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (id)displayedPerson;
- (float)ab_heightToFitForViewInPopoverView;
- (id)displayedProperties;
- (BOOL)allowsAddingToAddressBook;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)isReadonly;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;

@end