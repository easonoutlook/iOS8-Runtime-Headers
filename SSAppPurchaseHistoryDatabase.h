/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject  {
    SSSQLiteDatabase *_database;
}

+ (id)accountUniqueIdentifierKey;
+ (BOOL)_setupDatabase:(id)arg1;
+ (void)_createDatabaseDirectory;
+ (id)newDefaultInstance;

- (id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(BOOL)arg3;
- (BOOL)resetCacheForNewAccountID:(id)arg1;
- (BOOL)setLocalRevision:(int)arg1 forAccountUniqueIdentifier:(id)arg2;
- (int)localRevisionForAccountUniqueIdentifier:(id)arg1;
- (BOOL)setCurrentAccountUniqueIdentifier:(id)arg1;
- (id)currentAccountUniqueIdentifier;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id)arg1;
- (BOOL)removeValueForDatabaseProperty:(id)arg1;
- (void)readUsingTransactionBlock:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2;
- (void)readAsyncUsingTransactionBlock:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)database;
- (void)dealloc;
- (id)init;

@end
