/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABAnyValuePredicate : ABPredicate  {
    int _property;
}

@property int property;


- (void)setProperty:(int)arg1;
- (int)property;
- (BOOL)isValid;
- (id)init;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;

@end
