/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDValueAxis : CHDAxis  {
    boolmPercentageFormattingFlag;
    boolmAutoMajorUnitValue;
    boolmAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
}


- (bool)isPercentageFormattingFlag;
- (void)setPercentageFormattingFlag:(bool)arg1;
- (void)adjustAxisPositionForHorizontalChart;
- (double)scalingLogBase;
- (bool)isAutoMajorUnitValue;
- (double)majorUnitValue;
- (bool)isAutoMinorUnitValue;
- (double)minorUnitValue;
- (void)setScalingLogBase:(double)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (id)initWithResources:(id)arg1;

@end
