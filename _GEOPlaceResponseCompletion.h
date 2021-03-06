/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, GEOPlaceSearchResponse;

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion> {
    GEOPlaceSearchResponse *_response;
    NSArray *_groups;
}

@property(readonly) NSArray * groups;


- (id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3;
- (id)metadata;
- (id)response;
- (id)description;
- (void)dealloc;
- (id)groups;

@end
