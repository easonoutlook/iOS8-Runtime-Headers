/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDShapeRep, TSDPathSource;

@interface TSDAdjustablePathController : NSObject  {
    TSDShapeRep *mRep;
}

@property(readonly) TSDShapeRep * rep;
@property(readonly) unsigned long long enabledKnobs;
@property(readonly) TSDPathSource * pathSource;


- (void)setGeometry:(id)arg1 previousGeometry:(id)arg2;
- (void)mouseDown:(id)arg1 onControlKnob:(unsigned int)arg2;
- (void)moveControlKnob:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })positionOfKnob:(unsigned int)arg1 transformed:(BOOL)arg2;
- (void)drawBorder;
- (unsigned long long)enabledKnobs;
- (unsigned int)knobUnderPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)pathSource;
- (id)rep;
- (id)initWithRep:(id)arg1;

@end
