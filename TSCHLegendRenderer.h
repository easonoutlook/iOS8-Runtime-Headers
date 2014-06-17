/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendRenderer : TSCHRenderer  {
    struct CGPoint { 
        float x; 
        float y; 
    } _textEditingPixelAlignmentOffset;
}

@property struct CGPoint { float x1; float x2; } textEditingPixelAlignmentOffset;


- (struct CGPoint { float x1; float x2; })textEditingPixelAlignmentOffset;
- (void)p_drawLabelForCell:(id)arg1 intoContext:(struct CGContext { }*)arg2 rangePtr:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)p_drawBadgeForCell:(id)arg1 intoContext:(struct CGContext { }*)arg2;
- (id)p_selectionPathForCell:(id)arg1;
- (void)p_drawDefaultBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_draw3DLineBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawPieBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawLineAreaBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setTextEditingPixelAlignmentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1;

@end
