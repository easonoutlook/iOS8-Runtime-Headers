/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPMarginAdjustRep, CALayer;

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {
    CALayer *_separatorLayer;
}

@property(readonly) TPMarginAdjustRep * marginAdjustRep;


- (BOOL)masksToBounds;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layerClass;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)bodyReps;
- (void)showHUDForWPRep:(id)arg1 withFlags:(unsigned int)arg2;
- (id)hitMasterRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)marginAdjustRep;
- (id)p_topmostEditingInfo;
- (void)p_didUpdateLayer:(id)arg1;
- (BOOL)p_pageRequiresSeparator;
- (void)p_updateSeparatorLayer;
- (id)p_hitRep:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (void)p_updateBorderLayers;
- (void)p_updateLayoutBordersVisibility;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)visibleChildLayouts;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (id)childRepsForHitTesting;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)viewScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (void)willBeRemoved;

@end
