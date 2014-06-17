/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSString, PLEntryNotificationOperatorComposition;

@interface PLBluetoothAgent : PLAgent  {
    BOOL keepSessionAlive;
    struct BTSessionImpl { } *session;
    struct BTLocalDeviceImpl { } *localBluetoothDevice;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSString *_btHardwareChipset;
}

@property(retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property(readonly) NSString * btHardwareChipset;

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

- (void)bluetoothDeviceEvent:(int)arg1 onDevice:(struct BTLocalDeviceImpl { }*)arg2 withResult:(int)arg3;
- (void)bluetoothSessionEvent:(int)arg1 onSession:(struct BTSessionImpl { }*)arg2 withResult:(int)arg3;
- (BOOL)bluetoothPresent;
- (id)btHardwareChipsetQuery;
- (void)modelBluetoothPower:(id)arg1;
- (id)btHardwareChipset;
- (BOOL)nikePowered;
- (BOOL)modulePowered;
- (BOOL)isConnectable;
- (BOOL)isDiscoverable;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventIntervalConnectedDevices;
- (void)logEventForwardPairedDevices;
- (void)logEventForwardDeviceState;
- (void)sessionTerminated:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)sessionAttached:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (struct BTLocalDeviceImpl { }*)localBluetoothDevice;
- (void)attachSession;
- (id)batteryLevelChanged;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (void)dealloc;
- (id)init;
- (BOOL)isConnected;

@end