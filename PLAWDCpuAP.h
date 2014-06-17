/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLOperator, PLEntryNotificationOperatorComposition, NSMutableSet, NSDate;

@interface PLAWDCpuAP : PLAWDAuxMetrics  {
    PLEntryNotificationOperatorComposition *_apEventCallback;
    PLEntryNotificationOperatorComposition *_monitorEventCallback;
    PLEntryNotificationOperatorComposition *_railEventCallback;
    PLEntryNotificationOperatorComposition *_wakeEventCallback;
    NSDate *_startTime;
}

@property PLOperator * operator;
@property(retain) NSMutableSet * runningMetrics;
@property(retain) PLEntryNotificationOperatorComposition * apEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * monitorEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * railEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * wakeEventCallback;
@property(retain) NSDate * startTime;

+ (id)entryAggregateDefinitionAwdCpu;
+ (id)entryAggregateDefinitionAwdAp;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (id)wakeEventCallback;
- (id)railEventCallback;
- (id)monitorEventCallback;
- (id)apEventCallback;
- (void)setWakeEventCallback:(id)arg1;
- (void)handleWakeCallback:(id)arg1;
- (void)setRailEventCallback:(id)arg1;
- (void)handleAPRailCallback:(id)arg1;
- (void)setMonitorEventCallback:(id)arg1;
- (void)handleMonitorCallback:(id)arg1;
- (void)setApEventCallback:(id)arg1;
- (void)handleApCallback:(id)arg1;
- (BOOL)submitCpuDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (BOOL)submitApDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)startCpuMetricCollection:(id)arg1;
- (void)startApMetricCollection:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (id)startTime;
- (void).cxx_destruct;
- (void)setStartTime:(id)arg1;

@end
