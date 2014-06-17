/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, CHDSeriesCollection, CHDDataLabel, CHDChart;

@interface CHDChartType : NSObject  {
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    boolmVaryColors;
}

+ (bool)is3DType;
+ (id)chartTypeWithChart:(id)arg1;

- (unsigned int)categoryCount;
- (id)axisForClass:(Class)arg1;
- (id)defaultTitleWithResources:(id)arg1;
- (bool)isVaryColors;
- (void)setSeriesCollection:(id)arg1;
- (unsigned int)seriesCount;
- (bool)isPlotedOnSecondaryAxis;
- (int)defaultLabelPosition;
- (void)setDefaultDataLabel:(id)arg1;
- (id)axisIds;
- (void)setVaryColors:(bool)arg1;
- (id)initWithChart:(id)arg1;
- (id)chart;
- (id)defaultDataLabel;
- (id)seriesCollection;
- (id)axes;
- (id)contentFormat;
- (bool)isHorizontal;
- (void)dealloc;

@end
