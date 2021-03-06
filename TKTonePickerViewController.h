/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class UIImage, MPMusicPlayerController, TKTonePickerTableViewCellLayoutManager, NSNumber, TKVibrationPickerViewController, MPMediaPickerController, TKTonePickerController, <TKTonePickerStyleProvider>, UIBarButtonItem, UIView, <TKTonePickerViewControllerDelegate>, NSString, NSMutableArray, NSIndexPath;

@interface TKTonePickerViewController : UITableViewController <TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKToneClassicsTableViewControllerDelegate, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, MPMediaPickerControllerDelegate> {
    BOOL _showsStoreButtonInNavigationBar;
    BOOL _needsScrollPositionReset;
    BOOL _showsMedia;
    <TKTonePickerViewControllerDelegate> *_delegate;
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManager;
    UIBarButtonItem *_storeBarButtonItem;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    <TKTonePickerStyleProvider> *_styleProvider;
    NSIndexPath *_selectedClassicAlertTonesIndexPath;
    NSIndexPath *_selectedClassicRingtonesIndexPath;
    UIView *_defaultSectionHeaderView;
    UIView *_mediaSectionHeaderView;
    NSMutableArray *_regularToneSectionHeaderViews;
    NSMutableArray *_mediaItems;
    MPMediaPickerController *_mediaPickerController;
    MPMusicPlayerController *_storedMusicPlayer;
}

@property(readonly) int alertType;
@property(copy) NSString * accountIdentifier;
@property BOOL showsDefault;
@property(copy) NSString * defaultToneIdentifier;
@property BOOL showsNone;
@property(getter=isNoneAtTop) BOOL noneAtTop;
@property(copy) NSString * noneString;
@property BOOL showsNothingSelected;
@property BOOL showsStoreButtonInNavigationBar;
@property(copy) NSString * selectedToneIdentifier;
@property <TKTonePickerViewControllerDelegate> * delegate;
@property BOOL showsMedia;
@property(getter=isMediaAtTop) BOOL mediaAtTop;
@property(copy) NSNumber * selectedMediaIdentifier;
@property BOOL showsVibrations;
@property(copy) NSString * selectedVibrationIdentifier;
@property(retain) <TKTonePickerStyleProvider> * styleProvider;
@property(setter=_setTonePickerController:,retain) TKTonePickerController * _tonePickerController;
@property(setter=_setStyleProvider:,retain) <TKTonePickerStyleProvider> * _styleProvider;
@property(setter=_setCheckmarkImage:,retain) UIImage * _checkmarkImage;
@property(setter=_setTableViewCellLayoutManager:,retain) TKTonePickerTableViewCellLayoutManager * _tableViewCellLayoutManager;
@property(setter=_setNeedsScrollPositionReset:) BOOL _needsScrollPositionReset;
@property(setter=_setShowsStoreButtonInNavigationBar:) BOOL _showsStoreButtonInNavigationBar;
@property(setter=_setStoreBarButtonItem:,retain) UIBarButtonItem * _storeBarButtonItem;
@property(setter=_setDefaultSectionHeaderView:,retain) UIView * _defaultSectionHeaderView;
@property(setter=_setMediaSectionHeaderView:,retain) UIView * _mediaSectionHeaderView;
@property(setter=_setRegularToneSectionHeaderViews:,retain) NSMutableArray * _regularToneSectionHeaderViews;
@property(setter=_setSelectedClassicAlertTonesIndexPath:,retain) NSIndexPath * _selectedClassicAlertTonesIndexPath;
@property(setter=_setSelectedClassicRingtonesIndexPath:,retain) NSIndexPath * _selectedClassicRingtonesIndexPath;
@property(setter=_setMediaPickerController:,retain) MPMediaPickerController * _mediaPickerController;
@property(setter=_setMediaItems:,retain) NSMutableArray * _mediaItems;
@property(setter=_setStoredMusicPlayer:,retain) MPMusicPlayerController * _storedMusicPlayer;
@property(readonly) MPMusicPlayerController * _musicPlayer;
@property(setter=_setVibrationPickerViewController:,retain) TKVibrationPickerViewController * _vibrationPickerViewController;


- (void)removeMediaItems:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (id)selectedMediaIdentifier;
- (void)setShowsMedia:(BOOL)arg1;
- (void)setShowsStoreButtonInNavigationBar:(BOOL)arg1;
- (BOOL)showsStoreButtonInNavigationBar;
- (void)vibrationPickerViewControllerWasDismissed:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)toneClassicsTableView:(id)arg1 willDimissWithNewSelectedIndexPath:(id)arg2;
- (int)preselectedIndexForToneClassicsTableView:(id)arg1;
- (id)toneIdentifiersForToneClassicsTableView:(id)arg1;
- (void)_pushClassicsToneTableViewController;
- (void)_togglePlayMediaItemWithIdentifier:(id)arg1;
- (id)_selectedClassicRingtonesIndexPath;
- (id)_selectedClassicAlertTonesIndexPath;
- (void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(int)arg3;
- (void)_configureTextColorOfLabelInCell:(id)arg1 checked:(BOOL)arg2;
- (id)_tableViewCellLayoutManager;
- (id)_musicPlayer;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (id)_storedMusicPlayer;
- (id)_mediaItems;
- (unsigned int)_addMediaIdentifierToList:(id)arg1;
- (id)_mediaItemForIdentifier:(id)arg1;
- (id)selectedIdentifier:(BOOL*)arg1;
- (void)setSelectedMediaIdentifier:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification;
- (void)_resetScrollingPosition;
- (id)_regularToneSectionHeaderViews;
- (id)_mediaSectionHeaderView;
- (id)_defaultSectionHeaderView;
- (void)_setNeedsScrollPositionReset:(BOOL)arg1;
- (BOOL)_needsScrollPositionReset;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (id)_styleProvider;
- (id)_storeBarButtonItem;
- (void)_configureNavigationBarIfNeeded;
- (BOOL)_showsStoreButtonInNavigationBar;
- (id)_tonePickerController;
- (void)_setStyleProvider:(id)arg1;
- (void)_setStoreBarButtonItem:(id)arg1;
- (void)_setRegularToneSectionHeaderViews:(id)arg1;
- (void)_setMediaSectionHeaderView:(id)arg1;
- (void)_setDefaultSectionHeaderView:(id)arg1;
- (void)_setStoredMusicPlayer:(id)arg1;
- (void)_setMediaItems:(id)arg1;
- (void)_setMediaPickerController:(id)arg1;
- (id)_mediaPickerController;
- (void)_setVibrationPickerViewController:(id)arg1;
- (id)_vibrationPickerViewController;
- (void)_setSelectedClassicRingtonesIndexPath:(id)arg1;
- (void)_setSelectedClassicAlertTonesIndexPath:(id)arg1;
- (BOOL)showsMedia;
- (void)_setTableViewCellLayoutManager:(id)arg1;
- (void)_setCheckmarkImage:(id)arg1;
- (void)_setTonePickerController:(id)arg1;
- (void)_setShowsStoreButtonInNavigationBar:(BOOL)arg1;
- (BOOL)showsVibrations;
- (void)setMediaAtTop:(BOOL)arg1;
- (void)setNoneString:(id)arg1;
- (BOOL)showsNone;
- (BOOL)showsDefault;
- (void)setDefaultToneIdentifier:(id)arg1;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
- (void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (unsigned int)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
- (id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfMediaItemsInTonePickerController:(id)arg1;
- (BOOL)isMediaAtTop;
- (BOOL)tonePickerControllerShouldShowMedia:(id)arg1;
- (void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsPresentingToneStore:(id)arg1;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
- (void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned int)arg2 selectionDidChange:(BOOL)arg3;
- (void)_goToStore;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (BOOL)showsNothingSelected;
- (id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned int)arg2;
- (id)noneString;
- (id)defaultToneIdentifier;
- (BOOL)isNoneAtTop;
- (id)accountIdentifier;
- (void)_reloadData;
- (id)_checkmarkImage;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)applicationWillSuspend;
- (id)delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)setAccountIdentifier:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (int)alertType;
- (id)selectedVibrationIdentifier;
- (id)selectedToneIdentifier;
- (void)setShowsVibrations:(BOOL)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setNoneAtTop:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setSelectedToneIdentifier:(id)arg1;
- (id)initWithAlertType:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
