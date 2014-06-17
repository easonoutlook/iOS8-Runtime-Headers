/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainsPredicate : ML3PropertyPredicate  {
    id _values;
}

@property(copy) id values;

+ (id)predicateWithProperty:(id)arg1 valueSet:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;

- (id)initWithProperty:(id)arg1 values:(id)arg2;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (id)description;

@end
