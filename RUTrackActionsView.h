/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class _RUTrackActionsHeaderView, <RUTrackActionsDelegate>, UITableView, NSString, UIImage;

@interface RUTrackActionsView : UIView <UITableViewDataSource, UITableViewDelegate, RUTrackActioning> {
    _RUTrackActionsHeaderView *_headerView;
    UITableView *_tableView;
    BOOL _presentedInPopover;
    int _enabledActions;
    int _onActions;
    <RUTrackActionsDelegate> *_trackActionsDelegate;
}

@property(getter=isPresentedInPopover) BOOL presentedInPopover;
@property(copy) NSString * artistText;
@property(retain) UIImage * artworkImage;
@property(readonly) int cancelIndex;
@property(readonly) struct CGSize { float x1; float x2; } contentSize;
@property <RUTrackActionsDelegate> * trackActionsDelegate;
@property int enabledActions;
@property int onActions;
@property(copy) NSString * songText;

+ (struct CGSize { float x1; float x2; })artworkSize;

- (BOOL)isPresentedInPopover;
- (void)setPresentedInPopover:(BOOL)arg1;
- (void)_updateHeaderViewHeight;
- (void)_didChangeContentSize;
- (struct UIOffset { float x1; float x2; })_accessoryImageOffsetForAction:(int)arg1;
- (id)_accessoryImageForAction:(int)arg1 highlighted:(BOOL)arg2;
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
- (id)_titleForAction:(int)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)artworkImage;
- (void)setArtworkImage:(id)arg1;
- (void).cxx_destruct;
- (void)tableViewDidFinishReload:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end