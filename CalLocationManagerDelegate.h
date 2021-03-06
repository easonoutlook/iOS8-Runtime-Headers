/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocation, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    BOOL _didFinish;
}

@property(retain) CLLocation * currentLocation;
@property(copy) id completionBlock;
@property BOOL didFinish;


- (void)timeout;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)setDidFinish:(BOOL)arg1;
- (BOOL)didFinish;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)startTimer;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (id)initWithQueue:(id)arg1;
- (void)stopTimer;
- (void)dealloc;
- (void)setCurrentLocation:(id)arg1;
- (id)currentLocation;

@end
