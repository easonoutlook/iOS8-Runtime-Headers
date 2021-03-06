/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSString, NSData, CKSQLite, CKRecord, NSURL;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue> {
    struct _OpaquePCSShareProtection { } *_recordPCS;
    BOOL _wasCached;
    BOOL _open;
    BOOL _transaction;
    NSArray *_assets;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_fileURL;
    NSString *_applicationBundleID;
    NSURL *_openFileURL;
    int _packageID;
    CKSQLite *_sqlite;
    unsigned int _nextItemIndex;
}

@property(copy) NSData * signature;
@property(copy) NSArray * assets;
@property CKRecord * record;
@property(copy) NSString * recordKey;
@property struct _OpaquePCSShareProtection { }* recordPCS;
@property(copy) NSURL * fileURL;
@property(retain) NSString * applicationBundleID;
@property BOOL wasCached;
@property(retain) NSURL * openFileURL;
@property int packageID;
@property(retain) CKSQLite * sqlite;
@property(getter=isOpen) BOOL open;
@property(getter=inTransaction) BOOL transaction;
@property unsigned int nextItemIndex;

+ (BOOL)supportsSecureCoding;

- (void)setOpen:(BOOL)arg1;
- (void)open;
- (void)setAssets:(id)arg1;
- (id)assets;
- (BOOL)isOpen;
- (void)setTransaction:(BOOL)arg1;
- (void)_openIfNecessary;
- (void)updateItemAtIndex:(int)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(int)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned int)arg5;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (id)itemEnumeratorForSectionAtIndex:(unsigned int)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)itemEnumerator;
- (void)addSection:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (id)recordKey;
- (void)setApplicationBundleID:(id)arg1;
- (void)setFileURL:(id)arg1;
- (id)CKPropertiesDescription;
- (id)applicationBundleID;
- (void)setRecord:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
- (id)record;
- (id)signature;
- (void)setSignature:(id)arg1;
- (void)setWasCached:(BOOL)arg1;
- (BOOL)wasCached;
- (unsigned int)itemCount;
- (id)itemAtIndex:(unsigned int)arg1;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)sectionCount;
- (id)fileURL;
- (void).cxx_destruct;
- (void)close;
- (void)addItem:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setNextItemIndex:(unsigned int)arg1;
- (unsigned int)nextItemIndex;
- (void)setPackageID:(int)arg1;
- (void)setOpenFileURL:(id)arg1;
- (id)openFileURL;
- (id)_itemOrNilAtIndex:(unsigned int)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (int)decReferenceCount;
- (BOOL)inTransaction;
- (int)incReferenceCount;
- (void)setSqlite:(id)arg1;
- (void)_setReferenceCount:(int)arg1;
- (int)packageID;
- (id)sqlite;
- (id)_packageDatabasePath;
- (id)_initWithPath:(id)arg1;
- (id)_uniquePackageDatabasePathForBundleIdentifier:(id)arg1;
- (id)_packageDatabasePathForBundleIdentifier:(id)arg1;
- (id)_prettyDictionaryRepresentation;
- (id)_MMCSItemsFromPackageItems:(id)arg1;
- (id)planWithMMCS:(id)arg1 completionHandler:(id)arg2;

@end
