/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {
    NSString *_pattern;
    unsigned int _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

@property(copy,readonly) NSString * pattern;
@property(readonly) unsigned int options;
@property(readonly) unsigned int numberOfCaptureGroups;

+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)escapedTemplateForString:(id)arg1;
+ (id)escapedPatternForString:(id)arg1;

- (id)pattern;
- (id)initWithPattern:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)numberOfMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)firstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (unsigned int)replaceMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 withTemplate:(id)arg4;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(int)arg3 template:(id)arg4;
- (id)matchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)options;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 usingBlock:(id)arg4;
- (unsigned int)numberOfCaptureGroups;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 withTemplate:(id)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfFirstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

@end
