/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSTimer;

@interface SWBasicFakeRunSensorDelegate : NSObject <SWFakeRunSensorDelegate> {
    NSTimer *_packetTimer;
    BOOL _firstPacketDelivered;
    unsigned char _payload[28];
    struct SDARunState { 
        unsigned int sdaContactTime256X; 
        unsigned int sdaContactTimeDelta256X; 
        unsigned int sdaRunStepCnt; 
        unsigned int sdaRunStepCntDelta; 
        unsigned int sdaRunTstcCnt; 
        unsigned int sdaRunTstcCntDelta; 
        unsigned int sdaRunContactTimeMin256X; 
        unsigned int sdaRunContactTimeMax256X; 
    } _runState;
}


- (void)cancelSearchingForFakeSensor:(id)arg1;
- (void)beginSearchingForFakeSensor:(id)arg1;
- (void)cancelLinkingForFakeSensor:(id)arg1;
- (void)beginLinkingForFakeSensor:(id)arg1;
- (unsigned int)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1;
- (void)_updatePayload;
- (void)_fakeNextPacketForTimer:(id)arg1;
- (void)_schedulePacketTimerForFakeSensor:(id)arg1;
- (void)dealloc;
- (id)init;

@end