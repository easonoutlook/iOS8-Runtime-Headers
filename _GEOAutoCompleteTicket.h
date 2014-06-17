/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSearchRequest, GEOMapServiceTraits;

@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket> {
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property(readonly) GEOMapServiceTraits * traits;


- (id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2;
- (BOOL)matchesFragment:(id)arg1;
- (void)submitWithAutoCompletionHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;
- (void)cancel;
- (id)description;
- (void)dealloc;

@end
