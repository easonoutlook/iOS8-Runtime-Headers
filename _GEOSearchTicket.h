/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchResponse, GEOSearchRequest, GEOMapRegion, NSString, GEOMapServiceTraits;

@interface _GEOSearchTicket : NSObject <GEOMapServiceSearchTicket, _GEOLegacyMapServiceTicket> {
    GEOSearchRequest *_searchRequest;
    GEOPlaceSearchResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
}

@property(retain) GEOPlaceSearchResponse * response;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;
@property(readonly) NSString * searchQuery;


- (id)initWithSearchRequest:(id)arg1 traits:(id)arg2;
- (id)resultBoundingRegion;
- (BOOL)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)searchQuery;
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
