/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSDispatchData : NSData  {
}

+ (BOOL)supportsSecureCoding;

- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (Class)classForCoder;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const void*)bytes;
- (unsigned int)length;
- (void)getBytes:(void*)arg1;
- (BOOL)_allowsDirectEncoding;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (BOOL)_isDispatchData;

@end
