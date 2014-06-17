/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle, TSCHPropertyValueStorageContainer, NSArray, TSCHLegendStyle, TSWPShapeStyle, TSCHChartStyle;

@interface TSCHStylePasteboardData : TSSStyle  {
    TSCHPropertyValueStorageContainer *mStyleNetwork;
    BOOL mEntireChart;
    TSWPParagraphStyle *mInteropParagraphStyle;
    TSWPShapeStyle *mInteropShapeStyle;
}

@property(retain) TSCHChartStyle * chartStyle;
@property(retain) TSCHLegendStyle * legendStyle;
@property(copy) NSArray * valueAxisStyles;
@property(copy) NSArray * categoryAxisStyles;
@property(copy) NSArray * seriesStyles;
@property(copy) NSArray * paragraphStyles;
@property(retain) TSWPParagraphStyle * interopParagraphStyle;
@property(retain) TSWPShapeStyle * interopShapeStyle;
@property BOOL entireChart;

+ (id)properties;

- (id)chartStyle;
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (void)setEntireChart:(BOOL)arg1;
- (void)setInteropShapeStyle:(id)arg1;
- (id)interopShapeStyle;
- (void)setInteropParagraphStyle:(id)arg1;
- (id)chartStyleStateWithMapper:(id)arg1;
- (id)pasteboardDescription;
- (id)interopParagraphStyle;
- (void)setSeriesStyles:(id)arg1;
- (BOOL)entireChart;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setValueAxisStyles:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (id)allStyles;
- (void)setParagraphStyles:(id)arg1;
- (id)legendStyle;
- (id)seriesStyles;
- (id)categoryAxisStyles;
- (id)valueAxisStyles;
- (id)paragraphStyles;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
