/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, NSString, UIColor, NSAttributedString;

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell  {
    UILabel *_titleLabel;
    BOOL _isAttributed;
    BOOL _usesModernStyle;
    UIColor *_textColor;
}

@property(retain) NSString * title;
@property(retain) NSAttributedString * attributedTitle;
@property(readonly) UILabel * _titleLabel;
@property(readonly) BOOL _isAttributed;


- (BOOL)_isAttributed;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (id)attributedTitle;
- (id)_titleLabel;
- (void)prepareForReuse;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4;
- (BOOL)_canBeReusedInPickerView;
- (void)dealloc;

@end
