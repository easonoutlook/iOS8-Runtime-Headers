/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel;

@interface CKTranscriptLocationShareCell : UITableViewCell  {
    BOOL _showOfferTimeRemaining;
    UILabel *_timeRemainingLabel;
    double _offerTimeRemaining;
}

@property BOOL showOfferTimeRemaining;
@property double offerTimeRemaining;
@property(retain) UILabel * timeRemainingLabel;

+ (id)identifier;

- (double)offerTimeRemaining;
- (BOOL)showOfferTimeRemaining;
- (id)timeRemainingLabel;
- (void)setTimeRemainingLabel:(id)arg1;
- (void)setOfferTimeRemaining:(double)arg1;
- (void)setShowOfferTimeRemaining:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end