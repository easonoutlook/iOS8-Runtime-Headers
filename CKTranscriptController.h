/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKTranscriptTypingIndicatorCell, UINavigationItem, NSMutableArray, NSString, CKVideoMessageRecordingViewController, CKSendAnimationWindow, CKMessageEncodingInfo, UITapGestureRecognizer, CKQLPreviewController, CKMessageEntryView, NSNotification, CKRaiseGesture, CKScheduledUpdater, NSNumber, <CKTranscriptComposeDelegate>, UIImagePickerController, CKGradientReferenceView, CKVideoTrimController, UIBarButtonItem, UIToolbar, UIWindow, CKTranscriptCollectionViewController, CKComposition, NSArray, CKComposeRecipientSelectionController, CKPhotoPickerSheetViewController, CKConversation, UIProgressView, CKAudioTrimViewController, UIView;

@interface CKTranscriptController : CKScrollViewController <CKVideoMessageRecordingViewControllerDelegate, CKCameraSheetViewControllerDelegate, UIViewControllerTransitioningDelegate, UIAlertViewDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptCollectionViewControllerDelegate, CKComposeRecipientSelectionControllerDelegate, CKMessageEntryViewDelegate, IMChatSendProgressDelegate, CKTrimControllerDelegate, UIActionSheetDelegate, UIModalViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate> {
    CKConversation *_conversation;
    UINavigationItem *_navItem;
    CKGradientReferenceView *_backPlacard;
    CKMessageEntryView *_entryView;
    <CKTranscriptComposeDelegate> *_composeDelegate;
    CKTranscriptTypingIndicatorCell *_typingIndicatorForSendAnimation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _scrollBlock;

    NSArray *_newCompositionAddresses;
    NSString *_serviceAvailabilityKey;
    CKComposition *_newComposition;
    CKMessageEncodingInfo *_textMessageEncodingInfo;
    CKAudioTrimViewController *_audioTrimController;
    CKVideoTrimController *_videoTrimController;
    int _storedStatusBarStyle;
    int _setupState;
    BOOL _dimmed;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertViewHandler;

    UIWindow *_autorotateDisabledWindow;
    float _sendProgress;
    unsigned int _sendProgressSendCount;
    unsigned int _sendProgressTotalCount;
    BOOL _progressColor;
    unsigned int _locked : 1;
    unsigned int _viewNeedsSetup : 1;
    unsigned int _newRecipient : 1;
    unsigned int _sending : 1;
    unsigned int _transitioningToTranscript : 1;
    unsigned int _entryViewCanAcceptFocus : 1;
    unsigned int _isAnimatingMessageSend : 1;
    unsigned int _entryViewWasActiveBeforeEdit : 1;
    unsigned int _entryViewWasActiveBeforePushingViewController : 1;
    unsigned int _entryViewWasActiveBeforeNewComposeThrow : 1;
    unsigned int _entryViewWasActiveBeforeSwitchingConversations : 1;
    unsigned int _recipientSelectionViewWasActiveBeforeFirstResponderChange : 1;
    unsigned int _automaticKeyboardWasDisabled : 1;
    unsigned int _togglingEditing : 1;
    unsigned int _keyboardUndocked : 1;
    unsigned int _suspendScrollDueToMediaViewing : 1;
    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow : 1;
    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
    unsigned int _preparingForResume : 1;
    unsigned int _settingConversation : 1;
    unsigned int _needsTransitionToFullTranscript : 1;
    unsigned int _transcriptNeedsUpdate;
    unsigned int _storedStatusBarIsHidden : 1;
    UIToolbar *_actionsToolbar;
    BOOL _canSafelyDismissImagePicker;
    NSNotification *_keyboardNotification;
    BOOL _showingKeyboard;
    BOOL _didCancel;
    NSString *_initialSystemKeyboardID;
    UIImagePickerController *_mediaController;
    CKQLPreviewController *_previewController;
    BOOL _safeToMarkAsRead;
    BOOL _showingVideoMessageRecordingView;
    CKPhotoPickerSheetViewController *_photoPickerController;
    BOOL _showingPhotoPicker;
    BOOL _hasPrepopulatedRecipients;
    BOOL _programaticallyMadeEntryViewActive;
    BOOL _hideEntryViewForModalDismissal;
    BOOL _visible;
    CKComposition *_presetComposition;
    CKVideoMessageRecordingViewController *_videoMessageRecordingViewController;
    CKTranscriptCollectionViewController *_collectionViewController;
    NSArray *_newCompositionRecipients;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    CKScheduledUpdater *_typingUpdater;
    CKComposition *_compositionBeingTrimmed;
    UIView *_throwAnimationEnforcementView;
    UIView *_throwAnimationSnapshotView;
    NSMutableArray *_throwBalloonViews;
    NSMutableArray *_throwIntermediateFrames;
    NSMutableArray *_throwEndFrames;
    CKSendAnimationWindow *_sendAnimationWindow;
    UIProgressView *_progressBar;
    UIBarButtonItem *_detailsButton;
    UIBarButtonItem *_clearAllItem;
    UIBarButtonItem *_editCancelItem;
    UIBarButtonItem *_composeCancelItem;
    CKRaiseGesture *_raiseGesture;
}

@property <CKTranscriptComposeDelegate> * composeDelegate;
@property NSNumber * canSafelyDismissImagePicker;
@property(getter=isDimmed) BOOL dimmed;
@property(copy) id scrollBlock;
@property(retain) CKMessageEntryView * entryView;
@property(retain) CKComposition * presetComposition;
@property(retain) CKVideoMessageRecordingViewController * videoMessageRecordingViewController;
@property(retain) CKTranscriptCollectionViewController * collectionViewController;
@property(copy) id alertHandler;
@property(copy) NSArray * newCompositionAddresses;
@property(copy) NSArray * newCompositionRecipients;
@property BOOL safeToMarkAsRead;
@property BOOL hasPrepopulatedRecipients;
@property BOOL programaticallyMadeEntryViewActive;
@property BOOL hideEntryViewForModalDismissal;
@property(retain,readonly) CKComposeRecipientSelectionController * composeRecipientSelectionController;
@property(retain) CKScheduledUpdater * typingUpdater;
@property(retain) CKComposition * compositionBeingTrimmed;
@property BOOL visible;
@property(retain) UIView * throwAnimationEnforcementView;
@property(retain) UIView * throwAnimationSnapshotView;
@property(retain) NSMutableArray * throwBalloonViews;
@property(retain) NSMutableArray * throwIntermediateFrames;
@property(retain) NSMutableArray * throwEndFrames;
@property(retain) CKSendAnimationWindow * sendAnimationWindow;
@property(retain) UIProgressView * progressBar;
@property(retain) UIBarButtonItem * detailsButton;
@property(retain) UIBarButtonItem * clearAllItem;
@property(retain) UIBarButtonItem * editCancelItem;
@property(retain) UIBarButtonItem * composeCancelItem;
@property(retain) CKRaiseGesture * raiseGesture;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;

+ (id)readerScrollPositionCache;

- (id)initWithNavigationController:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)registerForNotifications;
- (void)_entryDebugShowEntryHUD;
- (void)entryDebugClear;
- (void)entryDebugSliderChange:(id)arg1;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (void)ckPhotoPickerViewController:(id)arg1 resizeToSize:(struct CGSize { float x1; float x2; })arg2;
- (void)ckPhotoPickerViewController:(id)arg1 selectedAssets:(id)arg2 shouldSend:(BOOL)arg3;
- (void)ckPhotoPickerViewControllerCancel:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToChooseExisting:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToTakeAPicture:(id)arg1;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (void)_showCurrentPreviewItemForPreviewController:(id)arg1;
- (BOOL)_displayPreviewItemForMediaObject:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)dismissPresentedViewController:(id)arg1;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(int*)arg2 containsRestoring:(BOOL*)arg3;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (void)showMediaPicker:(id)arg1 animated:(BOOL)arg2;
- (void)_userDidCancelCapturingImage;
- (void)_userDidCaptureImage;
- (void)presentPhotoPickerViewController:(id)arg1 completion:(id)arg2;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_showPhotosPicker;
- (void)_cleanupVideoMessageRecordingViewController;
- (void)_handleLongPress:(id)arg1;
- (void)_setupTapAndHoldGesture;
- (void)prewarmCamera:(id)arg1;
- (void)addMedia:(id)arg1;
- (void)setComposeCancelItem:(id)arg1;
- (void)setEditCancelItem:(id)arg1;
- (void)setClearAllItem:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (id)sendAnimationWindow;
- (void)setThrowAnimationEnforcementView:(id)arg1;
- (id)throwAnimationEnforcementView;
- (void)setVideoMessageRecordingViewController:(id)arg1;
- (id)videoMessageRecordingViewController;
- (id)scrollBlock;
- (void)setComposeDelegate:(id)arg1;
- (BOOL)_shouldUseExistingConversations;
- (void)setCanSafelyDismissImagePicker:(id)arg1;
- (void)showKeyboardForReply;
- (void)makeEntryViewActiveAfterSend;
- (void)willDismissModally;
- (void)disableCameraAttachments;
- (void)_makeFieldForFocusActive;
- (void)_setVisible:(BOOL)arg1;
- (BOOL)_isVisible;
- (BOOL)_isGroupMessage;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (void*)_newPersonWithValue:(struct __CFString { }*)arg1 forMultiValueProperty:(int)arg2;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (BOOL)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (void)setupForNewRecipient;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (void)setNewComposition:(id)arg1 composeRecipients:(id)arg2;
- (id)unatomizedRecipientText;
- (BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (void)_screenLocked:(id)arg1;
- (void)parentControllerDidBecomeActive;
- (void)_applicationBecameActive:(id)arg1;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 animated:(BOOL)arg2 duration:(float)arg3;
- (float)bottomInsetPadding;
- (float)topInsetPadding;
- (BOOL)topInsetIncludesPalette;
- (void)viewDidAppearDeferredSetup;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned int)arg4 totalCount:(unsigned int)arg5 finished:(BOOL)arg6;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)alertHandler;
- (BOOL)hasPrepopulatedRecipients;
- (BOOL)hideEntryViewForModalDismissal;
- (void)setHideEntryViewForModalDismissal:(BOOL)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (void)_setupMediaEntry;
- (void)setEntryView:(id)arg1;
- (BOOL)photoButtonEnabled;
- (void)_makeRecipientEntryViewActive;
- (id)_fieldForFocus;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_updateActionsToolbarItemsForRotation:(int)arg1;
- (void)dismissPeoplePicker:(id)arg1;
- (void)_displayABPersonViewController:(id)arg1;
- (BOOL)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2;
- (void)showReaderForPart:(id)arg1;
- (void)showViewerForMediaObject:(id)arg1;
- (void)_setupNewComposition;
- (void)_setupRecipientSelectionView;
- (void)setPresetComposition:(id)arg1;
- (id)presetComposition;
- (void)setHasPrepopulatedRecipients:(BOOL)arg1;
- (id)newCompositionAddresses;
- (id)newCompositionRecipients;
- (void)setNewCompositionAddresses:(id)arg1;
- (void)setNewCompositionRecipients:(id)arg1;
- (struct CGSize { float x1; float x2; })_idealSizeForEntryView;
- (BOOL)_resizeMessageEntryView:(id)arg1 animate:(BOOL)arg2;
- (id)typingUpdater;
- (void)setProgramaticallyMadeEntryViewActive:(BOOL)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (BOOL)programaticallyMadeEntryViewActive;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (void)sendComposition:(id)arg1;
- (id)compositionWithAcceptedAutoCorrect;
- (id)compositionBeingTrimmed;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)setCompositionBeingTrimmed:(id)arg1;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (BOOL)_mediaObjectNeedsTrimming:(id)arg1;
- (void)startSendAnimationForMessage:(id)arg1;
- (BOOL)shouldDismissAfterSend;
- (void)_highlightMessage:(id)arg1;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (void)_actuallyClearCurrentMessageThread;
- (void)transitionFromNewMessageToConversation;
- (void)_finishSendAnimation;
- (void)_setEntryViewSize:(struct CGSize { float x1; float x2; })arg1 animate:(BOOL)arg2 animationLength:(float)arg3;
- (id)throwEndFrames;
- (void)_setupTranscriptTableHeader;
- (BOOL)_makeContentEntryViewActive;
- (id)throwBalloonViews;
- (id)throwIntermediateFrames;
- (void)setThrowEndFrames:(id)arg1;
- (void)setThrowIntermediateFrames:(id)arg1;
- (void)setThrowBalloonViews:(id)arg1;
- (void)_cleanupThrowData;
- (void)setSendAnimationWindow:(id)arg1;
- (void)setThrowAnimationSnapshotView:(id)arg1;
- (id)throwAnimationSnapshotView;
- (void)_endTransitioningToTranscript;
- (void)_beginTransitioningToTranscript;
- (void)_updateActionsToolbarItems;
- (id)_actionsToolbar;
- (id)composeCancelItem;
- (id)detailsButton;
- (id)editCancelItem;
- (id)clearAllItem;
- (void)cancelButtonClicked:(id)arg1;
- (void)_editCancelButtonPressed:(id)arg1;
- (void)clearCurrentMessageThread;
- (void)_detailsButtonPressed:(id)arg1;
- (void)clearComposition;
- (id)composeDelegate;
- (void)_conversationParticipantsChanged:(id)arg1;
- (void)setNewRecipient:(BOOL)arg1;
- (void)_setConversation:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (id)progressBar;
- (void)dismissPhotoPickerViewController:(id)arg1 completion:(id)arg2;
- (void)setRaiseGesture:(id)arg1;
- (void)raiseGestureRecognized:(id)arg1;
- (void)_setupViewForConversation;
- (struct CGPoint { float x1; float x2; })bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (void)updateQLPreviewControllerIfVisible;
- (void)systemApplicationWillEnterForeground;
- (void)_performResume:(BOOL)arg1;
- (void)prepareForSuspend;
- (id)raiseGesture;
- (void)hideMediaPickerAnimated:(BOOL)arg1;
- (id)canSafelyDismissImagePicker;
- (void)prepareForResume;
- (void)updateRaiseGesture;
- (void)_refreshFaceTimeIDSStatus;
- (void)refreshTranscriptWithAnimation:(BOOL)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_transferRestored:(id)arg1;
- (void)_transferFinished:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_preferredServiceChangedNotification:(id)arg1;
- (void)_receivedConversationDisplayNameDidChangeNotification:(id)arg1;
- (void)_receivedConversationPreferredServiceChangedNotification:(id)arg1;
- (BOOL)safeToMarkAsRead;
- (id)entryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })gradientFrameWithInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)proposedRecipients;
- (void)performResumeDeferredSetup;
- (void)_saveDraftState;
- (void)deregisterSendProgressDelegate;
- (void)registerSendProgressDelegate;
- (void)_requeryIDStatuses;
- (void)_resetEntryViewSize;
- (void)refreshTranscriptIfNeededWithAnimation:(BOOL)arg1;
- (void)_refreshViewForCurrentConversationIfNeeded;
- (id)composeRecipientSelectionController;
- (void)_refreshViewForNewRecipientIfNeeded;
- (BOOL)isNewRecipient;
- (void)_updateBackPlacardSubviews;
- (void)reloadEntryViewIfNeeded;
- (void)_removeRecipientSelectionView;
- (void)setScrollBlock:(id)arg1;
- (void)_cancelMessageSendAnimation;
- (void)registerForSharedNotifications;
- (void)setTypingUpdater:(id)arg1;
- (void)updateTyping;
- (void)setSafeToMarkAsRead:(BOOL)arg1;
- (void)_markMessagesAsReadIfNecessary;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (BOOL)isDimmed;
- (void)setSendingMessage:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1;
- (BOOL)isComposingRecipient;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)setComposition:(id)arg1;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (BOOL)isSendingMessage;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)showPopoverWithContentViewController:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)setAlertHandler:(id)arg1;
- (void)previewController:(id)arg1 didTransitionToState:(int)arg2;
- (void)previewController:(id)arg1 willTransitionToState:(int)arg2;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (id)chat;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (void)updateNavigationButtons;
- (id)_alertView:(id)arg1 externalButtonTitleForMainScreenButtonTitle:(id)arg2 atIndex:(int)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (void)setCollectionViewController:(id)arg1;
- (id)collectionViewController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (BOOL)visible;
- (id)textInputContextIdentifier;
- (id)inputAccessoryView;
- (id)scrollView;
- (id)rotatingFooterView;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillUnload;
- (BOOL)_canReloadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)setVisible:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)wantsFullScreenLayout;
- (BOOL)isEditable;
- (void)significantTimeChange;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)shouldAutorotate;
- (BOOL)becomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (id)navigationItem;
- (id)recipients;
- (void)updateTitle;
- (void)dealloc;
- (id)init;
- (id)composition;

@end
