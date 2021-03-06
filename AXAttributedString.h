/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXAttributedString : NSString <NSCopying> {
    struct __CFAttributedString { } *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)arg1;

- (BOOL)hasAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)axAttributedStringDescription;
- (id)coalescedFontAttributes;
- (id)attributeValueForKey:(id)arg1;
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)enumerateAttributesUsingBlock:(id)arg1;
- (void)appendAXAttributedString:(id)arg1;
- (struct __CFAttributedString { }*)cfAttributedString;
- (void)convertAttachmentsWithBlock:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setAttributes:(id)arg1;
- (id)attributesAtIndex:(int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)uppercaseString;
- (id)lowercaseString;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)appendString:(id)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (unsigned int)length;
- (id)description;
- (void)dealloc;
- (void)replaceString:(struct __CFString { }*)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString { }*)arg1;
- (BOOL)isAXAttributedString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

@end
