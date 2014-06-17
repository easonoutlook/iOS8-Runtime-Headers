/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings> {
}

@property(readonly) int statusBarStyle;
@property(readonly) BOOL statusBarHidden;
@property(readonly) int defaultStatusBarStyle;
@property(readonly) BOOL defaultStatusBarHidden;
@property(copy,readonly) NSString * defaultPNGName;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) int compatibilityMode;
@property(readonly) BOOL idleTimerDisabled;
@property(readonly) BOOL orientationEnabled;
@property(readonly) unsigned int proximityDetectionModes;
@property(readonly) int controlCenterRevealMode;
@property(readonly) int notificationCenterRevealMode;


- (int)notificationCenterRevealMode;
- (int)controlCenterRevealMode;
- (BOOL)orientationEnabled;
- (BOOL)idleTimerDisabled;
- (double)defaultPNGExpirationTime;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)defaultPNGName;
- (int)compatibilityMode;
- (unsigned int)proximityDetectionModes;
- (int)statusBarStyle;
- (BOOL)statusBarHidden;
- (BOOL)isUISubclass;

@end
