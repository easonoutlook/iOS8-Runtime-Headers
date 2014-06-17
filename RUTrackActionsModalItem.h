/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTrackActionsDelegate>, UIImage, NSString, _RUTrackActionsModalItemContentView;

@interface RUTrackActionsModalItem : _UIModalItem <RUTrackActioning> {
    _RUTrackActionsModalItemContentView *_contentView;
}

@property(copy) NSString * artistText;
@property(retain) UIImage * artworkImage;
@property(readonly) int cancelIndex;
@property(readonly) struct CGSize { float x1; float x2; } contentSize;
@property <RUTrackActionsDelegate> * trackActionsDelegate;
@property int enabledActions;
@property int onActions;
@property(copy) NSString * songText;

+ (struct CGSize { float x1; float x2; })artworkSize;

- (void)dismissAnimated:(BOOL)arg1 withSelectedAction:(int)arg2 atIndex:(int)arg3;
- (void)setTrackActionsDelegate:(id)arg1;
- (id)trackActionsDelegate;
- (id)songText;
- (void)setSongText:(id)arg1;
- (void)setOnActions:(int)arg1;
- (void)setEnabledActions:(int)arg1;
- (void)setArtistText:(id)arg1;
- (int)onActions;
- (int)enabledActions;
- (int)cancelIndex;
- (id)artistText;
- (int)actionForButtonIndex:(int)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (id)artworkImage;
- (void)setArtworkImage:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)_contentView;
- (void)dealloc;
- (id)init;

@end
