/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class <CLLocationManagerDelegate>;

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    <CLLocationManagerDelegate> *_delegate;
}

@property <CLLocationManagerDelegate> * delegate;


- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
