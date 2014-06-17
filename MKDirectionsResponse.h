/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, MKMapItem, GEODirectionsResponse, NSString, GEORoute, NSURL;

@interface MKDirectionsResponse : NSObject  {
    GEODirectionsResponse *_geoResponse;
    MKMapItem *_source;
    MKMapItem *_destination;
    NSArray *_routes;
    struct CGImage { } *_routeImage;
    struct CGImage { } *_incidentImage;
}

@property(readonly) MKMapItem * source;
@property(readonly) MKMapItem * destination;
@property(readonly) NSArray * routes;
@property(retain,readonly) NSURL * _mapsURL;
@property(retain,readonly) GEODirectionsResponse * _geoResponse;
@property(retain,readonly) GEORoute * _route;
@property(readonly) struct CGImage { }* _incidentImage;
@property(retain,readonly) NSString * _incidentDescription;
@property(readonly) double _typicalTrafficRatio;

+ (id)_responseWithGEOResponse:(id)arg1 request:(id)arg2 origin:(id)arg3 destination:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)destination;
- (id)source;
- (id)routes;
- (void)dealloc;
- (id)_geoResponse;
- (id)_mapsURL;
- (id)_incidentDescription;
- (struct CGImage { }*)_incidentImage;
- (struct CGImage { }*)_routeImage;
- (id)_route;
- (double)_typicalTrafficRatio;
- (id)_initWithGEOResponse:(id)arg1 request:(id)arg2 origin:(id)arg3 destination:(id)arg4;
- (id)_stitchRoute:(id)arg1 routesDict:(id)arg2;
- (id)_completeRoutesFrom:(id)arg1;

@end