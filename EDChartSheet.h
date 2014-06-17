/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart;

@interface EDChartSheet : EDSheet  {
    CHDChart *mMainChart;
    boolmIsBoundsSet;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
}


- (void)setMainChart:(id)arg1;
- (void)addDrawable:(id)arg1;
- (void)teardown;
- (id)mainChart;
- (bool)areBoundsSet;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;

@end