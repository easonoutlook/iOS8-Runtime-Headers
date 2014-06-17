/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingUtilities : NSObject  {
}

+ (void)generateSnappedRails:(id)arg1 withRails:(id)arg2 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3 withSnapIntervalLength:(double)arg4 withLoggingArray:(id)arg5;
+ (id)appsInForegroundInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (BOOL)isAirdropInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (BOOL)isAirplayInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (short)BBConditionInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (double)totalEnergyInAccountedBuckets:(id)arg1;
+ (double)snapRails:(id)arg1 withLastSnapTime:(double)arg2 withLoggingArray:(id)arg3;
+ (id)genericPostAccountingQueryEventPointSetup:(id)arg1 withAGName:(id)arg2 withRails:(id)arg3 withAggKey:(id)arg4 withQueryType:(short)arg5;
+ (id)genericPostAccountingQuerySetup:(id)arg1 withAGName:(id)arg2 withRails:(id)arg3 withAggKey:(id)arg4 withQueryType:(short)arg5;
+ (id)genericAccountingQuerySetup:(id)arg1 withAGName:(id)arg2 withRails:(id)arg3 withAggKey:(id)arg4 withQueryType:(short)arg5;
+ (BOOL)wasAppInBackgroundInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 bundleID:(id)arg2;
+ (id)safeTimeForAccounting:(id)arg1;
+ (id)generateSnapRangesForRails:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withSnapIntervalLength:(double)arg3;
+ (id)safeTimeForModelingForRails:(id)arg1 withSnap:(BOOL)arg2;
+ (BOOL)isScreenOnInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (BOOL)isAudioOnInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (BOOL)GPSOnInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
+ (id)createAccountingBucketsForAccountingEvents:(id)arg1 inRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2;


@end