/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer  {
    FigCaptionLayerPrivate *_priv;
}


- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)setFontName:(const char *)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
