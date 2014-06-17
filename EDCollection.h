/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collectionWithObject:(id)arg1;
+ (id)collection;

- (BOOL)isEqualToCollection:(id)arg1;
- (unsigned int)addOrEquivalentObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)addObject:(id)arg1;
- (id)init;

@end
