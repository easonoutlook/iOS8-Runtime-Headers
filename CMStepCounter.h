/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMStepCounterProxy;

@interface CMStepCounter : NSObject  {
    CMStepCounterProxy *_stepcounterProxy;
}

@property BOOL enabled;
@property(readonly) BOOL everRequested;
@property(readonly) CMStepCounterProxy * stepcounterProxy;

+ (BOOL)isStepCountingAvailable;

- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)dealloc;
- (id)init;
- (BOOL)everRequested;
- (void)deleteHistory;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(id)arg2;
- (void)stopStepCountingUpdates;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(int)arg2 withHandler:(id)arg3;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(id)arg4;
- (id)stepcounterProxy;

@end
