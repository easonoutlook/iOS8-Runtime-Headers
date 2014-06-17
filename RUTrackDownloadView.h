/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPAVItem, RadioTrack, <RUTrackDownloadViewDelegate>, SKUIItemOfferButton, MPUMediaDownloadObserver, UIViewController, NSString, MPMediaItem, NSArray;

@interface RUTrackDownloadView : UIView <MPStoreDownloadManagerObserver, SKStoreProductViewControllerDelegate, SKUIItemOfferButtonDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
    NSArray *_buyOffers;
    MPUMediaDownloadObserver *_downloadObserver;
    BOOL _isPurchaseAllowed;
    SKUIItemOfferButton *_itemOfferButton;
    MPMediaItem *_mediaItem;
    BOOL _showingConfirmation;
    BOOL _supportsAlbumOnly;
    int _buyButtonTitleStyle;
    <RUTrackDownloadViewDelegate> *_delegate;
    NSString *_baseOriginator;
    int _overrideState;
    NSString *_overrideTitleText;
    int _state;
    NSString *_stationHash;
    UIViewController *_viewControllerForPresenting;
    RadioTrack *_radioTrack;
    MPAVItem *_avItem;
    struct CGSize { 
        float width; 
        float height; 
    } _overrideSize;
    long long _stationID;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property int buyButtonTitleStyle;
@property <RUTrackDownloadViewDelegate> * delegate;
@property(copy) NSString * baseOriginator;
@property struct CGSize { float x1; float x2; } overrideSize;
@property int overrideState;
@property(copy) NSString * overrideTitleText;
@property(readonly) int state;
@property(copy) NSString * stationHash;
@property long long stationID;
@property BOOL supportsAlbumOnly;
@property UIViewController * viewControllerForPresenting;
@property(retain) RadioTrack * radioTrack;
@property(setter=setAVItem:,retain) MPAVItem * avItem;


- (void)productViewControllerDidFinish:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (BOOL)supportsAlbumOnly;
- (id)overrideTitleText;
- (int)overrideState;
- (struct CGSize { float x1; float x2; })overrideSize;
- (id)baseOriginator;
- (int)buyButtonTitleStyle;
- (void)setSupportsAlbumOnly:(BOOL)arg1;
- (void)_radioTrackDidChangeNotification:(id)arg1;
- (void)_avItemBuyOffersDidChangeNotification:(id)arg1;
- (BOOL)_isExplicit;
- (BOOL)_isAlbumOnlyOffer:(id)arg1;
- (id)_bestItemOffer;
- (id)_effectiveRadioTrack;
- (long long)_downloadStoreID;
- (void)_updateStateAndInternalViewsIfNeededForDownloads:(id)arg1;
- (void)_registerForRadioTrackNotifications;
- (void)_sizeToFitAndNotifyDelegate;
- (void)_updateStateAndInternalViewsAnimated:(BOOL)arg1;
- (void)_itemOfferShowConfirmationAction:(id)arg1;
- (void)_itemOfferCancelConfirmationAction:(id)arg1;
- (void)_unregisterForRadioTrackNotifications;
- (void)_radioPurchaseAllowedDidChangeNotification:(id)arg1;
- (void)_updateIsPurchasedAllowedAndUpdateState:(BOOL)arg1;
- (long long)_albumStoreID;
- (void)setRadioTrack:(id)arg1;
- (void)setOverrideState:(int)arg1;
- (void)setOverrideSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOverrideTitleText:(id)arg1;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (id)_buyOffers;
- (id)radioTrack;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)setBaseOriginator:(id)arg1;
- (void)setBuyButtonTitleStyle:(int)arg1;
- (id)viewControllerForPresenting;
- (void)setViewControllerForPresenting:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationHash:(id)arg1;
- (id)avItem;
- (void).cxx_destruct;
- (id)_title;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (int)state;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)_registerForAVItemNotifications;
- (void)_unregisterForAVItemNotifications;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (long long)stationID;
- (id)stationHash;
- (void)setAVItem:(id)arg1;

@end
