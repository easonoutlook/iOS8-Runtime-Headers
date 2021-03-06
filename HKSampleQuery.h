/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface HKSampleQuery : HKQuery  {
    unsigned int _limit;
    NSArray *_sortDescriptors;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resultHandler;

    NSMutableArray *_results;
}

@property(readonly) unsigned int limit;
@property(readonly) NSArray * sortDescriptors;

+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (void)_configureServerInterface:(id)arg1;
+ (void)_configureClientInterface:(id)arg1;

- (unsigned int)limit;
- (void)_validate;
- (void).cxx_destruct;
- (id)sortDescriptors;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 sortDescriptors:(id)arg4 resultsHandler:(id)arg5;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(BOOL)arg2;
- (void)deliverResultsBatch:(id)arg1 final:(BOOL)arg2 error:(id)arg3 forQueryUUID:(id)arg4 confirmationBlock:(id)arg5;
- (void)_deliverError:(id)arg1;

@end
