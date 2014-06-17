/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIButton, GKTurnBasedMatch, GKTurnBasedParticipant, UIImageView, GKContiguousContainerView, GKLabel;

@interface GKTurnParticipantCell : GKBasePlayerCell  {
    BOOL _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    SEL _detailPressedAction;
    GKLabel *_topLabel;
    GKLabel *_bottomLabel;
    UIButton *_detailButton;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
}

@property(retain) GKTurnBasedMatch * match;
@property(retain) GKTurnBasedParticipant * participant;
@property SEL detailPressedAction;
@property BOOL isDetail;
@property(retain) GKLabel * topLabel;
@property(retain) GKLabel * bottomLabel;
@property(retain) UIButton * detailButton;
@property(retain) UIImageView * statusImageView;
@property(retain) GKContiguousContainerView * textContainerView;

+ (float)defaultRowHeight;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)detailButton;
- (void)setBottomLabel:(id)arg1;
- (id)bottomLabel;
- (void)setTopLabel:(id)arg1;
- (id)topLabel;
- (void)setIsDetail:(BOOL)arg1;
- (BOOL)isDetail;
- (SEL)detailPressedAction;
- (id)viewForPopover;
- (void)setDetailPressedAction:(SEL)arg1;
- (BOOL)matchWantsLocalPlayerAttention;
- (void)configureForMatch;
- (void)configureForDetail;
- (void)detailPressed:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (id)textContainerView;
- (void)setStatusImageView:(id)arg1;
- (id)statusImageView;
- (void)setTextContainerView:(id)arg1;
- (id)match;
- (void)setMatch:(id)arg1;
- (void)establishConstraints;
- (void)didUpdateModel;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
