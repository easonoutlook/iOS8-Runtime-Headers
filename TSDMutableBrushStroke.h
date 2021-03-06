/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDMutableBrushStroke : TSDBrushStroke  {
}

@property(copy) TSUColor * color;
@property float width;
@property float actualWidth;
@property int cap;
@property int join;
@property float miterLimit;
@property(copy) TSDStrokePattern * pattern;
@property(copy) NSString * strokeName;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end
