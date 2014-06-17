/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject  {
    MPMusicPlayerControllerServerInternal *_internal;
}

@property(readonly) MPAVController * player;

+ (id)sharedInstance;
+ (BOOL)isMusicPlayerControllerServerRunning;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;

- (id)player;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_runMigServer;

@end
