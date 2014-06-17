/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation  {
    struct CGColor { } *_highLightColor;
}


- (int)annotationType;
- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned int)arg4;
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned int)arg4;
- (BOOL)recognizeGestures;
- (Class)viewClass;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;

@end
