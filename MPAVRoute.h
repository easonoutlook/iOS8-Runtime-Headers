/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoute, NSString, NSDictionary;

@interface MPAVRoute : NSObject  {
    NSString *_routeName;
    BOOL _picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    int _displayRouteType;
    BOOL _requiresPassword;
    NSString *_routeUID;
    int _routeType;
    int _pickableRouteType;
    int _routeSubtype;
}

@property(readonly) BOOL rc_shouldExpectFaceContact;
@property(readonly) int rc_audioRouteType;
@property(readonly) NSString * routeName;
@property(readonly) NSString * routeUID;
@property(readonly) int routeType;
@property(readonly) int pickableRouteType;
@property(readonly) int routeSubtype;
@property(readonly) MPAVRoute * wirelessDisplayRoute;
@property(getter=isPicked,readonly) BOOL picked;
@property(readonly) BOOL requiresPassword;
@property(readonly) BOOL displayIsPicked;
@property(readonly) int displayRouteType;


- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)wirelessDisplayRoute;
- (BOOL)isPicked;
- (BOOL)requiresPassword;
- (id)avRouteDescription;
- (id)routeName;
- (int)pickableRouteType;
- (int)routeSubtype;
- (int)routeType;
- (id)routeUID;
- (id)description;
- (void)dealloc;
- (void)setDisplayRouteType:(int)arg1;
- (int)displayRouteType;
- (void)setAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (void)setRouteName:(id)arg1;
- (id)_initWithAVRouteDescription:(id)arg1;
- (BOOL)displayIsPicked;
- (BOOL)rc_shouldExpectFaceContact;
- (int)rc_audioRouteType;

@end