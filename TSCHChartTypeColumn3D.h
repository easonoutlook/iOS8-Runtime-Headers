/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTypeColumn3D : TSCH3DChartType  {
}


- (id)init;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3 imageScale:(float)arg4 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7;
- (id)userInterfaceName;
- (id)defaultSeriesType:(unsigned int)arg1;
- (struct TSCH3DChartRotationLimit { float x1; float x2; float x3; float x4; })rotation3DLimit;
- (void)setupPresetImageChart:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustChartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPresetImageTarget:(int)arg2;

@end