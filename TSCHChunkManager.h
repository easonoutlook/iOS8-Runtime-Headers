/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartInfo;

@interface TSCHChunkManager : NSObject  {
    TSCHChartInfo *mChartInfo;
    unsigned int *mSeriesMap;
    unsigned int *mValuesMap;
    unsigned int mChunkMapCount;
}

+ (id)p_allChartDeliveryStylesLocalized:(BOOL)arg1;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(BOOL)arg1;

- (void)clearCaches;
- (void)updateCache:(unsigned int)arg1;
- (void)dealloc;
- (id)containedTextForChartDeliveryStyle:(unsigned int)arg1 chunkIndex:(unsigned int)arg2;
- (BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)p_nameForMultiDataSetCategory:(unsigned int)arg1;
- (id)p_seriesNameForSeriesAtIndex:(unsigned int)arg1 withPrefix:(id)arg2;
- (id)p_backgroundStringForChartWithTitle:(id)arg1;
- (BOOL)p_canAddChunkForSeries:(id)arg1 valueIndex:(int)arg2;
- (void)p_updateCacheForElementsInSets;
- (void)p_updateCacheForElementsInSeries;
- (void)p_updateCacheForSets;
- (void)p_updateCacheForSeries;
- (BOOL)p_isMultiData;
- (BOOL)p_isPie;
- (BOOL)p_legendOn;
- (BOOL)p_titleOn;
- (unsigned int)p_chunkCountForChartDeliveryStyle:(unsigned int)arg1;
- (BOOL)p_hasBackgroundFill;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned int)arg2 chunkIndex:(unsigned int)arg3 finalTexture:(BOOL)arg4 valueStart:(int*)arg5 valueCount:(int*)arg6;
- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned int)arg2 finalTexture:(BOOL)arg3 seriesStart:(int*)arg4 seriesCount:(int*)arg5;
- (BOOL)lastChunkForSeriesIndex:(unsigned int)arg1 currentChunk:(unsigned int)arg2 chunkStyle:(unsigned int)arg3;
- (unsigned int)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (BOOL)hasBackgroundLayerForPieChart;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (unsigned int)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned int)arg1;
- (unsigned int)chunkCountForChartDeliveryStyle:(unsigned int)arg1;
- (id)initWithChartInfo:(id)arg1;

@end