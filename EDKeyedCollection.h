/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection  {
    OITSUPointerKeyDictionary *mMap;
}


- (bool)isOverwritingKeyOK;
- (bool)isObjectInMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (id)objectWithKey:(int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeAllObjects;
- (void)dealloc;
- (unsigned int)addObject:(id)arg1;

@end
