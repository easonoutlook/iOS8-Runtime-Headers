/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIView, UILabel;

@interface CKTranscriptRecipientsHeaderFooterView : UITableViewHeaderFooterView  {
    UILabel *_headerLabel;
    UILabel *_preceedingSectionFooterLabel;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

@property(retain) UILabel * headerLabel;
@property(retain) UILabel * preceedingSectionFooterLabel;
@property(retain) UIView * topSeparator;
@property(retain) UIView * bottomSeparator;

+ (id)identifier;

- (id)bottomSeparator;
- (void)setBottomSeparator:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (id)preceedingSectionFooterLabel;
- (void)setPreceedingSectionFooterLabel:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
