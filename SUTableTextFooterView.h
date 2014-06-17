/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, UIColor, UIFont;

@interface SUTableTextFooterView : UIView  {
    UIFont *_font;
    UIColor *_shadowColor;
    int _textAlignment;
    UIColor *_textColor;
    NSArray *_textLines;
}

@property(retain) UIFont * font;
@property(retain) UIColor * shadowColor;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(retain) NSArray * textLines;


- (id)textLines;
- (void)setTextLines:(id)arg1;
- (int)textAlignment;
- (id)textColor;
- (id)font;
- (id)shadowColor;
- (void)sizeToFit;
- (void)setShadowColor:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
