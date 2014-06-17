/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextStyle;

@interface GKTextField : UITextField <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
}

@property(retain) GKTextStyle * baseStyle;
@property(retain) GKTextStyle * appliedStyle;

+ (void)initialize;

- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)setAppliedStyle:(id)arg1;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (void)replayAndApplyStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
