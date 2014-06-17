/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject  {
    float _greatestScreenScale;
    GKEventEmitter *_emitter;
}

@property(readonly) float greatestScreenScale;
@property(retain) GKEventEmitter * emitter;

+ (float)_scaleForCurrentDisplayConfiguration;
+ (id)sharedController;

- (void)_screensDidChange:(id)arg1;
- (float)greatestScreenScale;
- (id)emitter;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)setEmitter:(id)arg1;
- (void)dealloc;
- (id)init;

@end