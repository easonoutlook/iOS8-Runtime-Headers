/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    long _length;
    long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void*)mutableBytes;
- (void)setLength:(unsigned int)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (const void*)bytes;
- (unsigned int)length;
- (void)finalize;
- (id)retain;
- (oneway void)release;

@end