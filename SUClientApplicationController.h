/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SKUIURL, SUPreviewOverlayViewController, SUTabBarController, NSURL, ISOperation, UINavigationController, SUPlaceholderViewController, SUSectionsResponse, SUMediaPlayerViewController, NSString, SKUIPassbookLoader;

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate> {
    SUMediaPlayerViewController *_activeMediaPlayer;
    NSString *_exitStoreButtonTitle;
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    int _ignoreDownloadQueueChangeCount;
    SKUIURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    id _locationObserver;
    SKUIPassbookLoader *_passbookLoader;
    NSString *_preMediaDefaultPNG;
    SUPreviewOverlayViewController *_previewOverlay;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    BOOL _shouldPrepareUserInterfaceWhenActivated;
    SUTabBarController *_tabBarController;
}

@property(getter=isIgnoringDownloadQueueChanges,readonly) BOOL ignoringDownloadQueueChanges;
@property(readonly) NSString * defaultPNGNameForSuspend;
@property(readonly) NSURL * launchURL;
@property(getter=wasLaunchedFromLibrary,readonly) BOOL launchedFromLibrary;
@property(getter=isTabBarControllerLoaded,readonly) BOOL tabBarControllerLoaded;
@property(readonly) SUTabBarController * tabBarController;
@property(readonly) UINavigationController * topNavigationController;
@property BOOL shouldPrepareUserInterfaceWhenActivated;
@property(copy) NSString * exitStoreButtonTitle;
@property(getter=_activeMediaPlayer,setter=_setActiveMediaPlayer:,retain) SUMediaPlayerViewController * _activeMediaPlayer;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (void)setShouldPrepareUserInterfaceWhenActivated:(BOOL)arg1;
- (void)_setActiveMediaPlayer:(id)arg1;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (void)setExitStoreButtonTitle:(id)arg1;
- (void)prepareUserInterface;
- (BOOL)isIgnoringDownloadQueueChanges;
- (void)endIgnoringDownloadQueueChanges;
- (void)beginIgnoringDownloadQueueChanges;
- (void)_cancelSectionFetchPlaceholder;
- (id)_accountViewController;
- (void)_restorePreMediaPlayerSettings;
- (BOOL)_displayClientURL:(id)arg1;
- (void)_handleAddPassbookPassURL:(id)arg1;
- (void)_handleDonationURL:(id)arg1;
- (void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (BOOL)shouldPrepareUserInterfaceWhenActivated;
- (id)_newTabBarController;
- (id)_showPageForExternalOriginatedURLBagKey:(id)arg1;
- (void)_openClientURL:(id)arg1;
- (void)_setupTabBarController;
- (id)_activeMediaPlayer;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (void)bagDidLoadNotification:(id)arg1;
- (id)defaultPNGNameForSuspend;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)presentExternalURLViewController:(id)arg1;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (id)launchURL;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_retrySectionsAfterNetworkTransition;
- (BOOL)_reloadForStorefrontChange;
- (id)_resumableViewController;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (id)topNavigationController;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_presentSectionFetchUI;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)setupUI;
- (void)_cancelLoadSectionsOperation;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)returnToLibrary;
- (BOOL)wasLaunchedFromLibrary;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (id)exitStoreButtonTitle;
- (BOOL)isTabBarControllerLoaded;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (id)_previewOverlayViewController;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (BOOL)tabBarController:(id)arg1 shouldShowSection:(id)arg2;
- (id)overlayBackgroundViewController;
- (id)initWithClientInterface:(id)arg1;
- (void)exitStoreAfterDialogsDismiss;
- (id)copySuspendSettings;
- (BOOL)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)tabBarControllerForClientInterface:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)returnToLibraryForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (void)cancelAllOperations;
- (id)tabBarController;
- (double)defaultImageSnapshotExpiration;
- (void)dealloc;
- (void)becomeActive;
- (void)resignActive;
- (void)tearDownUI;

@end
