/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate  {
    void *_group;
    void *_store;
    NSString *_accountIdentifier;
}

@property void* group;
@property void* store;
@property(copy) NSString * accountIdentifier;


- (id)accountIdentifier;
- (void*)group;
- (void)setGroup:(void*)arg1;
- (BOOL)isValid;
- (void)setAccountIdentifier:(id)arg1;
- (id)description;
- (void)dealloc;
- (void*)store;
- (void)setStore:(void*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;

@end
