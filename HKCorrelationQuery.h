/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, _HKFilter, NSSet, NSPredicate;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClient> {
    NSSet *_types;
    NSPredicate *_samplePredicate;
    _HKFilter *_dataFilter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(readonly) NSArray * types;
@property(readonly) NSPredicate * samplePredicate;

+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (void)_configureServerInterface:(id)arg1;
+ (void)_configureClientInterface:(id)arg1;

- (void)_validate;
- (void).cxx_destruct;
- (id)types;
- (id)samplePredicate;
- (id)initWithTypes:(id)arg1 predicate:(id)arg2 samplePredicate:(id)arg3 completion:(id)arg4;
- (void)deliverCorrelations:(id)arg1 forQuery:(id)arg2;
- (id)_predicateFilterClasses;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(BOOL)arg2;
- (void)_deliverError:(id)arg1;

@end
