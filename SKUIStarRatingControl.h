/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl  {
    int _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
    int _userRating;
}

@property(retain) UIImage * emptyStarsImage;
@property(retain) UIImage * filledStarsImage;
@property int userRating;


- (id)filledStarsImage;
- (id)emptyStarsImage;
- (void)_updateUserRatingWithTouch:(id)arg1;
- (void)setFilledStarsImage:(id)arg1;
- (void)setEmptyStarsImage:(id)arg1;
- (int)userRating;
- (void)setUserRating:(int)arg1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;

@end
