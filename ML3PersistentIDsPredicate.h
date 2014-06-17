/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate  {
    NSArray *_persistentIDs;
    BOOL _shouldContain;
}

@property(readonly) BOOL shouldContain;

+ (id)predicateWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2;
+ (id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;

- (BOOL)shouldContain;
- (id)initWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end