/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDStroke;

@interface TSTStrokeLayerToken : NSObject <TSTStrokeLayerStrokeAndRange> {
    TSDStroke *_stroke;
    unsigned int _position;
    struct TSTSimpleRange { 
        int origin; 
        unsigned int length; 
    } _range;
}

@property(retain) TSDStroke * stroke;
@property struct TSTSimpleRange { int x1; unsigned int x2; } range;
@property unsigned int position;

+ (id)tokenWithStroke:(id)arg1 range:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 andPosition:(unsigned int)arg3;

- (void)setStroke:(id)arg1;
- (void)setRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (id).cxx_construct;
- (struct TSTSimpleRange { int x1; unsigned int x2; })range;
- (id)stroke;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 range:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 andPosition:(unsigned int)arg3;

@end
