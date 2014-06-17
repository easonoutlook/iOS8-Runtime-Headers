/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayerController;

@interface AVRemoteCommandController : NSObject  {
    AVPlayerController *_playerController;
}

@property(retain) AVPlayerController * playerController;


- (void)setPlayerController:(id)arg1;
- (id)playerController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;
- (void)_updateRegisteredRemoteCommandEnabledStates;
- (int)_handleRemoteCommandEvent:(id)arg1;

@end