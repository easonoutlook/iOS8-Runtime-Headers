/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RUTrackActionsView, _UIBackdropView, <RUTrackActionsDelegate>, NSString, UIImage;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView <RUTrackActioning, RUTrackActionsDelegate> {
    _UIBackdropView *_backdropView;
    RUTrackActionsView *_trackActionsView;
    <RUTrackActionsDelegate> *_trackActionsDelegate;
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

- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (id)trackActioningObject:(id)arg1 localizedTitleForAction:(int)arg2;
- (void)trackActioningObjectDidChangeContentSize:(id)arg1;
- (void)_layoutViewHierarchy;
- (void)_statusBarHeightChanged:(id)arg1;
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
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)artworkImage;
- (void)setArtworkImage:(id)arg1;
- (void).cxx_destruct;
- (void)setPresentingViewController:(id)arg1;
- (void)setModalItem:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
