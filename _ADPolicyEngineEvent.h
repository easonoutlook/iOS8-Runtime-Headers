/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _bannersLoadedHandler;

    NSMutableArray *_banners;
    NSMutableArray *_bannersWaitingOnLoad;
}

@property(readonly) NSArray * bannerIdentifiers;
@property(copy) id bannersLoadedHandler;
@property(retain) NSMutableArray * banners;
@property(retain) NSMutableArray * bannersWaitingOnLoad;


- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)setBanners:(id)arg1;
- (void)waitForLoadsForBanners:(id)arg1 completionHandler:(id)arg2;
- (id)loadedBannerWithIdentifier:(id)arg1;
- (id)bannerIdentifiers;
- (void)addBannerForCreativeType:(int)arg1;
- (id)bannersLoadedHandler;
- (void)_considerCallingLoadedHandler;
- (id)bannersWaitingOnLoad;
- (void)setBannersWaitingOnLoad:(id)arg1;
- (void)setBannersLoadedHandler:(id)arg1;
- (id)banners;
- (void)dealloc;
- (id)init;

@end
