/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapServiceTraits, GEOMapRegion, NSArray;

@interface _GEOMUIDsTicket : NSObject <GEOMapServiceTicket> {
    NSArray *_muids;
    int _localSearchProviderID;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property(getter=isCanceled,readonly) BOOL canceled;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;


- (BOOL)isCanceled;
- (id)initWithMUIDs:(id)arg1 localSearchProviderID:(int)arg2 traits:(id)arg3;
- (id)resultBoundingRegion;
- (BOOL)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (id)traits;
- (void)cancel;
- (id)description;
- (void)dealloc;

@end
