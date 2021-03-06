/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class CMDeviceOrientationManager, NSOperationQueue, _VTLockscreenPolicy;

@interface _VTFacedownGesturePolicy : _VTStatePolicy  {
    CMDeviceOrientationManager *_whichWayMan;
    BOOL _isOrienting;
    unsigned char _orientationState;
    _VTLockscreenPolicy *_lockscreenPolicy;
    NSOperationQueue *_opQueue;
}


- (void)_handleOrientation:(id)arg1;
- (void)_registerForOrientationUpdates;
- (void)_unregisterForScreenEvents;
- (void)screenEventObserved:(struct __CFString { }*)arg1;
- (void)_registerForScreenEvents;
- (void)_unregisterForOrientationUpdates;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (void)dependencyUpdated:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)reload;
- (void)dealloc;

@end
