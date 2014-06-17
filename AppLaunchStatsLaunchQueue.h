/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsLaunchQueue : NSObject <DuetLoggerProtocol> {
    boolpushHigh;
    NSObject<OS_dispatch_queue> *launchQueue;
    long long allowedAppLaunchCap;
    long long wifiChargerDuration;
    unsigned long long scheduleLaunchQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id highPriorityBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id lowPriorityBlock;

    NSDate *lastRetryTrigTime;
    NSMutableArray *whatToLaunchQueue;
    NSMutableArray *trendingQueue;
    NSMutableArray *highPriorityPushQueue;
    NSMutableArray *highPriorityRetryList;
    NSMutableArray *lowPriorityPushQueue;
    NSMutableArray *lowPriorityRetryList;
    NSMutableArray *wifiChargerQueue;
    NSMutableArray *reservationStationList;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id wifiChargerCheck;

    NSDate *ageWifiChargerQueue;
}


- (void)setLaunchCapacity:(unsigned long long)arg1;
- (void)updateWifiChargerDate;
- (void)enableWifiChargerQueue:(id)arg1;
- (bool)refillWifiChargerQueue;
- (void)releaseReservationStation:(id)arg1 seqNum:(long long)arg2;
- (void)doDispatchQueuedLPLaunches;
- (void)doDispatchQueuedLaunches;
- (bool)confirmReservationStation:(id)arg1 seqNum:(long long)arg2 type:(int)arg3 release:(id)arg4;
- (void)addToLowPriorityQueue:(id)arg1 withLaunchBlock:(id)arg2;
- (void)addToHighPriorityQueue:(id)arg1 withLaunchBlock:(id)arg2;
- (bool)wifiChargeQueueAllowedToProceed;
- (int)launchObject:(id)arg1;
- (int)reservationStationsFree;
- (bool)acquireReservationStation:(id)arg1;
- (void)addToLaunchQueue:(id)arg1 withQueueType:(int)arg2 withItem:(id)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void).cxx_destruct;
- (id)init;

@end
