/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUColor, NSArray;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer> {
}

@property struct CGPoint { float x1; float x2; } startPoint;
@property struct CGPoint { float x1; float x2; } endPoint;
@property struct CGSize { float x1; float x2; } baseNaturalSize;
@property unsigned int gradientType;
@property float opacity;
@property BOOL isAdvancedGradient;
@property(retain) NSArray * gradientStops;
@property(retain) TSUColor * firstColor;
@property(retain) TSUColor * lastColor;


- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1 inShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1 inShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setGradientAngleInDegrees:(float)arg1;
- (void)setGradientType:(unsigned int)arg1;
- (void)setLastColor:(id)arg1;
- (void)setFirstColor:(id)arg1;
- (void)setGradientStops:(id)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg1 toInflection:(float)arg2;
- (void)moveStopAtIndex:(unsigned int)arg1 toFraction:(float)arg2;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)removeStopAtIndex:(unsigned int)arg1;
- (void)removeStop:(id)arg1;
- (id)insertStopAtFraction:(float)arg1 withColor:(id)arg2;
- (void)swapStopAtIndex:(unsigned int)arg1 withStopAtIndex:(unsigned int)arg2;
- (id)insertStopAtFraction:(float)arg1;
- (void)insertGradientStop:(id)arg1;
- (void)setColorOfStopAtIndex:(unsigned int)arg1 toColor:(id)arg2;

@end