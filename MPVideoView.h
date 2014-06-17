/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, MPAVController, NSString;

@interface MPVideoView : UIView  {
    MPAVController *_player;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    NSString *_videoID;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    unsigned int _scaleMode;
}

@property MPAVController * player;
@property(retain) NSString * movieSubtitle;
@property(retain) NSString * movieTitle;
@property(copy) NSString * videoID;
@property double startTime;
@property double stopTime;
@property(readonly) BOOL canChangeScaleMode;
@property unsigned int scaleMode;
@property(readonly) unsigned int effectiveScaleMode;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieContentFrame;
@property(retain) NSDictionary * AVURLAssetOptions;

+ (Class)layerClass;

- (id)player;
- (double)stopTime;
- (void)setStopTime:(double)arg1;
- (double)startTime;
- (void).cxx_destruct;
- (void)setStartTime:(double)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)scaleMode;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (void)setAVURLAssetOptions:(id)arg1;
- (id)AVURLAssetOptions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieFrame;
- (unsigned int)effectiveScaleMode;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (void)setScaleMode:(unsigned int)arg1 duration:(float)arg2;
- (void)prepareAVControllerQueue;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (BOOL)canChangeScaleMode;
- (id)videoID;
- (id)moviePath;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setVideoID:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (id)movieTitle;
- (id)movieSubtitle;
- (void)play;

@end
