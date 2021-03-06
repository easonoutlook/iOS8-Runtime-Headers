/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer  {
}


- (id)symbolTransformsForRenderingElements;
- (void)p_finishContextAfterRendering:(struct CGContext { }*)arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(BOOL)arg3;
- (void)p_renderLabelsIntoContext:(struct CGContext { }*)arg1 seriesIndex:(unsigned int)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 valueSet:(id)arg6;
- (void)p_clipOutSymbolsInContext:(struct CGContext { }*)arg1 withTransformArray:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 withCount:(unsigned int)arg3 forSeries:(id)arg4;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_adjustTransformForAADefeatInContext:(struct CGContext { }*)arg1 inTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 forSeriesShape:(struct CGPath { }*)arg3 inBodyBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)p_setupContextForRendering:(struct CGContext { }*)arg1 layerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(BOOL*)arg5;
- (BOOL)useBlendModeCopyForTransparencyLayer;
- (id)p_findChartRootLayoutItem:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)chunkPlane;

@end
