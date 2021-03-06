/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, MPAVRoute, NSDictionary, PUAirplaySession;

@interface PUAirplayRoute : NSObject  {
    PUAirplaySession *_airplaySession;
    BOOL _requiresPassword;
    BOOL _supportsVideo;
    BOOL _supportsAudio;
    BOOL _supportsMirroring;
    BOOL _supportsPhotos;
    BOOL _supportsSlideshow;
    BOOL _isDefaultRoute;
    BOOL _isCurrentRoute;
    BOOL _isSecondScreenActive;
    BOOL _photoVideoDNSNameP2POnly;
    BOOL _audioScreenDNSNameP2POnly;
    BOOL _isPasswordPIN;
    NSString *_displayName;
    NSString *_routeUID;
    NSDictionary *_routeDescription;
    NSDictionary *_screenRouteDescription;
    NSString *_photoVideoDNSName;
    NSString *_audioScreenDNSName;
    MPAVRoute *_avRoute;
    MPAVRoute *_avScreenRoute;
}

@property(copy,readonly) NSString * displayName;
@property(copy,readonly) NSString * routeUID;
@property(readonly) BOOL requiresPassword;
@property(readonly) BOOL supportsVideo;
@property(readonly) BOOL supportsAudio;
@property(readonly) BOOL supportsMirroring;
@property(readonly) BOOL supportsPhotos;
@property(readonly) BOOL supportsSlideshow;
@property(readonly) BOOL isDefaultRoute;
@property(readonly) BOOL isCurrentRoute;
@property(readonly) BOOL isSecondScreenActive;
@property(copy,readonly) NSDictionary * routeDescription;
@property(copy,readonly) NSDictionary * screenRouteDescription;
@property(readonly) PUAirplaySession * airplaySession;
@property(copy,readonly) NSString * lastKnownPassword;
@property(copy,readonly) NSString * photoVideoDNSName;
@property(copy,readonly) NSString * audioScreenDNSName;
@property(readonly) BOOL photoVideoDNSNameP2POnly;
@property(readonly) BOOL audioScreenDNSNameP2POnly;
@property(readonly) BOOL isPasswordPIN;
@property(readonly) MPAVRoute * avRoute;
@property(readonly) MPAVRoute * avScreenRoute;


- (void).cxx_destruct;
- (id)displayName;
- (id)avScreenRoute;
- (BOOL)isPasswordPIN;
- (BOOL)audioScreenDNSNameP2POnly;
- (BOOL)photoVideoDNSNameP2POnly;
- (id)audioScreenDNSName;
- (id)photoVideoDNSName;
- (id)screenRouteDescription;
- (id)routeDescription;
- (BOOL)isSecondScreenActive;
- (BOOL)isCurrentRoute;
- (BOOL)supportsPhotos;
- (BOOL)supportsMirroring;
- (BOOL)supportsAudio;
- (BOOL)supportsVideo;
- (BOOL)_sameAsAVRoute:(id)arg1;
- (void)_updateFromAVRoutes;
- (BOOL)requiresPassword;
- (id)lastKnownPassword;
- (id)avRoute;
- (void)resignAsCurrentRoute;
- (BOOL)doesAVRouteReferencesSameRoute:(id)arg1;
- (id)initWithAVRoute:(id)arg1;
- (void)updateFromAVRoute:(id)arg1;
- (id)routeUID;
- (id)airplaySession;
- (BOOL)supportsSlideshow;
- (BOOL)isSameRoute:(id)arg1;
- (void)makeRouteCurrentWithCompletion:(id)arg1;
- (BOOL)isDefaultRoute;
- (id)description;

@end
