/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult  {
    float _darknessLevel;
    float _brightnessLevel;
    float _averageLevel;
}

@property(readonly) float darknessLevel;
@property(readonly) float brightnessLevel;
@property(readonly) float averageLevel;


- (id)humanReadableResult;
- (float)averageLevel;
- (float)brightnessLevel;
- (float)darknessLevel;
- (id)initWithDarknessLevel:(float)arg1 brightnessLevel:(float)arg2 averageLevel:(float)arg3;

@end
