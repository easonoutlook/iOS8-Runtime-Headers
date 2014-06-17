/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion  {
}

@property(readonly) struct { double x1; double x2; } center;
@property(readonly) double radius;

+ (BOOL)supportsSecureCoding;

- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)radius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;

@end