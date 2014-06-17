/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRouteRequest : GEODirectionsRequest  {
}


- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (id)initWithFeedback:(id)arg1;
- (Class)responseClass;
- (id)init;
- (id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 withFeedback:(id)arg4;
- (void)_commonSetup:(id)arg1;
- (void)fetchDirectionsWithCompletion:(id)arg1;
- (id)initWithRoutineRoute:(id)arg1;
- (id)initWithZilch:(id)arg1 departure:(double)arg2;
- (id)initWithOrigin:(id)arg1 andDestination:(id)arg2 departure:(double)arg3;
- (id)initWithDeparture:(double)arg1;

@end