/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDAffineGeometry, NSMutableString;

@interface GQHCanvasContext : NSObject <GQHContext> {
    GQDAffineGeometry *mGeometry;
    NSMutableString *mFunctionName;
    BOOL mHasFill;
    BOOL mHasStroke;
    struct __CFString { } *mBezierStr;
}


- (void)dealloc;
- (void)translate:(struct CGSize { float x1; float x2; })arg1 state:(id)arg2;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (void)setImageFill:(struct __CFURL { }*)arg1 srcSize:(struct CGSize { float x1; float x2; })arg2 mode:(int)arg3 state:(id)arg4;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)teardownContext:(id)arg1;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)setCGPath:(struct CGPath { }*)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)prepareContext:(id)arg1;
- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 neighboringCP:(struct CGPoint { float x1; float x2; })arg4 filledPath:(struct CGPath {}**)arg5 strokedPath:(struct CGPath {}**)arg6;
- (struct GQHPathEndPointInfo { BOOL x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGPoint { float x_5_1_1; float x_5_1_2; } x5; int x6; })endPointInfoForPath:(struct CGPath { }*)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)createShapeWithId:(struct __CFString { }*)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)createMaskedImageWithId:(struct __CFString { }*)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath { }*)arg6 graphicStyle:(id)arg7 isFloating:(BOOL)arg8 state:(id)arg9;

@end
