/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMPedometerProxy;

@interface CMPedometer : NSObject  {
    CMPedometerProxy *_pedometerProxy;
}

@property(readonly) CMPedometerProxy * pedometerProxy;

+ (BOOL)isStairCountingAvailable;
+ (BOOL)isDistanceAvailable;
+ (BOOL)isFloorCountingAvailable;
+ (BOOL)isStepCountingAvailable;

- (void)dealloc;
- (id)init;
- (void)queryPedometerDataSinceRecord:(int)arg1 withHandler:(id)arg2;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesStartingFromDate:(id)arg1 withHandler:(id)arg2;
- (void)queryPedometerDataStartingFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id)arg2;
- (id)pedometerProxy;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;

@end
