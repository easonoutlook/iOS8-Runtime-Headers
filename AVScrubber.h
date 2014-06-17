/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVLoadedTimeRangesView, UIImageView, NSArray, NSString;

@interface AVScrubber : UISlider  {
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    UIImageView *_thumbView;
    float _touchLocationOffsetFromThumbViewCenter;
    float _beginTouchLocationInViewY;
    int _scrubbingSpeed;
}

@property(retain) NSArray * loadedTimeRanges;
@property(getter=isPreciseScrubbingFeasible,readonly) BOOL preciseScrubbingFeasible;
@property(readonly) NSString * localizedScrubbingSpeedName;
@property int scrubbingSpeed;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;

- (void)setLoadedTimeRanges:(id)arg1;
- (id)loadedTimeRanges;
- (void).cxx_destruct;
- (void)_initSubviews;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrubbingSpeed:(int)arg1;
- (int)scrubbingSpeed;
- (BOOL)isPreciseScrubbingFeasible;
- (id)localizedScrubbingSpeedName;

@end