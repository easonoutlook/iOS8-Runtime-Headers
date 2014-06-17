/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLCFNotificationOperatorComposition;

@interface PLVideoAgent : PLAgent  {
    PLCFNotificationOperatorComposition *_VRPFinalized;
    PLCFNotificationOperatorComposition *_VRPPaused;
    PLCFNotificationOperatorComposition *_VRPPlaying;
    PLCFNotificationOperatorComposition *_VRPCreated;
}

@property(readonly) PLCFNotificationOperatorComposition * VRPFinalized;
@property(readonly) PLCFNotificationOperatorComposition * VRPPaused;
@property(readonly) PLCFNotificationOperatorComposition * VRPPlaying;
@property(readonly) PLCFNotificationOperatorComposition * VRPCreated;

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;

- (id)VRPCreated;
- (id)VRPPlaying;
- (id)VRPPaused;
- (id)VRPFinalized;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end
