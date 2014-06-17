/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class AccountUtilities, NSNumber, NSMutableDictionary, CPExclusiveLock, NSManagedObjectContext, NoteAccountObject, NoteStoreObject, NSPersistentStoreCoordinator, NSPredicate, NSManagedObjectModel;

@interface NoteContext : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    struct __CXIndex { } *__SharedNoteStoreSearchIndex;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    int __SharedNoteStoreSearchIndexCount;
    BOOL _isIndexing;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned int _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
}

@property(readonly) BOOL isIndexing;
@property(retain,readonly) NSManagedObjectContext * managedObjectContext;
@property(retain) AccountUtilities * accountUtilities;

+ (void)clearTestsNotesRootPath;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (BOOL)shouldLogIndexing;
+ (id)generateGUID;
+ (id)defaultNotesSortDescriptors;
+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (id)fileProtectionOption;

- (void)clearCaches;
- (BOOL)isIndexing;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)persistentStoreCoordinator;
- (void)setAccountUtilities:(id)arg1;
- (BOOL)deleteIndexFile;
- (id)findNotesWithText:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;
- (id)copyNotesForSearch:(void*)arg1 complete:(char *)arg2;
- (void)resetNotificationCount;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)indexInBatches:(BOOL)arg1;
- (void)resumeIndexing;
- (void)wrapUpIndexing;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (BOOL)hasMultipleEnabledStores;
- (BOOL)shouldDisableLocalStore;
- (id)defaultStoreForNewNote;
- (id)faultedInStoresForAccounts:(id)arg1;
- (id)allStores;
- (id)collectionForInfo:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (unsigned int)countOfNotes;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotes;
- (id)allVisibleNotes;
- (id)collectionForObjectID:(id)arg1;
- (void)batchFaultNotes:(id)arg1;
- (void)sortNotes:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initForMigrator;
- (id)allNotes;
- (void*)newSearchContextWithText:(id)arg1;
- (id)copyNotesForSearch:(void*)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)trackChanges:(id)arg1;
- (void)cleanUpLocks;
- (struct __CXIndex { }*)searchIndex:(char *)arg1;
- (BOOL)shouldResumeIndexing;
- (void)destroySearchIndex;
- (void)indexNotes:(id)arg1;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (id)notesToResumeIndexing;
- (id)getNextIdObject;
- (id)_notePropertyObjectForKey:(id)arg1;
- (unsigned int)countOfStores;
- (id)localStore;
- (id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (void)forceSetUpUniqueObjects;
- (id)liveNotesNeedingBodiesPredicate;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (id)nextIndex;
- (id)visibleNotesPredicate;
- (id)newFetchRequestForNotes;
- (void)tearDownCoreDataStack;
- (BOOL)setUpCoreDataStack;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (BOOL)shouldObserveDarwinNotifications;
- (void)updateSearchIndex:(id)arg1;
- (void)handleMigration;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (BOOL)saveSilently:(id*)arg1;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (id)urlForPersistentStore;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (BOOL)forceDeleteAccount:(id)arg1;
- (id)accountUtilities;
- (id)allNotesInCollection:(id)arg1;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (void)deleteNote:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (id)newlyAddedAccount;
- (id)allAccounts;
- (BOOL)deleteAccount:(id)arg1;
- (id)localAccount;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedAttachment;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (id)newlyAddedNote;
- (id)allVisibleNotesInCollection:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (id)newlyAddedStore;
- (id)storeForObjectID:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (void)enableChangeLogging:(BOOL)arg1;
- (BOOL)save:(id*)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)propertyValueForKey:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)storeOptions;

@end
