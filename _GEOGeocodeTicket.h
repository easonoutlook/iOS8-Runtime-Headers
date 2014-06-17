/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchResponse, GEOGeocodeRequest, GEOMapRegion, GEOMapServiceTraits;

@interface _GEOGeocodeTicket : NSObject <GEOMapServiceTicket, _GEOLegacyMapServiceTicket> {
    GEOGeocodeRequest *_geocodeRequest;
    GEOPlaceSearchResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    BOOL _isForwardGeocode;
}

@property(retain) GEOPlaceSearchResponse * response;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;


- (id)initWithReverseGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)_initWithGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)resultBoundingRegion;
- (BOOL)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (id)request;
- (id)response;
- (id)traits;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (void)setResponse:(id)arg1;

@end
