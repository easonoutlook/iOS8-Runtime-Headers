/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}


- (BOOL)containsKey:(int)arg1;
- (id)arrayOfBoxedKeys;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (void)removeAllInts;
- (void)removeIntForKey:(int)arg1;
- (BOOL)intIsPresentForKey:(int)arg1 outValue:(int*)arg2;
- (void)setInt:(int)arg1 forKey:(int)arg2;
- (int)intForKey:(int)arg1;
- (struct __CFDictionary { }*)p_cfDictionary;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyEnumerator;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)allKeys;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end