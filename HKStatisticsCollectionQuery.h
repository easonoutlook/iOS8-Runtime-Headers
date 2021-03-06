/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HKStatisticsCollection, NSDate, NSNumber, NSDateComponents;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClient> {
    NSDate *_anchorDate;
    unsigned int _options;
    NSDateComponents *_intervalComponents;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _initialResultsHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _statisticsUpdateHandler;

    NSNumber *_lastAnchor;
    HKStatisticsCollection *_statisticsCollection;
}

@property(readonly) NSDate * anchorDate;
@property(readonly) unsigned int options;
@property(readonly) NSDateComponents * intervalComponents;
@property(copy) id initialResultsHandler;
@property(copy) id statisticsUpdateHandler;
@property(retain) NSNumber * lastAnchor;
@property(retain) HKStatisticsCollection * statisticsCollection;

+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (void)_validate;
- (void).cxx_destruct;
- (unsigned int)options;
- (id)lastAnchor;
- (id)initialResultsHandler;
- (id)intervalComponents;
- (id)anchorDate;
- (void)setStatisticsUpdateHandler:(id)arg1;
- (void)setInitialResultsHandler:(id)arg1;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned int)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (void)_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id)statisticsCollection;
- (void)setStatisticsCollection:(id)arg1;
- (void)setLastAnchor:(id)arg1;
- (id)statisticsUpdateHandler;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (BOOL)_shouldStayAliveAfterInitialResults;
- (void)_cleanupAfterDeactivation;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(BOOL)arg2;
- (void)_deliverError:(id)arg1;

@end
