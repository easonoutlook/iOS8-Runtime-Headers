/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMembersDataSource, ABModel, <ABStarkContactsListViewControllerDelegate>, ABStarkNoContentBannerView, AVExternalDevice;

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate> {
    ABMembersDataSource *_dataSource;
    ABModel *_model;
    BOOL _limitedUI;
    <ABStarkContactsListViewControllerDelegate> *_peoplePickerDelegate;
    ABStarkNoContentBannerView *_overlayView;
    AVExternalDevice *_externalDevice;
}

@property <ABStarkContactsListViewControllerDelegate> * peoplePickerDelegate;
@property(retain) ABStarkNoContentBannerView * overlayView;
@property(retain) AVExternalDevice * externalDevice;
@property BOOL limitedUI;


- (void)setOverlayView:(id)arg1;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;
- (id)overlayView;
- (void)setExternalDevice:(id)arg1;
- (void)removeMessageOverlay;
- (void)postMessageOverlay:(id)arg1;
- (void)setLimitedUI:(BOOL)arg1;
- (id)externalDevice;
- (void)limitedUINotification:(id)arg1;
- (id)peoplePickerDelegate;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (BOOL)limitedUI;

@end