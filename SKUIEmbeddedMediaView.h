/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage, NSString, MPMoviePlayerController, <SKUIEmbeddedMediaViewDelegate>;

@interface SKUIEmbeddedMediaView : UIControl  {
    <SKUIEmbeddedMediaViewDelegate> *_delegate;
    int _mediaType;
    NSString *_mediaURLString;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    BOOL _usingInlinePlayback;
}

@property <SKUIEmbeddedMediaViewDelegate> * delegate;
@property int mediaType;
@property(copy) NSString * mediaURLString;
@property(readonly) int playbackState;
@property BOOL showsThumbnailReflection;
@property int thumbnailContentMode;
@property(retain) UIImage * thumbnailImage;


- (void)_didFinishPlayback:(id)arg1;
- (void)_didExitFullscreen:(id)arg1;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { float x1; float x2; })_sizeToFitImageSize:(struct CGSize { float x1; float x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)thumbnailContentMode;
- (id)_thumbnailView;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (void)_tearDownMoviePlayer;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)endPlaybackAnimated:(BOOL)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setShowsThumbnailReflection:(BOOL)arg1;
- (void)beginPlaybackAnimated:(BOOL)arg1;
- (BOOL)showsThumbnailReflection;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailContentMode:(int)arg1;
- (id)mediaURLString;
- (void)setMediaType:(int)arg1;
- (int)mediaType;
- (id)thumbnailImage;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (int)playbackState;

@end