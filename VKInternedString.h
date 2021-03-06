/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKInternedString : NSString  {
    NSString *original;
}

+ (void)initialize;
+ (id)stringWithString:(id)arg1;

- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 locale:(id)arg4;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)substringToIndex:(unsigned int)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithString:(id)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (unsigned int)hash;
- (unsigned int)length;
- (BOOL)isEqualToString:(id)arg1;
- (void)dealloc;

@end
