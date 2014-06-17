/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView  {
    NSArray *_labelsAndValues;
    float _idealHeight;
    int _sizesCount;
    struct CGSize { float x1; float x2; } *_sizes;
}


- (void)_recalculateIdealHeight;
- (void)setLabelsAndValues:(id)arg1;
- (id)_valueFont;
- (id)_labelFont;
- (void).cxx_destruct;
- (float)rowHeight;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end