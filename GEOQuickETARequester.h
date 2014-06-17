/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEODirectionsRouteRequest, GEOETARequest, NSString, GEOQuickETARequest;

@interface GEOQuickETARequester : NSObject  {
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRouteRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

@property(copy) NSString * loggingFacility;


- (void)setLoggingFacility:(id)arg1;
- (id)loggingFacility;
- (void)_calculateRoutingETAWithHandler:(id)arg1;
- (void)_calculateSimpleETAWithHandler:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)calculateETAWithResponseHandler:(id)arg1;
- (void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toPLOI:(id)arg2 handler:(id)arg3;

@end
