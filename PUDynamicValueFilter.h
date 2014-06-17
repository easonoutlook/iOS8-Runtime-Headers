/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDynamicValueFilter : PUValueFilter  {
    double _targetValue;
    double _currentTime;
}

@property double targetValue;
@property double currentTime;


- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)_update;
- (double)outputValueChangeRate;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;
- (double)targetValue;
- (void)setTargetValue:(double)arg1;
- (double)outputValue;
- (void)setInputValue:(double)arg1;
- (id)init;

@end
