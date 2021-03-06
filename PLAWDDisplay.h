/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLEntryNotificationOperatorComposition, PLOperator, NSMutableSet, NSDate, NSMutableDictionary;

@interface PLAWDDisplay : PLAWDAuxMetrics  {
    BOOL _prevDisplayOn;
    BOOL _prevDeviceCharging;
    BOOL _prevMieOn;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    PLEntryNotificationOperatorComposition *_backlightEventCallback;
    PLEntryNotificationOperatorComposition *_alsUserPreferencesEventCallback;
    PLEntryNotificationOperatorComposition *_batteryEventCallback;
    PLEntryNotificationOperatorComposition *_backlightRailCallback;
    PLEntryNotificationOperatorComposition *_touchEventCallback;
    long _prevBklBucketIdx;
    struct __IOReportSubscriptionCF { } *_subscription;
    struct __CFDictionary { } *_subscribedChannels;
    NSMutableDictionary *_lastReading;
    NSDate *_startRailTime;
    double _displayOnTimeStamp;
    double _mieOnTimeStamp;
    double _bklTimeStamp;
    double _prevBklChgTimeStamp;
    long long _startTouchEntryId;
}

@property PLOperator * operator;
@property(retain) NSMutableSet * runningMetrics;
@property(retain) PLEntryNotificationOperatorComposition * displayEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * backlightEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * alsUserPreferencesEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * batteryEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * backlightRailCallback;
@property(retain) PLEntryNotificationOperatorComposition * touchEventCallback;
@property BOOL prevDisplayOn;
@property double displayOnTimeStamp;
@property BOOL prevDeviceCharging;
@property BOOL prevMieOn;
@property double mieOnTimeStamp;
@property double bklTimeStamp;
@property long prevBklBucketIdx;
@property double prevBklChgTimeStamp;
@property long long startTouchEntryId;
@property struct __IOReportSubscriptionCF { }* subscription;
@property struct __CFDictionary { }* subscribedChannels;
@property(retain) NSMutableDictionary * lastReading;
@property(retain) NSDate * startRailTime;

+ (id)entryAggregateDefinitionAwdDisplayAndAls;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (struct __CFDictionary { }*)subscribedChannels;
- (struct __IOReportSubscriptionCF { }*)subscription;
- (id)touchEventCallback;
- (id)backlightRailCallback;
- (id)alsUserPreferencesEventCallback;
- (id)backlightEventCallback;
- (void)reInitDisplayBacklightAlsStats;
- (void)finalizeDisplayAlsTable;
- (double)mieOnTimeStamp;
- (double)bklTimeStamp;
- (void)setPrevBklChgTimeStamp:(double)arg1;
- (double)prevBklChgTimeStamp;
- (void)updateMieMetrics:(BOOL)arg1;
- (void)updateDisplayMetrics:(BOOL)arg1 withState:(BOOL)arg2;
- (id)startRailTime;
- (double)displayOnTimeStamp;
- (void)updateDisplayIdlePercentage:(BOOL)arg1 withDuration:(double)arg2;
- (id)lastReading;
- (long)getUAmpsBucket:(long)arg1;
- (long)getLuxBucket:(long)arg1;
- (long)prevBklBucketIdx;
- (void)setBklTimeStamp:(double)arg1;
- (long)getBklbucketIdx:(long)arg1 withLux:(long)arg2;
- (void)setMieOnTimeStamp:(double)arg1;
- (BOOL)prevMieOn;
- (void)setDisplayOnTimeStamp:(double)arg1;
- (void)addEntryToDisplayAlsTable:(id)arg1 withValue:(double)arg2;
- (void)setStartRailTime:(id)arg1;
- (void)resetDisplayAlsTable;
- (void)setPrevBklBucketIdx:(long)arg1;
- (void)setPrevMieOn:(BOOL)arg1;
- (void)setPrevDisplayOn:(BOOL)arg1;
- (long long)startTouchEntryId;
- (void)setStartTouchEntryId:(long long)arg1;
- (BOOL)prevDisplayOn;
- (void)setLastReading:(id)arg1;
- (void)setSubscribedChannels:(struct __CFDictionary { }*)arg1;
- (void)setSubscription:(struct __IOReportSubscriptionCF { }*)arg1;
- (void)setTouchEventCallback:(id)arg1;
- (void)handleTouchCallback:(id)arg1;
- (void)initTouchStats;
- (void)setBacklightRailCallback:(id)arg1;
- (void)handleBacklightRailCallback:(id)arg1;
- (void)setAlsUserPreferencesEventCallback:(id)arg1;
- (void)handleAlsUserPreferencesCallback:(id)arg1;
- (void)setBacklightEventCallback:(id)arg1;
- (void)handleBacklightCallback:(id)arg1;
- (void)initChannelForDispIdleStats;
- (void)initDisplayBacklightAlsStats;
- (id)displayEventCallback;
- (id)batteryEventCallback;
- (BOOL)prevDeviceCharging;
- (void)setPrevDeviceCharging:(BOOL)arg1;
- (void)setDisplayEventCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)setBatteryEventCallback:(id)arg1;
- (void)handleBatteryCallback:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void).cxx_destruct;

@end
