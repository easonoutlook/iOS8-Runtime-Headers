/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocation, PCPersistentTimer, CLLocationManager, EKTravelAgendaItem;

@interface EKTravelAdvisorRealWorld : NSObject <EKTravelAdvisorWorld, CLLocationManagerDelegate> {
    CLLocationManager *_geofenceLocationManager;
    CLLocationManager *_pollingLocationManager;
    BOOL _geofenceUsingSignificantLocationUpdates;
    PCPersistentTimer *_persistentTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _geofenceHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alarmHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationAuthorizationHandler;

    CLLocation *_geofenceInitialLocation;
    CLLocation *_locationInitialLocation;
    EKTravelAgendaItem *_agendaItem;
}

@property EKTravelAgendaItem * agendaItem;


- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)alarmFired:(id)arg1;
- (void)goIntoHibernation;
- (void)setGeofenceWithRadius:(double)arg1 block:(id)arg2;
- (void)disableGeofence;
- (void)disableAlarm;
- (void)getCurrentLocationWithAccuracy:(double)arg1 block:(id)arg2;
- (id)mostRecentLocationSeen;
- (void)setAlarmIn:(double)arg1 block:(id)arg2;
- (void)comeOutOfHibernation;
- (void)setLocationAuthorizationChangeCallback:(id)arg1;
- (void)setAgendaItem:(id)arg1;
- (id)agendaItem;
- (id)now;

@end
