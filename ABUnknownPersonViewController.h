/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIFont, ABPersonTableViewSharingDelegate, <ABStyleProvider>, UIView, NSArray, <ABUnknownPersonViewControllerDelegate>, ABUIPerson, ABPersonTableViewDataSource, NSString, ABPersonViewControllerHelper, ABPersonTableViewActionsDelegate;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
    id _helper;
    id _reserved;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
}

@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property BOOL allowsConferencing;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsOnlyFaceTimeActions;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL allowsSharing;
@property(readonly) BOOL canShareContact;
@property BOOL isLocation;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property BOOL savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) ABUIPerson * displayedUIPerson;
@property(copy) NSArray * displayedProperties;
@property(copy) NSString * attribution;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void*)addressBook;
- (void)setAttribution:(id)arg1;
- (id)attribution;
- (void)setPrimaryProperty:(int)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (id)initWithVCardData:(id)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)updateNavigationButtons;
- (void)dismissAnimated:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_allowsAutorotation;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (id)message;
- (void)loadView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (id)dataSource;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)dealloc;
- (id)init;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)_unselectTable;
- (void)_showCardViewerForIndex:(int)arg1;
- (id)_viewControllerForCardAtIndex:(int)arg1;
- (BOOL)isShowingMultipleVCards;
- (void)_addUnmergedRecords;
- (id)_unmergedAlertSheet;
- (void)_addToExistingContacts;
- (void)_createNewContacts;
- (id)_alertSheet;
- (void)_showUnmergedContactsAlert;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (id)_vCardProperties;
- (id)_forwarder;
- (id)_vCardTable;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)_unmergedRecords;
- (id)_vCards;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (void)setIsLocation:(BOOL)arg1;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (BOOL)shareMessageBodyIsHTML;
- (BOOL)canShareContact;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (BOOL)isLocation;
- (id)unknownPersonViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (id)sharingDelegate;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (BOOL)allowsSendingTextMessage;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)reloadImageData;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (id)helper;
- (BOOL)savesNewContactOnSuspend;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)accessChanged;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void*)displayedPerson;
- (id)actionsDelegate;
- (void)setCustomAppearanceProvider:(id)arg1;
- (id)newActionButton;
- (float)ab_heightToFitForViewInPopoverView;
- (id)displayedProperties;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsSharing;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setAlternateName:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (BOOL)allowsOnlyFaceTimeActions;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (BOOL)allowsOnlyPhoneActions;
- (int)abViewControllerType;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)alternateName;
- (id)_mf_initWithEmailAddress:(id)arg1;
- (id)_mf_initWithRecentGroup:(id)arg1;

@end
