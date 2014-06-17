/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLCFNotificationOperatorComposition;

@interface PLLocationAgent : PLAgent  {
    PLCFNotificationOperatorComposition *_appStatusChangedNotification;
    PLCFNotificationOperatorComposition *_techStatusChangedNotification;
}

@property(retain) PLCFNotificationOperatorComposition * appStatusChangedNotification;
@property(retain) PLCFNotificationOperatorComposition * techStatusChangedNotification;

+ (id)bundleIdFromBundlePath:(id)arg1;
+ (id)entryEventNoneDefinitionClientStatusDebug;
+ (id)entryEventForwardDefinitionClientStatus;
+ (id)entryEventForwardDefinitionTechStatus;
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

- (void)setTechStatusChangedNotification:(id)arg1;
- (id)techStatusChangedNotification;
- (void)setAppStatusChangedNotification:(id)arg1;
- (id)appStatusChangedNotification;
- (void)logEventNoneClientStatus;
- (void)createLocationAccountingGroups:(id)arg1;
- (id)readClientCacheForClient:(id)arg1 andType:(id)arg2 forEntryKey:(id)arg3;
- (void)logEventNoneClientStatusDebugWithClients:(id)arg1;
- (void)updateClientCacheForClient:(id)arg1 andType:(id)arg2 forEntry:(id)arg3;
- (void)modelGPSICEPower:(id)arg1;
- (id)humanReadableNameForTechnology:(id)arg1;
- (void)logEventForwardTechStatus;
- (void)logEventForwardClientStatus;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end
