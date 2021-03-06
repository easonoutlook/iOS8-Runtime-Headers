/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject  {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}


- (BOOL)containsOperation:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (id)uniqueOperationForKey:(id)arg1;
- (unsigned int)countOfOperations;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
