/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDBB : PLAWDAuxMetrics  {
    BOOL _skipCumulativeNetworkCB;
    PLEntryNotificationOperatorComposition *_bbProtocolRailCallback;
    PLEntryNotificationOperatorComposition *_bbEventCallback;
    PLEntryNotificationOperatorComposition *_accountingGroupEventCallback;
    PLEntryNotificationOperatorComposition *_iceStatsEventCallback;
    NSDate *_startTimeAppBB;
    NSDate *_startTimeBBLqm;
    unsigned int _backSteps;
    unsigned int _upBytes;
    unsigned int _downBytes;
    PLEntryNotificationOperatorComposition *_bbLqmCellularActiveCallback;
    PLEntryNotificationOperatorComposition *_bbLqmCumulativeNetworkCallback;
    unsigned int _currQuality;
}

@property(retain) PLEntryNotificationOperatorComposition * bbProtocolRailCallback;
@property(retain) PLEntryNotificationOperatorComposition * bbEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * accountingGroupEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * iceStatsEventCallback;
@property(retain) NSDate * startTimeAppBB;
@property(retain) NSDate * startTimeBBLqm;
@property unsigned int backSteps;
@property unsigned int upBytes;
@property unsigned int downBytes;
@property BOOL skipCumulativeNetworkCB;
@property(retain) PLEntryNotificationOperatorComposition * bbLqmCellularActiveCallback;
@property(retain) PLEntryNotificationOperatorComposition * bbLqmCumulativeNetworkCallback;
@property unsigned int currQuality;

+ (id)entryAggregateDefinitionAwdBBQlmCounter;
+ (id)entryAggregateDefinitionAwdBBQlm;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (id)bbLqmCellularActiveCallback;
- (id)iceStatsEventCallback;
- (id)accountingGroupEventCallback;
- (void)setBbEventCallback:(id)arg1;
- (id)bbEventCallback;
- (id)bbProtocolRailCallback;
- (void)handleBBRailCallbackOos:(id)arg1;
- (void)handleBBRailCallbackBBTx:(id)arg1;
- (void)handleBBRailCallbackBBICE:(id)arg1;
- (void)handleBBRailCallbackTxUtran:(id)arg1;
- (void)handleBBRailCallbackTxGsm:(id)arg1;
- (void)handleBBRailCallbackTxCdma2K:(id)arg1;
- (void)handleBBRailCallbackTxEvdo:(id)arg1;
- (void)handleBBRailCallbackTxCdma:(id)arg1;
- (void)handleBBRailCallbackTxLte:(id)arg1;
- (void)handleBBRailCallbackLTESleep:(id)arg1;
- (void)handleBBRailCallbackBBProtocol:(id)arg1;
- (void)setIceStatsEventCallback:(id)arg1;
- (void)handleIceStatsCallback:(id)arg1;
- (void)setAccountingGroupEventCallback:(id)arg1;
- (void)handleAcountGroupCallback:(id)arg1;
- (void)setBbProtocolRailCallback:(id)arg1;
- (void)handleBBRailCallbackWrapper:(id)arg1;
- (id)startTimeAppBB;
- (void)setStartTimeAppBB:(id)arg1;
- (void)resetBBLqmCounterTable;
- (void)resetBBLqmTable;
- (id)startTimeBBLqm;
- (unsigned int)backSteps;
- (unsigned int)downBytes;
- (unsigned int)upBytes;
- (unsigned int)currQuality;
- (BOOL)skipCumulativeNetworkCB;
- (id)bbLqmCumulativeNetworkCallback;
- (void)setBbLqmCumulativeNetworkCallback:(id)arg1;
- (void)handleBBLqmCumulativeNetworkCallback:(id)arg1;
- (void)setBbLqmCellularActiveCallback:(id)arg1;
- (void)handleBBLqmCellularActiveCallback:(id)arg1;
- (void)setCurrQuality:(unsigned int)arg1;
- (void)setSkipCumulativeNetworkCB:(BOOL)arg1;
- (void)setDownBytes:(unsigned int)arg1;
- (void)setUpBytes:(unsigned int)arg1;
- (void)setBackSteps:(unsigned int)arg1;
- (void)setStartTimeBBLqm:(id)arg1;
- (void)resetAllBBLqmTables;
- (void)submitBBLqm:(id)arg1 withAwdConn:(id)arg2;
- (void)submitAppBB:(id)arg1 withAwdConn:(id)arg2;
- (void)startBBPower;
- (void)startBBLqm;
- (void)startAppBB;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void).cxx_destruct;

@end
