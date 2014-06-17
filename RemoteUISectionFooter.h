/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class <RUITableFooterDelegate>, UIButton, UILabel, NSURL;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    UIButton *_linkButton;
    UILabel *_textLabel;
    int _textAlignment;
    BOOL _usesCustomTextAlignment;
    <RUITableFooterDelegate> *_delegate;
    NSURL *_linkURL;
}

@property <RUITableFooterDelegate> * delegate;
@property(retain) NSURL * linkURL;
@property(readonly) UIButton * linkButton;


- (id)initWithAttributes:(id)arg1;
- (id)linkURL;
- (void)_linkPressed;
- (void)setLinkURL:(id)arg1;
- (id)linkButton;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void).cxx_destruct;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end