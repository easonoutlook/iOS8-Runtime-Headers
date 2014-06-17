/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>, NSXPCConnection, NSObject<OS_dispatch_queue>, CLLocationManagerRoutine;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _updating;
    NSXPCConnection *_connection;
    <CLLocationManagerDelegate> *_delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(retain) NSXPCConnection * connection;
@property <CLLocationManagerDelegate> * delegate;
@property CLLocationManagerRoutine * locationManagerRoutine;
@property BOOL updating;


- (void)setConnection:(id)arg1;
- (id)connection;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (BOOL)updating;
- (void)didUpdateLocations:(id)arg1;
- (id)locationManagerRoutine;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)createConnection;

@end