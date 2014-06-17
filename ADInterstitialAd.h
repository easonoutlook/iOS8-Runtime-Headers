/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialAdPresentationViewController, UIView, <ADInterstitialAdDelegate>, ADInterstitialView, UIViewController, ADAdSpace;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {
    <ADInterstitialAdDelegate> *_delegate;
    <ADInterstitialAdDelegate> *_internalDelegate;
    UIViewController *_internalPresentingViewController;
    BOOL _loaded;
    BOOL _actionInProgress;
    BOOL _canLoadMoreThanOnce;
    BOOL _hasLoadedFirstAd;
    int _options;
    ADInterstitialView *_interstitialView;
    ADAdSpace *_adSpace;
    int _creativeType;
    ADInterstitialAdPresentationViewController *_presentationViewController;
}

@property <ADInterstitialAdDelegate> * delegate;
@property(getter=isLoaded,readonly) BOOL loaded;
@property(getter=isActionInProgress) BOOL actionInProgress;
@property <ADInterstitialAdDelegate> * internalDelegate;
@property(retain) ADInterstitialView * interstitialView;
@property UIViewController * internalPresentingViewController;
@property(retain) ADAdSpace * adSpace;
@property BOOL canLoadMoreThanOnce;
@property BOOL hasLoadedFirstAd;
@property int creativeType;
@property(retain) ADInterstitialAdPresentationViewController * presentationViewController;
@property(readonly) int internalAdType;
@property(readonly) int options;
@property(readonly) UIView * adSpaceView;
@property(readonly) UIViewController * presentingViewController;


- (int)internalAdType;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (void)setCreativeType:(int)arg1;
- (void)setCanLoadMoreThanOnce:(BOOL)arg1;
- (void)setInterstitialView:(id)arg1;
- (BOOL)isActionInProgress;
- (void)handleTapOnInterstitialViewAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_dismissModalInterstitial;
- (int)clickAction;
- (void)presentFromViewController:(id)arg1;
- (BOOL)presentInView:(id)arg1;
- (void)setActionInProgress:(BOOL)arg1;
- (void)setHasLoadedFirstAd:(BOOL)arg1;
- (BOOL)_considerClosingAdSpace;
- (BOOL)canLoadMoreThanOnce;
- (BOOL)hasLoadedFirstAd;
- (void)setPresentationViewController:(id)arg1;
- (id)presentationViewController;
- (void)setInternalPresentingViewController:(id)arg1;
- (void)_presentFromViewController:(id)arg1;
- (int)creativeType;
- (id)internalPresentingViewController;
- (id)interstitialView;
- (id)initWithCreativeType:(int)arg1 options:(int)arg2;
- (void)setAdSpace:(id)arg1;
- (id)serverURL;
- (id)adSpaceView;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setServerURL:(id)arg1;
- (id)adSpace;
- (void)setSection:(id)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (BOOL)isLoaded;
- (void)cancelAction;
- (id)identifier;
- (id)presentingViewController;
- (id)delegate;
- (void)setLoaded:(BOOL)arg1;
- (int)options;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
