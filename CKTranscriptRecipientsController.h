/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKTranscriptLocationShareCell, CKGroupRecipientSelectionController, NSTimer, CKConversation, CKTranscriptAddRecipientCell, NSDictionary, NSString, <CKTranscriptRecipientsControllerDelegate>;

@interface CKTranscriptRecipientsController : UITableViewController <UIActionSheetDelegate, UIAlertViewDelegate> {
    BOOL _fmfDisabled;
    CKConversation *_conversation;
    <CKTranscriptRecipientsControllerDelegate> *_delegate;
    NSString *_serviceAvailabilityKey;
    NSDictionary *_facetimeIDStatuses;
    NSDictionary *_facetimeAudioIDStatuses;
    CKTranscriptAddRecipientCell *_addRecipientCell;
    CKTranscriptLocationShareCell *_locationShareCell;
    CKGroupRecipientSelectionController *_addRecipientsController;
    NSTimer *_fmfUpdateTimer;
}

@property(retain) CKConversation * conversation;
@property <CKTranscriptRecipientsControllerDelegate> * delegate;
@property(retain) NSString * serviceAvailabilityKey;
@property(retain) NSDictionary * facetimeIDStatuses;
@property(retain) NSDictionary * facetimeAudioIDStatuses;
@property(retain) CKTranscriptAddRecipientCell * addRecipientCell;
@property(retain) CKTranscriptLocationShareCell * locationShareCell;
@property(retain) CKGroupRecipientSelectionController * addRecipientsController;
@property(retain) NSTimer * fmfUpdateTimer;
@property BOOL fmfDisabled;


- (void)setLocationShareCell:(id)arg1;
- (void)setFmfUpdateTimer:(id)arg1;
- (void)_updateTimedFMFState;
- (id)fmfUpdateTimer;
- (id)addRecipientsController;
- (void)_startCallWithAddress:(id)arg1 entity:(id)arg2;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(BOOL)arg2;
- (void)_startCommunicationForEntity:(id)arg1;
- (void)_startEmailCommunicationWithEntity:(id)arg1;
- (id)entityForButton:(id)arg1;
- (id)indexPathForButton:(id)arg1;
- (id)facetimeAudioIDStatuses;
- (id)facetimeIDStatuses;
- (void)setFacetimeAudioIDStatuses:(id)arg1;
- (void)setFacetimeIDStatuses:(id)arg1;
- (void)_muteSwitchValueChanged:(id)arg1;
- (int)_facetimeIDStatusForEntity:(id)arg1;
- (BOOL)_isFaceTimeVideoAvailable;
- (BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
- (BOOL)_isFaceTimeAudioAvailable;
- (int)_facetimeAudioIDStatusForEntity:(id)arg1;
- (BOOL)_isTelephonyDevice;
- (void)infoAction:(id)arg1;
- (void)phoneCallAction:(id)arg1;
- (void)facetimeVideoAction:(id)arg1;
- (void)sendEmailAction:(id)arg1;
- (BOOL)_showPhoneButtonForEntity:(id)arg1;
- (BOOL)_showEmailButtonForEntity:(id)arg1;
- (BOOL)_showFaceTimeVideoButtonForEntity:(id)arg1;
- (id)locationShareCell;
- (void)_configureDNDCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureRecipientCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setAddRecipientsController:(id)arg1;
- (void)_handleDoneAction:(id)arg1;
- (void)_handleCancelAction:(id)arg1;
- (void)_presentRemoveRecipientSheetForRecipient:(id)arg1 inView:(id)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_presentLeaveActionSheetInView:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_presentSharingActionSheet:(BOOL)arg1 inView:(id)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_sendCurrentLocation;
- (void)_presentGroupRecipientSelectionController;
- (BOOL)_allowGroupRecipientRemoval;
- (id)locationCellForIndexPath:(id)arg1;
- (id)leaveCellForIndexPath:(id)arg1;
- (id)dndCellForIndexPath:(id)arg1;
- (id)recipientCellForIndexPath:(id)arg1;
- (id)addRecipientCell;
- (BOOL)fmfDisabled;
- (void)setAddRecipientCell:(id)arg1;
- (BOOL)_shouldShowGroupUI;
- (void)_handleMuteDidChange:(id)arg1;
- (void)_setupFMFUpdateTimerIfNecessary;
- (void)_refreshFaceTimeIDSStatusWithCompletion:(id)arg1;
- (void)setFmfDisabled:(BOOL)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (void)_faceTimeAvailabilityChange:(id)arg1;
- (void)_handleIDSStatusDidChangeNotification:(id)arg1;
- (id)serviceAvailabilityKey;
- (void)setServiceAvailabilityKey:(id)arg1;
- (id)initWithStyle:(int)arg1 conversation:(id)arg2;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)recipients;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
