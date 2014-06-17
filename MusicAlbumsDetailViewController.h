/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSOperationQueue, MPUCompletionQueryDataSource;

@interface MusicAlbumsDetailViewController : MusicTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate> {
    BOOL _hasEverReceivedWillAppear;
    BOOL _useDownloadAllArtistCellConfig;
    NSOperationQueue *_downloadabilityOperationQueue;
    BOOL _isTransitioning;
    BOOL _isDownloading;
    float _maximumDurationWidth;
    int _downloadableSongCount;
}

@property(readonly) float maximumDurationWidth;
@property(readonly) MPUCompletionQueryDataSource * completionDataSource;
@property(readonly) int downloadableSongCount;
@property(readonly) BOOL isDownloading;

+ (Class)_albumsDetailTableHeaderViewClass;
+ (id)actionCellConfigurationClasses;
+ (BOOL)shouldShowCMC;
+ (BOOL)shouldPushNowPlayingOnSelection;

- (BOOL)isDownloading;
- (id)initWithDataSource:(id)arg1;
- (void)_updateTitle;
- (void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2;
- (void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2;
- (void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(int)arg3;
- (void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(int)arg2;
- (void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(int)arg3;
- (BOOL)_getCollectionPersistentID:(long long*)arg1 groupingType:(int*)arg2;
- (int)_collectionGroupingForProperty:(id)arg1;
- (void)_configureFooterView:(id)arg1 forSection:(int)arg2 offer:(id)arg3;
- (int)_footerStyleForSection:(int)arg1;
- (void)contentSizeCategoryDidChange;
- (void)_updateVisibleHeadersCloudRightInset;
- (void)_updateVisibleHeadersCloudDownloadStates;
- (void)_MusicAlbumsDetailViewController_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_MusicAlbumsDetailViewController_defaultsDidChangeNotification:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (id)_createTableView;
- (int)downloadableSongCount;
- (void)_downloadAllButtonAction:(id)arg1;
- (void)_updateDownloadabilityStateWithCanReloadActionRows:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_applyCloudDownloadStateForHeaderView:(id)arg1 withAlbum:(id)arg2;
- (float)maximumDurationWidth;
- (id)completionDataSource;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;

@end
