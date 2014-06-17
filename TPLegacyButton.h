/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImageView, NSString;

@interface TPLegacyButton : UIButton  {
    UIImageView *_plusSeparator;
    int _color;
    NSString *_plusSeparatedTitle;
    BOOL _forceReLayout;
    BOOL _currentlyLayingOut;
    BOOL _useStandardSizing;
}

@property BOOL useStandardSizing;

+ (id)acceptVideoButtonImage;
+ (id)answerButtonImage;
+ (id)declineVideoButtonImage;
+ (id)declineButtonImage;
+ (float)defaultHeightForColor:(int)arg1;
+ (float)defaultHeight;

- (void)setUseStandardSizing:(BOOL)arg1;
- (BOOL)useStandardSizing;
- (void)_setDisabledButtonColor:(int)arg1;
- (void)_adjustIconColor;
- (void)_setButtonColor:(int)arg1;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setTitleVerticalOffset:(float)arg1;
- (void)setIconVerticalOffset:(float)arg1;
- (void)setTitleImagePadding:(float)arg1;
- (void)setMinimumTitleFontSize:(float)arg1 maximumTitleFontSize:(float)arg2;
- (void)setMinimumTitleFontSize:(float)arg1;
- (void)setButtonColor:(int)arg1;
- (void)setPlusSeparatedTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (int)buttonColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
