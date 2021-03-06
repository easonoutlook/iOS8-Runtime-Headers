/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSString, HDSQLitePredicate, NSArray;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class _entityClass;
    int _limitCount;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    HDSQLitePredicate *_predicate;
    BOOL _returnsDistinctEntities;
    NSString *_groupBy;
}

@property Class entityClass;
@property int limitCount;
@property(copy) NSArray * orderingDirections;
@property(copy) NSArray * orderingProperties;
@property BOOL returnsDistinctEntities;
@property(copy) HDSQLitePredicate * predicate;
@property(retain) NSString * groupBy;


- (void)setReturnsDistinctEntities:(BOOL)arg1;
- (BOOL)returnsDistinctEntities;
- (id)orderingDirections;
- (void)setLimitCount:(int)arg1;
- (int)limitCount;
- (void)setOrderingDirections:(id)arg1;
- (void)setEntityClass:(Class)arg1;
- (Class)entityClass;
- (void)setGroupBy:(id)arg1;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;
- (id)groupBy;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)orderingProperties;
- (void)setOrderingProperties:(id)arg1;

@end
