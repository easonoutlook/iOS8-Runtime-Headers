/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCHChartLayoutItem, TSCHChartRootLayoutItem, TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent> {
    TSCHChartLayoutItem *mParent;
    NSArray *mChildren;
    BOOL mTreeBuilt;
    struct CGPoint { 
        float x; 
        float y; 
    } mOffset;
    struct CGSize { 
        float width; 
        float height; 
    } mLayoutSize;
    BOOL mLayoutSizeSet;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mDrawingRectCache;
    BOOL mDrawingRectCacheValid;
    struct CGSize { 
        float width; 
        float height; 
    } mMinSizeCache;
    BOOL mMinSizeCacheValid;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mOverhangRectCache;
    BOOL mOverhangRectCacheValid;
}

@property(readonly) TSCHChartLayoutItem * parent;
@property(readonly) TSCHChartRootLayoutItem * root;
@property(readonly) TSCHChartInfo * chartInfo;
@property(readonly) TSCHChartModel * model;
@property struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; } layoutSettings;
@property(readonly) struct CGSize { float x1; float x2; } minSize;
@property struct CGPoint { float x1; float x2; } layoutOffset;
@property struct CGSize { float x1; float x2; } layoutSize;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } layoutRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rootedLayoutRect;
@property(readonly) struct CGPoint { float x1; float x2; } drawingOffset;
@property(readonly) struct CGSize { float x1; float x2; } drawingSize;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rootedDrawingRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } overhangRect;
@property(readonly) BOOL isInResize;
@property(readonly) struct CGSize { float x1; float x2; } startingSize;
@property(readonly) unsigned int dataSetIndex;

+ (id)chartLayoutWithChartInfo:(id)arg1;

- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (id)parent;
- (id)initWithParent:(id)arg1;
- (id)root;
- (struct CGSize { float x1; float x2; })drawingSize;
- (struct CGSize { float x1; float x2; })layoutSize;
- (id)model;
- (struct CGSize { float x1; float x2; })minSize;
- (struct CGPoint { float x1; float x2; })drawingOffset;
- (id)description;
- (void)dealloc;
- (float)overhangMagnitudeForEdge:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })overhangSize;
- (struct CGPoint { float x1; float x2; })overhangOffset;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearMinSize;
- (void)p_iterateChildrenWithBlock:(id)arg1;
- (BOOL)stopIteratingItemsContainingPoint:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })overhangRect;
- (void)clearOverhangRect;
- (void)clearDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id)arg2;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (void)clearLayoutSize;
- (void)buildSubTree;
- (id)p_description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (unsigned int)dataSetIndex;
- (void)layoutUsingMethod:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingRect;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)hitChartElements:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rootedLayoutRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rootedDrawingRect;
- (id)mutationTuplesToApplyDuringResize;
- (id)renderersWithRep:(id)arg1;
- (void)setLayoutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (struct CGSize { float x1; float x2; })startingSize;
- (BOOL)isInResize;
- (struct CGPoint { float x1; float x2; })layoutOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutRect;
- (void)clearAll;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })layoutSettings;
- (void)clearParent;
- (id)chartInfo;
- (void)setLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg1;

@end
