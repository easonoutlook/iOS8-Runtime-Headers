/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStarRatingView, NSString, UILabel, NSArray;

@interface MKStarRatingAndLabelView : UIView  {
    MKStarRatingView *_starRatingView;
    UILabel *_reviewsLabel;
    NSString *_sourceName;
    unsigned int _numberOfReviews;
    BOOL _displaysSourceOfReviews;
    NSArray *_reviewsLabelConstraints;
}

@property(readonly) MKStarRatingView * starRatingView;
@property(readonly) UILabel * reviewsLabel;
@property unsigned int numberOfReviews;
@property(retain) NSString * sourceName;


- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (unsigned int)numberOfReviews;
- (void)setNumberOfReviews:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)viewForBaselineLayout;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (id)reviewsLabel;
- (void)setDisplaysSourceOfReviews:(BOOL)arg1;
- (void)_updateFonts;
- (void)_setStarStyle:(int)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (id)starRatingView;

@end
