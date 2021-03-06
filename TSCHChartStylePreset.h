/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, <TSCHStyleActAlike>, NSString, TSCHChartStyleState;

@interface TSCHChartStylePreset : TSPObject <TSPCopying, TSSPreset, TSCHStyleSwapSupporting> {
    <TSCHStyleActAlike> *mChartStyle;
    <TSCHStyleActAlike> *mLegendStyle;
    NSArray *mValueAxisStyles;
    NSArray *mCategoryAxisStyles;
    NSArray *mSeriesStyles;
    NSArray *mParagraphStyles;
    struct __CFUUID { } *mUUID;
}

@property(readonly) TSCHChartStyleState * chartStyleState;
@property(readonly) <TSCHStyleActAlike> * chartStyle;
@property(readonly) <TSCHStyleActAlike> * legendStyle;
@property(readonly) NSArray * valueAxisStyles;
@property(readonly) NSArray * categoryAxisStyles;
@property(readonly) NSArray * seriesStyles;
@property(readonly) NSArray * paragraphStyles;
@property(readonly) struct __CFUUID { }* uuid;
@property(readonly) NSString * presetKind;

+ (id)p_getDefaultTrendLineStrokeColor:(id)arg1;
+ (id)p_getDefaultTrendLineShadowColor:(id)arg1;
+ (id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2;
+ (void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3;
+ (void)upgradeShadowPropertyForParagraphStyles:(id)arg1;
+ (void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3;

- (id)chartStyle;
- (struct __CFUUID { }*)uuid;
- (id)initWithContext:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)buildSeriesNonStyle;
- (id)swatchImage;
- (BOOL)isEquivalentToPreset:(id)arg1;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6;
- (BOOL)isEquivalentToPreset:(id)arg1 outReasons:(id*)arg2;
- (id)allStyles;
- (id)p_initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 uuid:(struct __CFUUID { }*)arg8;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned int)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7;
- (id)buildAxisNonStyle;
- (id)legendStyle;
- (id)buildLegendNonStyle;
- (id)buildChartNonStyle;
- (id)seriesStyles;
- (id)categoryAxisStyles;
- (id)valueAxisStyles;
- (id)chartStyleState;
- (id)paragraphStyles;
- (BOOL)isThemeEquivalent:(id)arg1;
- (id)presetKind;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
