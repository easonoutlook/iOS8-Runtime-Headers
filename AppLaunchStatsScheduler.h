/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PCPersistentTimer, NSDate, NSRunLoop, AppLaunchStatsState;

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    boolusefulDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id theCallback;

    AppLaunchStatsState *aplsState;
    int timeZoneSecondsFromGMT;
    NSDate *fireWakeupDate;
    NSDate *startDate;
    NSRunLoop *aplsRunloop;
    PCPersistentTimer *pcpTimer;
}


- (void)generateFireDates;
- (id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(id)arg3;
- (void)programTimer;
- (void)checkTimeZone;
- (void)restore:(id)arg1;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)save:(id)arg1;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;

@end
