/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKPlaceViewControllerDelegate>, MKPlaceNearbyAppsMetricsCoordinator, MKPlaceInfoViewController, CNContact, MKSegmentedControlTabBarView, NSArray, NSMapTable, SKProductPageViewController, MKPlaceHeaderView, MKDistanceDetailProvider, NSString, UITapGestureRecognizer, MKPlaceActionsViewController, MKMapItem;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, MKPlaceHeaderBackgroundViewDelegate, SKProductPageViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate> {
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceActionsViewController *_actionsViewController;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    BOOL _compressedHeaderView;
    BOOL _isSearchingForNearbyApps;
    SKProductPageViewController *_storePageViewController;
    NSArray *_storeItems;
    NSMapTable *_additionalViewControllers;
    BOOL _overrideDefaultShowRAP;
    BOOL _hasCheckedDistanceAvailability;
    BOOL _showEditButton;
    BOOL _hideInlineMap;
    BOOL _showInlineMapInHeader;
    BOOL _hideDirectionsButtons;
    BOOL _showContactActions;
    BOOL _showTitleBar;
    BOOL _showShareActionsButton;
    BOOL _showRemovePin;
    BOOL _showReportAProblem;
    BOOL _disableReportAProblem;
    BOOL _showRerouting;
    BOOL _showNearbyApps;
    BOOL _showFlyoverTour;
    BOOL _showCreateReminder;
    BOOL _showOpenInSkyline;
    BOOL _showSimulateLocation;
    NSString *_headerTitle;
    MKPlaceHeaderView *_placeHeaderView;
    MKSegmentedControlTabBarView *_tabBar;
    MKDistanceDetailProvider *_distanceMonitor;
    MKMapItem *_mapItem;
    CNContact *_contact;
    <_MKPlaceViewControllerDelegate> *_placeViewControllerDelegate;
    float _headerHeight;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
}

@property BOOL showShareActionsButton;
@property(retain) MKMapItem * mapItem;
@property(copy) NSString * headerTitle;
@property BOOL showEditButton;
@property BOOL showTitleBar;
@property BOOL hideDirectionsButtons;
@property BOOL hideInlineMap;
@property BOOL showInlineMapInHeader;
@property BOOL showNearbyApps;
@property BOOL showRemovePin;
@property BOOL showReportAProblem;
@property BOOL disableReportAProblem;
@property BOOL showRerouting;
@property BOOL showFlyoverTour;
@property float headerHeight;
@property BOOL showCreateReminder;
@property BOOL showSimulateLocation;
@property BOOL showOpenInSkyline;
@property <_MKPlaceViewControllerDelegate> * placeViewControllerDelegate;
@property(readonly) CNContact * contact;
@property(retain) MKPlaceHeaderView * placeHeaderView;
@property(retain) MKSegmentedControlTabBarView * tabBar;
@property BOOL showContactActions;
@property(retain) MKDistanceDetailProvider * distanceMonitor;
@property BOOL hasCheckedDistanceAvailability;
@property(readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;


- (id)initWithMapItem:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (id)headerTitle;
- (void)setHeaderHeight:(float)arg1;
- (float)headerHeight;
- (void).cxx_destruct;
- (void)setTabBar:(id)arg1;
- (id)tabBar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_commonInit;
- (int)preferredStatusBarStyle;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (void)dealloc;
- (id)init;
- (void)setShowFlyoverTour:(BOOL)arg1;
- (void)setShowNearbyApps:(BOOL)arg1;
- (void)setShowRerouting:(BOOL)arg1;
- (void)setDisableReportAProblem:(BOOL)arg1;
- (BOOL)disableReportAProblem;
- (void)setShowTitleBar:(BOOL)arg1;
- (BOOL)showTitleBar;
- (void)setHideDirectionsButtons:(BOOL)arg1;
- (void)setShowInlineMapInHeader:(BOOL)arg1;
- (void)setHideInlineMap:(BOOL)arg1;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setHasCheckedDistanceAvailability:(BOOL)arg1;
- (BOOL)hasCheckedDistanceAvailability;
- (void)setDistanceMonitor:(id)arg1;
- (id)distanceMonitor;
- (void)notifyDelegateToLogUsage:(int)arg1;
- (void)_openInfoAttribution;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (void)_switchToTabAtIndex:(int)arg1;
- (void)removeAdditionalViewController:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(int)arg2;
- (int)_sectionPositionForMapTableKey:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (BOOL)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (BOOL)shouldShowReroutingForInfoViewController:(id)arg1;
- (BOOL)shouldShowDirectionsForInfoViewController:(id)arg1;
- (BOOL)shouldShowInlineMapForInfoViewController:(id)arg1;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
- (float)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)_openAppWithBundleID:(id)arg1;
- (id)metricsCoordinator;
- (void)_findNearbyAppsAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)setShowOpenInSkyline:(BOOL)arg1;
- (BOOL)showOpenInSkyline;
- (void)setShowSimulateLocation:(BOOL)arg1;
- (BOOL)showSimulateLocation;
- (void)setShowCreateReminder:(BOOL)arg1;
- (BOOL)showCreateReminder;
- (void)setShowReportAProblem:(BOOL)arg1;
- (BOOL)showReportAProblem;
- (void)setShowRemovePin:(BOOL)arg1;
- (BOOL)showRemovePin;
- (BOOL)showContactActions;
- (BOOL)showRerouting;
- (BOOL)showFlyoverTour;
- (BOOL)hideDirectionsButtons;
- (void)_tappedForFlyoverTour;
- (void)setPlaceHeaderView:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(int)arg1;
- (void)setShowContactActions:(BOOL)arg1;
- (void)_searchForNearbyApps;
- (BOOL)showNearbyApps;
- (void)_setViewControllersWithMapItemViewControllers:(id)arg1;
- (void)updateActionVisibility;
- (BOOL)hideInlineMap;
- (id)additionalViewControllersAtPosition:(int)arg1;
- (BOOL)_defaultShowReportAProblem;
- (id)placeViewControllerDelegate;
- (void)resetHeaderView;
- (id)placeHeaderView;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned int)arg2;
- (void)presentHeaderView;
- (BOOL)showInlineMapInHeader;
- (void)suspendHeaderViewAnimations;
- (void)resumeHeaderViewAnimations;
- (void)_showShareSheet:(id)arg1;
- (BOOL)showShareActionsButton;
- (void)_showEditSheet:(id)arg1;
- (BOOL)showEditButton;
- (void)_updateViewControllers;
- (void)_setupHeaderView;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)setShowShareActionsButton:(BOOL)arg1;
- (void)setShowEditButton:(BOOL)arg1;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)setContact:(id)arg1;
- (id)contact;

@end