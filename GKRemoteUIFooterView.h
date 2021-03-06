/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter> {
    BOOL _shouldApplyGameCenterTheme;
    GKLabel *_textLabel;
    float _leftMargin;
    float _rightMargin;
    float _bottomMargin;
    float _paragraphMargin;
    int _layoutStyle;
}

@property(retain) GKLabel * textLabel;
@property float leftMargin;
@property float rightMargin;
@property float bottomMargin;
@property float paragraphMargin;
@property BOOL shouldApplyGameCenterTheme;
@property int layoutStyle;


- (id)initWithAttributes:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (int)layoutStyle;
- (void)setBottomMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (float)bottomMargin;
- (float)leftMargin;
- (void)setShouldApplyGameCenterTheme:(BOOL)arg1;
- (BOOL)shouldApplyGameCenterTheme;
- (void)setParagraphMargin:(float)arg1;
- (float)paragraphMargin;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)setTextLabel:(id)arg1;
- (float)rightMargin;
- (id)textLabel;
- (void)setRightMargin:(float)arg1;
- (void)dealloc;

@end
