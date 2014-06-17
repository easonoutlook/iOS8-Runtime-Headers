/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSByteCountFormatter : NSFormatter  {
    unsigned int _allowedUnits;
    BOOL _countStyle;
    BOOL _allowsNonnumericFormatting;
    BOOL _includesUnit;
    BOOL _includesCount;
    BOOL _includesActualByteCount;
    BOOL _adaptive;
    BOOL _zeroPadsFractionDigits;
    int _reserved[6];
}

@property unsigned int allowedUnits;
@property int countStyle;
@property BOOL allowsNonnumericFormatting;
@property BOOL includesUnit;
@property BOOL includesCount;
@property BOOL includesActualByteCount;
@property(getter=isAdaptive) BOOL adaptive;
@property BOOL zeroPadsFractionDigits;
@property int formattingContext;

+ (id)stringFromByteCount:(long long)arg1 countStyle:(int)arg2;

- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (unsigned long long)_options;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)stringFromByteCount:(long long)arg1;
- (void)setZeroPadsFractionDigits:(BOOL)arg1;
- (void)setIncludesActualByteCount:(BOOL)arg1;
- (void)setCountStyle:(int)arg1;
- (void)setIncludesCount:(BOOL)arg1;
- (void)setIncludesUnit:(BOOL)arg1;
- (void)setAllowsNonnumericFormatting:(BOOL)arg1;
- (void)setAdaptive:(BOOL)arg1;
- (BOOL)zeroPadsFractionDigits;
- (BOOL)isAdaptive;
- (BOOL)includesActualByteCount;
- (BOOL)includesCount;
- (BOOL)includesUnit;
- (BOOL)allowsNonnumericFormatting;
- (int)countStyle;
- (unsigned int)allowedUnits;
- (void)setAllowedUnits:(unsigned int)arg1;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (int)formattingContext;
- (void)setFormattingContext:(int)arg1;

@end
