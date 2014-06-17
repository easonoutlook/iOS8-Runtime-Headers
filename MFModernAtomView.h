/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIActivityIndicatorView, MFModernAtomBackgroundView, UIFont, UILabel, MFModernAtomIconView, UIView, NSString, UIColor;

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling> {
    MFModernAtomIconView *_badgeIconView;
    MFModernAtomIconView *_accessoryIconView;
    UIColor *_effectiveTintColor;
    unsigned int _disabledPresentationOptions;
    UIView *_baselineView;
    MFModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    float _scalingFactor;
    BOOL _isPrimaryAddressAtom;
    BOOL _separatorHidden;
    BOOL _separatorIsLeftAligned;
    BOOL _selected;
    UIFont *_titleFont;
    unsigned int _presentationOptions;
}

@property(copy) NSString * title;
@property(readonly) UILabel * titleLabel;
@property(getter=isSelected) BOOL selected;
@property(readonly) unsigned int effectivePresentationOptions;
@property(readonly) UIColor * effectiveTintColor;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property(readonly) MFModernAtomBackgroundView * backgroundView;
@property(readonly) MFModernAtomIconView * badgeIconView;
@property(readonly) MFModernAtomIconView * accessoryIconView;
@property(readonly) UIActivityIndicatorView * activityIndicator;
@property BOOL isPrimaryAddressAtom;
@property BOOL hidesVIPIndicator;
@property BOOL separatorHidden;
@property BOOL separatorIsLeftAligned;
@property float scale;
@property int separatorStyle;
@property unsigned int presentationOptions;
@property(readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(retain) UIFont * titleFont;

+ (float)horizontalPadding;
+ (id)defaultFont;
+ (float)defaultHeight;
+ (struct CGPoint { float x1; float x2; })defaultBaselinePoint;
+ (id)_badgeImagesForPresentationOptions:(unsigned int)arg1 iconOrder:(const unsigned int*)arg2 orderingLength:(unsigned int)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6;
+ (id)_SMSTintColor;
+ (id)_failureTintColor;
+ (id)_defaultLabelAttributesWithFont:(id)arg1;
+ (id)primaryAtomFont;
+ (id)_defaultLabelAttributes;
+ (id)_defaultTintColor;

- (void)setTitleFont:(id)arg1;
- (unsigned int)presentationOptions;
- (void)setSeparatorHidden:(BOOL)arg1;
- (id)activityIndicator;
- (id)titleFont;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (id)viewForBaselineLayout;
- (int)separatorStyle;
- (id)backgroundView;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorStyle:(int)arg1;
- (id)titleLabel;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setScale:(float)arg1;
- (void)tintColorDidChange;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)title;
- (float)scale;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)badgeIconView;
- (id)accessoryIconView;
- (unsigned int)effectivePresentationOptions;
- (void)clearPresentationOption:(unsigned int)arg1;
- (void)appendPresentationOption:(unsigned int)arg1;
- (void)setPresentationOptions:(unsigned int)arg1;
- (void)setSeparatorIsLeftAligned:(BOOL)arg1;
- (BOOL)separatorIsLeftAligned;
- (void)setHidesVIPIndicator:(BOOL)arg1;
- (BOOL)hidesVIPIndicator;
- (void)setIsPrimaryAddressAtom:(BOOL)arg1;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (float)_leftInset;
- (float)_rightInset;
- (BOOL)separatorHidden;
- (void)_updateFontIfNecessary;
- (float)_rightPadding;
- (float)_leftPadding;
- (float)preferredWidthWithSizeConstraints:(struct CGSize { float x1; float x2; })arg1;
- (void)_setPresentationOption:(unsigned int)arg1 enabled:(BOOL)arg2;
- (void)_updateCompositingFilters;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned int)arg3;
- (void)_updateActivityIndicator;
- (BOOL)isPrimaryAddressAtom;
- (int)_preferredIconVariant;
- (void)_setEffectiveTintColor:(id)arg1;
- (id)effectiveTintColor;
- (void)_invalidatePresentationOptions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 presentationOptions:(unsigned int)arg2 separatorStyle:(int)arg3;
- (id)description;
- (void)dealloc;
- (float)preferredWidth;

@end
