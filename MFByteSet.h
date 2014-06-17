/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
    BOOL mySet[32];
}

+ (id)suspiciousCodepage1252ByteSet;
+ (id)nonASCIIByteSet;
+ (id)asciiWhitespaceSet;
+ (id)ASCIIByteSet;

- (id)invertedSet;
- (id)initWithCString:(const char *)arg1;
- (BOOL)byteIsMember:(BOOL)arg1;
- (id)_initWithSet:(const char *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
