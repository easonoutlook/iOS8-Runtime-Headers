/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantString : NSSimpleCString  {
}


- (BOOL)canBeConvertedToEncoding:(unsigned int)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;
- (id)copy;
- (BOOL)isEqualToString:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (const char *)lossyCString;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned int)arg2;
- (unsigned int)smallestEncoding;
- (unsigned int)cStringLength;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const char *)cString;
- (unsigned int)fastestEncoding;

@end
