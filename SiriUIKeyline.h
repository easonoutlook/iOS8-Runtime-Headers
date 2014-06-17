/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class UIColor, UIView;

@interface SiriUIKeyline : UIView  {
    UIView *_keyLineView;
    BOOL _veritical;
    int _keylineType;
    float _customLeftPadding;
    float _customRightPadding;
    UIColor *_customBackgroundColor;
}

@property int keylineType;
@property float customLeftPadding;
@property float customRightPadding;
@property(retain) UIColor * customBackgroundColor;
@property(getter=_isVeritical,setter=_setVertical:) BOOL veritical;

+ (id)starkKeyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)verticalKeyline;
+ (id)keyline;
+ (id)keylineWithKeylineType:(int)arg1;

- (void)_setVertical:(BOOL)arg1;
- (BOOL)_isVeritical;
- (void)setCustomRightPadding:(float)arg1;
- (void)setCustomLeftPadding:(float)arg1;
- (float)customRightPadding;
- (float)customLeftPadding;
- (float)_keylineWidthForType:(int)arg1;
- (id)_keylineColorForType:(int)arg1;
- (id)initWithKeylineType:(int)arg1;
- (int)keylineType;
- (void)setKeylineType:(int)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end