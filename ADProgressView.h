/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADPrerollSlider, UILabel;

@interface ADProgressView : UIView  {
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    ADPrerollSlider *_slider;
}

@property(retain) UILabel * elapsedTimeLabel;
@property(retain) UILabel * remainingTimeLabel;
@property(retain) ADPrerollSlider * slider;


- (id)slider;
- (void)setSlider:(id)arg1;
- (id)remainingTimeLabel;
- (void)setRemainingTimeLabel:(id)arg1;
- (id)elapsedTimeLabel;
- (void)setElapsedTimeLabel:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
