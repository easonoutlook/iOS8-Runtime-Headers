/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <ADAdSlotDelegate>, NSArray, NSString, NSData, NSMutableArray;

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding> {
    <ADAdSlotDelegate> *_delegate;
    BOOL _gatewayAdSlot;
    BOOL _didBeginPlayback;
    BOOL _didRequest;
    BOOL _didReportFinish;
    NSString *_identifier;
    NSData *_stationData;
    NSData *_previousSongData;
    NSData *_followingSongData;
    NSMutableArray *_visuallyEngagedBanners;
    NSMutableArray *_visuallyDisengagedBanners;
    NSMutableArray *_pendingBannerLoads;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property <ADAdSlotDelegate> * delegate;
@property(copy) NSString * identifier;
@property BOOL gatewayAdSlot;
@property(copy) NSData * stationData;
@property(copy) NSData * previousSongData;
@property(copy) NSData * followingSongData;
@property(retain,readonly) NSArray * ads;
@property(retain) NSMutableArray * visuallyEngagedBanners;
@property(retain) NSMutableArray * visuallyDisengagedBanners;
@property BOOL didBeginPlayback;
@property(retain) NSMutableArray * pendingBannerLoads;
@property(copy) id completionHandler;
@property BOOL didRequest;
@property BOOL didReportFinish;

+ (BOOL)supportsSecureCoding;

- (void)willBeginPlaybackOfAds:(id)arg1 forSpace:(int)arg2;
- (void)didFinishPlaybackOfAds:(id)arg1 skippedCount:(int)arg2;
- (id)stationData;
- (id)previousSongData;
- (BOOL)gatewayAdSlot;
- (id)followingSongData;
- (id)ads;
- (void)setPreviousSongData:(id)arg1;
- (void)setStationData:(id)arg1;
- (void)setGatewayAdSlot:(BOOL)arg1;
- (void)setFollowingSongData:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)setDidRequest:(BOOL)arg1;
- (BOOL)didRequest;
- (void)setDidBeginPlayback:(BOOL)arg1;
- (void)loadVisuallyEngagedAds:(id)arg1 visuallyDisengagedAds:(id)arg2 completionHandler:(id)arg3;
- (void)setDidReportFinish:(BOOL)arg1;
- (BOOL)didReportFinish;
- (BOOL)didBeginPlayback;
- (void)_considerInvokingCompletionHandler;
- (id)visuallyDisengagedBanners;
- (void)setVisuallyDisengagedBanners:(id)arg1;
- (id)visuallyEngagedBanners;
- (void)setVisuallyEngagedBanners:(id)arg1;
- (id)_bannersForAds:(id)arg1;
- (void)setPendingBannerLoads:(id)arg1;
- (id)pendingBannerLoads;
- (void)_visuallyEngagedDidChange;
- (void)setCompletionHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)completionHandler;
- (id)identifier;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
