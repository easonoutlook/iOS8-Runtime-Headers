/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColor : NSObject <NSCoding, NSCopying> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (id)stringRepresentation;
- (struct CGColorSpace { }*)colorSpace;
- (const float*)components;
- (float)blue;
- (float)green;
- (float)red;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithString:(id)arg1;
- (struct CGColor { }*)cgColor;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)numberOfComponents;
- (float)alpha;
- (struct CGColor { }*)CGColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)initWithColor:(id)arg1;

@end
