/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent  {
    FBSSceneSettingsDiff *_settings;
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain) FBSSceneSettingsDiff * settingsDiff;
@property(retain) FBSSceneTransitionContext * transitionContext;


- (id)settingsDiff;
- (void)setSettingsDiff:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void)dealloc;

@end
