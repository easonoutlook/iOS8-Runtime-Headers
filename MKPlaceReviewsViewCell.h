/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImageView, UILabel, UIImage, MKStarRatingAndLabelView, NSString, NSDate;

@interface MKPlaceReviewsViewCell : UITableViewCell  {
    UIImageView *_pictureView;
    MKStarRatingAndLabelView *_starView;
    UILabel *_authorLabel;
    UILabel *_dateLabel;
    UILabel *_reviewLabel;
}

@property UIImage * picture;
@property NSString * author;
@property NSDate * date;
@property NSString * reviewText;
@property unsigned int rating;

+ (id)reuseIdentifier;

- (void)setAuthor:(id)arg1;
- (void)setPicture:(id)arg1;
- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setRating:(unsigned int)arg1;
- (void)setReviewText:(id)arg1;

@end
