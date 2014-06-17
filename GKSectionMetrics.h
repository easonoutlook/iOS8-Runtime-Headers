/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSDictionary;

@interface GKSectionMetrics : GKGridLayoutMetrics  {
    BOOL _incrementalRevealConsumesPadding;
    BOOL _shouldAlwaysIncludeShowMore;
    unsigned int _alignment;
    float _lineSpacing;
    float _interitemSpacing;
    float _marginBetweenItems;
    float _desiredItemWidth;
    float _flowColumnWidth;
    float _desiredItemHeight;
    NSDictionary *_itemHeightList;
    unsigned int _lastLineItemAlignment;
    unsigned int _maximumVisibleItemCount;
    unsigned int _incrementalRevealItemCount;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _padding;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property unsigned int alignment;
@property float lineSpacing;
@property float interitemSpacing;
@property float marginBetweenItems;
@property float desiredItemWidth;
@property float flowColumnWidth;
@property float desiredItemHeight;
@property(readonly) float calculatedItemHeight;
@property(retain) NSDictionary * itemHeightList;
@property unsigned int lastLineItemAlignment;
@property unsigned int maximumVisibleItemCount;
@property unsigned int incrementalRevealItemCount;
@property float sectionHeaderHeight;
@property float showMoreHeight;
@property BOOL sectionHeadersShouldPin;
@property BOOL incrementalRevealConsumesPadding;
@property BOOL shouldAlwaysIncludeShowMore;

+ (id)metricsForIdiom:(int)arg1;

- (BOOL)shouldAlwaysIncludeShowMore;
- (BOOL)incrementalRevealConsumesPadding;
- (unsigned int)lastLineItemAlignment;
- (float)desiredItemHeight;
- (float)flowColumnWidth;
- (float)desiredItemWidth;
- (float)marginBetweenItems;
- (struct CGSize { float x1; float x2; })itemSizeForCollectionView:(id)arg1;
- (BOOL)sectionHeadersShouldPin;
- (void)setShowMoreHeight:(float)arg1;
- (float)showMoreHeight;
- (void)setMarginBetweenItems:(float)arg1;
- (void)setShouldAlwaysIncludeShowMore:(BOOL)arg1;
- (void)setIncrementalRevealConsumesPadding:(BOOL)arg1;
- (void)setIncrementalRevealItemCount:(unsigned int)arg1;
- (void)setMaximumVisibleItemCount:(unsigned int)arg1;
- (void)setLastLineItemAlignment:(unsigned int)arg1;
- (void)setItemHeightList:(id)arg1;
- (void)setFlowColumnWidth:(float)arg1;
- (void)setDesiredItemWidth:(float)arg1;
- (id)initWithIdiom:(int)arg1;
- (float)calculatedItemHeight;
- (void)setSectionHeadersShouldPin:(BOOL)arg1;
- (void)setDesiredItemHeight:(float)arg1;
- (unsigned int)maximumVisibleItemCount;
- (unsigned int)incrementalRevealItemCount;
- (id)localDescription;
- (id)itemHeightList;
- (void)setLineSpacing:(float)arg1;
- (float)lineSpacing;
- (unsigned int)alignment;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (float)sectionHeaderHeight;
- (void)setSectionHeaderHeight:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAlignment:(unsigned int)arg1;
- (float)interitemSpacing;
- (void)setInteritemSpacing:(float)arg1;
- (void)dealloc;
- (id)init;

@end
