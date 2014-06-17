/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUTransportControlsViewDelegate>, UIButton, UIButton<MPUTransportButton>;

@interface MPUTransportControlsView : UIView  {
    UIButton<MPUTransportButton> *_leftButton;
    UIButton<MPUTransportButton> *_middleButton;
    UIButton<MPUTransportButton> *_rightButton;
    UIButton *_shuffleButton;
    UIButton *_repeatButton;
    int _substyle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insetsForExpandingButtons;
    BOOL _alwaysLive;
    BOOL _showAccessoryButtons;
    BOOL _showIsPlaying;
    int _style;
    int _availableControls;
    int _disabledControls;
    int _highlightedControls;
    int _controlsAcceptingTapsWhenDisabled;
    int _controlsAcceptingLongPress;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    <MPUTransportControlsViewDelegate> *_delegate;
    double _displayedSkipForwardInterval;
    double _displayedSkipBackwardInterval;
}

@property(readonly) int style;
@property int availableControls;
@property int disabledControls;
@property int highlightedControls;
@property int controlsAcceptingTapsWhenDisabled;
@property int controlsAcceptingLongPress;
@property(getter=isAlwaysLive) BOOL alwaysLive;
@property double displayedSkipForwardInterval;
@property double displayedSkipBackwardInterval;
@property BOOL showAccessoryButtons;
@property unsigned int repeatType;
@property unsigned int shuffleType;
@property BOOL showIsPlaying;
@property <MPUTransportControlsViewDelegate> * delegate;

+ (id)_skipIntervalButtonImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(float)arg4;
+ (id)_stringForDisplayedSkipInterval:(double)arg1;

- (BOOL)showIsPlaying;
- (BOOL)showAccessoryButtons;
- (double)displayedSkipBackwardInterval;
- (double)displayedSkipForwardInterval;
- (int)controlsAcceptingLongPress;
- (int)controlsAcceptingTapsWhenDisabled;
- (int)highlightedControls;
- (int)disabledControls;
- (int)availableControls;
- (void)_animateFadeGlowForButton:(id)arg1;
- (void)_addGlowToButton:(id)arg1;
- (void)_setInsetsForExpandingButtons:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_insetsForExpandingButtons;
- (void)_setSubstyle:(int)arg1;
- (int)_substyle;
- (id)_repeatButton;
- (id)_shuffleButton;
- (id)_rightButton;
- (id)_middleButton;
- (void)setShowIsPlaying:(BOOL)arg1;
- (void)setDisplayedSkipForwardInterval:(double)arg1;
- (void)setDisplayedSkipBackwardInterval:(double)arg1;
- (void)setControlsAcceptingLongPress:(int)arg1;
- (void)setControlsAcceptingTapsWhenDisabled:(int)arg1;
- (void)setHighlightedControls:(int)arg1;
- (void)setDisabledControls:(int)arg1;
- (void)setAvailableControls:(int)arg1;
- (void)setAlwaysLive:(BOOL)arg1;
- (void)_transportControlLongPressEnd:(id)arg1;
- (void)_transportControlLongPressBegin:(id)arg1;
- (id)_accessoryButtonEmphasizedTextAttributes;
- (id)_accessoryButtonTextAttributes;
- (void)_updateMiddleButtonProperties;
- (id)_skipIntervalButtonImageForInterval:(double)arg1;
- (void)_accessoryControlTap:(id)arg1;
- (void)_transportControlTap:(id)arg1;
- (void)_setImage:(id)arg1 forButton:(id)arg2;
- (id)_classBundleImageNamed:(id)arg1;
- (id)_createAccessoryButtonWithStyle:(int)arg1;
- (void)_updateTransportControlLongPressTargetActions;
- (void)_updateTransportControlTapPolicyWhenDisabled;
- (void)_updateTransportControlHighlightedStates;
- (void)_updateTransportControlDisabledStates;
- (struct CGPath { }*)_createGlowPathForButton:(id)arg1;
- (void)_layoutButton:(id)arg1 withNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inExpandedTouchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGSize { float x1; float x2; })_transportControlButtonSize;
- (void)_updateTransportControlButtons;
- (void)setShowAccessoryButtons:(BOOL)arg1;
- (id)_createTransportButtonWithStyle:(int)arg1;
- (void).cxx_destruct;
- (id)_leftButton;
- (id)initWithStyle:(int)arg1;
- (int)style;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (void)setRepeatType:(unsigned int)arg1;
- (unsigned int)shuffleType;
- (unsigned int)repeatType;
- (BOOL)isAlwaysLive;

@end