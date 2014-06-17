/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSDate, NSObject<OS_dispatch_queue>, _VTLockscreenPolicy, _VTSiriEnabledPolicy, _VTSiriUIPolicy, _VTBatteryPolicy, NSMutableSet, _VTFacedownGesturePolicy, _VTSpringBoardStartedPolicy, _VTVoiceTriggerEnabledPolicy;

@interface VTStateManagerSingleton : NSObject  {
    NSMutableSet *_instances;
    NSObject<OS_dispatch_queue> *_queue;
    _VTSpringBoardStartedPolicy *_springboardPolicy;
    _VTBatteryPolicy *_batteryPolicy;
    _VTFacedownGesturePolicy *_facedownPolicy;
    _VTLockscreenPolicy *_lockscreenPolicy;
    _VTSiriEnabledPolicy *_siriEnabledPolicy;
    _VTSiriUIPolicy *_siriUIPolicy;
    _VTVoiceTriggerEnabledPolicy *_vtEnabledPolicy;
    BOOL _voiceTriggerIsEnabled;
    NSDate *_uptimer;
}

+ (id)singleton;
+ (void)initialize;

- (BOOL)_enabledByAssertion;
- (BOOL)_onBattery;
- (void)unregister:(id)arg1;
- (void)register:(id)arg1;
- (void)_powerlog:(id)arg1;
- (void)_stateTransitionDidOccur:(BOOL)arg1;
- (void)_logUptime;
- (void)_sbsEventObserved:(struct __CFString { }*)arg1;
- (void)_handlePolicyUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;

@end
