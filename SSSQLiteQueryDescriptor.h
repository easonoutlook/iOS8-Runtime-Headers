/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLitePredicate, NSString, NSArray;

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class _entityClass;
    int _limitCount;
    Class _memoryEntityClass;
    NSString *_orderingClause;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    SSSQLitePredicate *_predicate;
    BOOL _returnsDistinctEntities;
}

@property Class entityClass;
@property Class memoryEntityClass;
@property int limitCount;
@property(copy) NSString * orderingClause;
@property(copy) NSArray * orderingDirections;
@property(copy) NSArray * orderingProperties;
@property BOOL returnsDistinctEntities;
@property(copy) SSSQLitePredicate * predicate;


- (void)setReturnsDistinctEntities:(BOOL)arg1;
- (BOOL)returnsDistinctEntities;
- (id)orderingDirections;
- (void)setOrderingClause:(id)arg1;
- (id)orderingClause;
- (void)setMemoryEntityClass:(Class)arg1;
- (void)setLimitCount:(int)arg1;
- (id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned int)arg2 columns:(id)arg3;
- (int)limitCount;
- (Class)memoryEntityClass;
- (void)setOrderingDirections:(id)arg1;
- (void)setEntityClass:(Class)arg1;
- (Class)entityClass;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)orderingProperties;
- (void)setOrderingProperties:(id)arg1;

@end