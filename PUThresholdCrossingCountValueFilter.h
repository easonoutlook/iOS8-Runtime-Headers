/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUThresholdCrossingCountValueFilter : PUValueFilter  {
    int _crossingCount;
    int _maximumCrossingCount;
    double _thresholdValue;
}

@property double thresholdValue;
@property int maximumCrossingCount;


- (double)thresholdValue;
- (void)setMaximumCrossingCount:(int)arg1;
- (int)maximumCrossingCount;
- (void)setThresholdValue:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
