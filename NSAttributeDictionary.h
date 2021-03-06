/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionary : NSDictionary  {
    unsigned int numElements;
    struct _NSAttributeDictionaryElement { 
        unsigned int hash; 
        id key; 
        id value; 
    } elements[1];
}

+ (void)initialize;
+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyEnumerator;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;

@end
