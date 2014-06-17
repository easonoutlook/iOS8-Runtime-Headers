/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, UILabel;

@interface CKTranscriptLabelCell : CKTranscriptCell  {
    BOOL _wantsContactImageLayout;
    UILabel *_label;
}

@property(copy) NSAttributedString * attributedText;
@property BOOL wantsContactImageLayout;
@property(retain) UILabel * label;


- (void)layoutSubviewsForContents;
- (BOOL)wantsContactImageLayout;
- (void)setWantsContactImageLayout:(BOOL)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
