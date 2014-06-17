/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying> {
    BOOL _matchesNull;
}

@property(readonly) BOOL matchesNull;

+ (id)isNullPredicateWithProperty:(id)arg1;
+ (id)isNotNullPredicateWithProperty:(id)arg1;

- (BOOL)matchesNull;
- (id)SQLForEntityClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;

@end
