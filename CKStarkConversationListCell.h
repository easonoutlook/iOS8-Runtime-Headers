/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView, UILabel, UIImage, UIDateLabel, NSDate, NSString;

@interface CKStarkConversationListCell : UITableViewCell  {
    UIImage *_monogramImage;
    UIImageView *_unreadImageView;
    UILabel *_recipientsLabel;
    UIDateLabel *_dateLabel;
}

@property BOOL hasUnreadMessages;
@property(retain) NSDate * date;
@property(retain) NSString * recipientNames;
@property UIImage * monogramImage;
@property(retain) UIImageView * unreadImageView;
@property(retain) UILabel * recipientsLabel;
@property(retain) UIDateLabel * dateLabel;


- (void)setRecipientsLabel:(id)arg1;
- (void)setUnreadImageView:(id)arg1;
- (void)setMonogramImage:(id)arg1;
- (id)monogramImage;
- (id)recipientsLabel;
- (id)unreadImageView;
- (void)setRecipientNames:(id)arg1;
- (void)setHasUnreadMessages:(BOOL)arg1;
- (id)dateLabel;
- (void)setDate:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDateLabel:(id)arg1;
- (void)dealloc;

@end
