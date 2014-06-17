/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class AVPlayer, AVPlayerLayer, AVPlayerItem, CKMovieMediaObject, <CKMovieBalloonViewDelegate>;

@interface CKMovieBalloonView : CKImageBalloonView  {
    CKMovieMediaObject *_mediaObject;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property(retain) CKMovieMediaObject * mediaObject;
@property <CKMovieBalloonViewDelegate> * delegate;
@property(setter=setAVPlayerItem:,retain) AVPlayerItem * avPlayerItem;
@property(setter=setAVPlayer:,retain) AVPlayer * avPlayer;
@property(setter=setAVPlayerLayer:,retain) AVPlayerLayer * avPlayerLayer;


- (id)avPlayerItem;
- (void)setAVPlayerLayer:(id)arg1;
- (void)videoDidReachEnd:(id)arg1;
- (void)setAVPlayerItem:(id)arg1;
- (void)cleanupPlayer;
- (id)avPlayerLayer;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)prepareForDisplay;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)description;
- (void)dealloc;
- (void)setAVPlayer:(id)arg1;
- (id)avPlayer;

@end
