/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOPlace, NSString;

@interface MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {
    GEOPlace *_place;
    NSString *_distanceToPlace;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateHandler;

}

@property(retain) GEOPlace * place;
@property(copy) id updateHandler;

+ (BOOL)infoAvailable;

- (id)place;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)setPlace:(id)arg1;
- (void).cxx_destruct;
- (void)endUpdates;
- (id)updateHandler;
- (void)setUpdateHandler:(id)arg1;
- (void)dealloc;
- (void)_updateDistanceToPlace;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (void)beginUpdateWithHandler:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;

@end
