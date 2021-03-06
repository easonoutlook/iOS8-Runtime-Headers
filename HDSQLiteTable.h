/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray, NSString;

@interface HDSQLiteTable : NSObject  {
    NSMutableArray *_columns;
    NSMutableArray *_tableConstraints;
    NSString *_tableName;
}

@property(copy) NSString * tableName;

+ (id)SQLToRenameTable:(id)arg1 to:(id)arg2;
+ (id)SQLToDropTableNamed:(id)arg1;
+ (id)SQLToInsertColumnNames:(id)arg1 fromTableNamed:(id)arg2 intoTableNamed:(id)arg3;
+ (id)tableWithSQL:(id)arg1;
+ (id)SQLToAddColumnWithSQL:(id)arg1 toTableNamed:(id)arg2;

- (unsigned int)_indexOfColumnNamed:(id)arg1;
- (id)_columnNamed:(id)arg1;
- (id)_initWithTableSQL:(id)arg1;
- (id)creationSQL;
- (BOOL)renameColumn:(id)arg1 to:(id)arg2;
- (id)columnNames;
- (BOOL)removeColumn:(id)arg1;
- (id)tableName;
- (void).cxx_destruct;
- (void)setTableName:(id)arg1;

@end
