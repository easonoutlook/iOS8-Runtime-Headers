/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfNoteExporter : KNPdfExporter  {
    BOOL mIsPrintingNote;
}


- (BOOL)incrementPage;
- (BOOL)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 createPage:(BOOL)arg4;
- (id)currentInfos;

@end