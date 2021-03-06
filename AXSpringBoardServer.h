/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSMutableArray;

@interface AXSpringBoardServer : AXServer  {
    AXAccessQueue *_accessQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _currentAlertHandler;

    NSMutableArray *_gestureOverrides;
    NSMutableArray *_actionHandlers;
}

@property(retain) AXAccessQueue * accessQueue;
@property(copy) id currentAlertHandler;
@property(retain) NSMutableArray * gestureOverrides;
@property(retain) NSMutableArray * actionHandlers;

+ (id)server;

- (int)pid;
- (void)setVolume:(float)arg1;
- (id)_axSpringBoardServerInstanceIfExists;
- (id)runningAppProcesses;
- (id)focusedAppProcess;
- (id)frontmostAppProcess;
- (id)applicationWithIdentifier:(id)arg1;
- (BOOL)isSettingsAppFrontmost;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)isSystemAppFrontmost;
- (id)runningAppPIDs;
- (id)focusedAppPID;
- (id)frontmostAppPID;
- (BOOL)isSystemAppShowingAnAlert;
- (id)systemAppInfoWithQuery:(unsigned int)arg1;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (BOOL)isGuidedAccessActive;
- (BOOL)isVoiceControlRunning;
- (void)openVoiceControl;
- (void)setSiriIsTalking:(BOOL)arg1;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (void)dismissSiri;
- (void)openSiri;
- (void)dismissAppSwitcher;
- (void)openAppSwitcher;
- (BOOL)isAppSwitcherVisible;
- (void)showControlCenter:(BOOL)arg1;
- (BOOL)showNotificationCenter:(BOOL)arg1;
- (BOOL)isControlCenterVisible;
- (void)hideNotificationCenter;
- (void)showNotificationCenter;
- (BOOL)isMakingEmergencyCall;
- (void)resumeMedia;
- (void)pauseMedia;
- (BOOL)isMediaPlaying;
- (void)unlockDevice;
- (id)installedApps;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (BOOL)areSystemGesturesDisabledNatively;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (BOOL)isSystemSleeping;
- (void)toggleNotificationCenter;
- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (BOOL)_shouldDispatchLocally;
- (void)copyStringToPasteboard:(id)arg1;
- (int)activeApplicationOrientation;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (void)removeOverrideIntent:(id)arg1;
- (void)removeActionHandler:(id)arg1;
- (void)setShowSpeechPlaybackControls:(BOOL)arg1;
- (void)showAlert:(int)arg1 withHandler:(id)arg2;
- (void)hideAlert;
- (float)volumeLevel;
- (BOOL)isRingerMuted;
- (BOOL)isSideSwitchUsedForOrientation;
- (void)resetDimTimer;
- (BOOL)isOrientationLocked;
- (int)topEventPidOverride;
- (void)startHearingAidServer;
- (void)toggleHearingControl;
- (void)openSCATCommonTasks;
- (void)openSCATCustomGestureCreation;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)takeScreenshot;
- (id)_serviceName;
- (void)registerOverrideIntentForGesture:(unsigned int)arg1 withHandler:(id)arg2 withIdentifierCallback:(id)arg3;
- (void)setCancelGestureActivation:(unsigned int)arg1 cancelEnabled:(BOOL)arg2;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)showAlert:(int)arg1 withHandler:(id)arg2 withData:(id)arg3;
- (void)cleanupAlertHandler;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (BOOL)_shouldValidateEntitlements;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (void)_didConnectToServer;
- (id)actionHandlers;
- (id)gestureOverrides;
- (id)currentAlertHandler;
- (void)setCurrentAlertHandler:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setGestureOverrides:(id)arg1;
- (BOOL)hasActiveCall;
- (int)activeInterfaceOrientation;
- (void)dealloc;
- (id)init;
- (void)setAccessQueue:(id)arg1;
- (id)accessQueue;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isScreenLockedWithPasscode:(BOOL*)arg1;

@end
