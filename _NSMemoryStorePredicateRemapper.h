/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject  {
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;

- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;

@end
