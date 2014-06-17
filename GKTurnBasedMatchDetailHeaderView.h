/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSLayoutConstraint, GKTurnBasedMatch, GKTextBubbleControl, NSString, GKLabel;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView  {
    BOOL _compactHeight;
    GKTurnBasedMatch *_match;
    NSString *_infoText;
    id _bubbleTarget;
    SEL _bubbleAction;
    GKTextBubbleControl *_actionBubble;
    GKLabel *_playingWithLabel;
    GKLabel *_startedLabel;
    GKLabel *_lastTurnLabel;
    GKLabel *_infoLabel;
    NSLayoutConstraint *_playingToTopConstraint;
    NSLayoutConstraint *_bubbleToLastConstraint;
}

@property BOOL compactHeight;
@property(retain) GKTurnBasedMatch * match;
@property(retain) NSString * infoText;
@property(retain) NSString * bubbleText;
@property int bubbleType;
@property id bubbleTarget;
@property SEL bubbleAction;
@property(retain) GKTextBubbleControl * actionBubble;
@property(retain) GKLabel * playingWithLabel;
@property(retain) GKLabel * startedLabel;
@property(retain) GKLabel * lastTurnLabel;
@property(retain) GKLabel * infoLabel;
@property(readonly) NSString * playingWithString;
@property NSLayoutConstraint * playingToTopConstraint;
@property NSLayoutConstraint * bubbleToLastConstraint;

+ (BOOL)requiresConstraintBasedLayout;

- (id)infoLabel;
- (id)bubbleToLastConstraint;
- (id)playingToTopConstraint;
- (void)setInfoLabel:(id)arg1;
- (void)setLastTurnLabel:(id)arg1;
- (id)lastTurnLabel;
- (void)setStartedLabel:(id)arg1;
- (id)startedLabel;
- (void)setPlayingWithLabel:(id)arg1;
- (id)playingWithLabel;
- (void)setActionBubble:(id)arg1;
- (id)actionBubble;
- (void)setBubbleAction:(SEL)arg1;
- (SEL)bubbleAction;
- (void)setBubbleTarget:(id)arg1;
- (id)bubbleTarget;
- (id)infoText;
- (id)match;
- (BOOL)compactHeight;
- (void)setInfoText:(id)arg1;
- (void)setBubbleText:(id)arg1;
- (id)bubbleText;
- (void)setMatch:(id)arg1;
- (void)setLabelAlpha:(float)arg1;
- (void)setCompactHeight:(BOOL)arg1;
- (id)playingWithString;
- (void)setBubbleToLastConstraint:(id)arg1;
- (void)setPlayingToTopConstraint:(id)arg1;
- (void)bubblePressed:(id)arg1;
- (void)setBubbleType:(int)arg1;
- (void)establishConstraints;
- (int)bubbleType;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
