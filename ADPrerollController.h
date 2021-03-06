/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ADPrerollView, AVPlayerViewController, ADPlayer, MPMoviePlayerController;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate> {
    AVPlayerViewController *_avPlayerViewController;
    MPMoviePlayerController *_moviePlayerController;
    BOOL _setupInProgress;
    BOOL _isObservingThirdPartyAVPlayer;
    BOOL _isInitiallyEmbedded;
    unsigned int _type;
    ADPrerollView *_view;
    ADPlayer *_adPlayer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(readonly) unsigned int type;
@property AVPlayerViewController * avPlayerViewController;
@property MPMoviePlayerController * moviePlayerController;
@property(retain) ADPrerollView * view;
@property(retain) ADPlayer * adPlayer;
@property BOOL setupInProgress;
@property BOOL isObservingThirdPartyAVPlayer;
@property(copy) id completionHandler;
@property BOOL isInitiallyEmbedded;


- (void)shutdown;
- (void)playPrerollAdWithCompletion:(id)arg1;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned int)arg2;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)actionButtonPressed;
- (void)skipButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (BOOL)prerollViewRequestsEmbeddedStatus;
- (void)setAdPlayer:(id)arg1;
- (void)setIsObservingThirdPartyAVPlayer:(BOOL)arg1;
- (void)_handlePlaybackCompletion:(BOOL)arg1;
- (id)moviePlayerController;
- (BOOL)isInitiallyEmbedded;
- (id)adPlayer;
- (id)avPlayerViewController;
- (BOOL)isObservingThirdPartyAVPlayer;
- (BOOL)_beginPlayback;
- (void)setIsInitiallyEmbedded:(BOOL)arg1;
- (void)setSetupInProgress:(BOOL)arg1;
- (BOOL)setupInProgress;
- (void)setMoviePlayerController:(id)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (id)initWithMoviePlayerController:(id)arg1;
- (id)initWithAVPlayerViewController:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (void)setView:(id)arg1;
- (unsigned int)type;
- (id)view;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;
- (id)_advertisementView;
- (void)doneButtonPressed;

@end
