/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_canvas;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_viewBox;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } m_viewBoxTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } m_worldToDeviceTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } m_combinedTransform;
}

+ (int)getROP:(id)arg1;

- (int)activateTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)updateViewBoxTransform;
- (void)concatTransforms;
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(BOOL)arg3 stroke:(BOOL)arg4;
- (int)plgBlt:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned int)arg12;
- (int)maskBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned int)arg12 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg13 :(unsigned int)arg14;
- (int)stretchBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned int)arg11 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg12 :(unsigned int)arg13;
- (int)bitBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned int)arg9 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg10 :(unsigned int)arg11;
- (int)patBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned int)arg6;
- (id)createBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned int)arg7;
- (id)createDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(const char *)arg4 :(unsigned int)arg5 :(int)arg6;
- (id)createDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (int)setMetaRgn;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)removeClip;
- (id)createRegionWithPath:(id)arg1;
- (id)createFont:(int)arg1;
- (id)createPen;
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (id)createPen:(int)arg1 :(int)arg2 :(id)arg3 :(double*)arg4;
- (id)createFontIndirectW:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21 :(unsigned int)arg22;
- (id)createFont:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;
- (id)createNullBrush;
- (id)createHatchBrush:(id)arg1 :(int)arg2;
- (id)createSolidBrush:(id)arg1;
- (id)createRegionWithRects:(id)arg1 :(id)arg2;
- (int)roundRect:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;
- (int)bezier:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)bezierTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;
- (int)chord:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)arcTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)angleArc:(id)arg1 :(int)arg2 :(int)arg3 :(unsigned int)arg4 :(double)arg5 :(double)arg6;
- (int)pie:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)arc:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)polyPolyline:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int*)arg3 :(int)arg4;
- (int)polyline:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int)arg3;
- (int)polyPolygon:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int*)arg3 :(int)arg4;
- (int)polygon:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int)arg3;
- (int)lineTo:(id)arg1 :(double)arg2 :(double)arg3;
- (int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (int)ellipse:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (int)rectangle:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (int)extTextOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int*)arg10 :(int)arg11;
- (int)textOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getCanvas;
- (id)createPath;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id).cxx_construct;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)dealloc;

@end
