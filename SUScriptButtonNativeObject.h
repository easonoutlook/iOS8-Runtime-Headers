/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject  {
    BOOL _loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

@property(getter=isShowingConfirmation,readonly) BOOL showingConfirmation;
@property(readonly) int buttonType;
@property(getter=isLoading) BOOL loading;
@property(retain) NSString * subtitle;
@property(readonly) NSString * systemItemString;
@property int tag;
@property(retain) NSString * title;
@property(getter=isEnabled) BOOL enabled;
@property(retain) UIImage * image;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property(getter=isBackButton,readonly) BOOL backButton;
@property(readonly) NSString * styleString;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (id)systemItemString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setStyleFromString:(id)arg1;
- (void)connectButtonAction;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (BOOL)isBackButton;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (id)initWithSystemItemString:(id)arg1;
- (BOOL)isShowingConfirmation;
- (void)setLoading:(BOOL)arg1;
- (void)buttonAction:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (int)buttonType;
- (BOOL)isLoading;
- (void)setSubtitle:(id)arg1;
- (id)styleString;
- (id)subtitle;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;

@end
