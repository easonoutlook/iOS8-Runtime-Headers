/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class <GKRemoteUIAuxiliaryViewDelegate>, GKButton, NSArray, NSDictionary, GKLabel;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory> {
    <GKRemoteUIAuxiliaryViewDelegate> *_delegate;
    float _height;
    GKLabel *_label;
    GKLabel *_subLabel;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
    int _layoutStyle;
}

@property <GKRemoteUIAuxiliaryViewDelegate> * delegate;
@property float height;
@property(retain) GKLabel * label;
@property(retain) GKLabel * subLabel;
@property(retain) GKButton * button;
@property(retain) NSDictionary * attributes;
@property(retain) NSArray * replaceableConstraints;
@property int layoutStyle;


- (id)initWithAttributes:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (int)layoutStyle;
- (float)bottomMargin;
- (float)leftMargin;
- (void)setSubLabel:(id)arg1;
- (float)labelTopOffset;
- (float)labelBaselineToButtonBaselineOffset;
- (float)labelBaselineToSubLabelTopOffset;
- (id)subLabel;
- (float)labelBaselineOffset;
- (void)applyConstraints;
- (void)createSubLabelWithAttributes:(id)arg1;
- (void)createLabelWithAttributes:(id)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (id)replaceableConstraints;
- (void)objectModelDidChange:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setHeight:(float)arg1;
- (id)attributes;
- (float)rightMargin;
- (void)setLabel:(id)arg1;
- (float)height;
- (id)label;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)buttonTapped:(id)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)button;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
