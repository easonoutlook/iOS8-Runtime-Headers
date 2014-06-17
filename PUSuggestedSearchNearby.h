/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class CLLocation, CLLocationManager;

@interface PUSuggestedSearchNearby : PUSuggestedSearch  {
    BOOL _cancelled;
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    BOOL _monitoringLocation;
}


- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (void)_stopMonitoringLocation;
- (void)_authorizeOrStartMonitoringLocation;
- (void)_startMonitoringLocation;
- (void)_inqRestart;
- (void)dealloc;
- (id)init;

@end
