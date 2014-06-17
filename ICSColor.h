/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSColor : NSObject <NSCoding> {
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}

+ (id)symbolicColorForLegacyRGB:(id)arg1;
+ (BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4;

- (id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
- (unsigned char)blue;
- (unsigned char)green;
- (unsigned char)red;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
