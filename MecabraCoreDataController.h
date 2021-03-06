/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSManagedObjectContext, NSEntityDescription, NSString, NSPersistentStoreCoordinator, NSURL, NSManagedObjectModel;

@interface MecabraCoreDataController : NSObject  {
    NSEntityDescription *_entityDescription;
    NSURL *_localInfoPlistURL;
    NSURL *_localStoreURL;
    NSURL *_localURL;
    NSString *_localURLLastPartOfName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_storeURL;
    NSString *_type;
    NSArray *_storedElementsForMerge;
}

@property(readonly) NSEntityDescription * entityDescription;
@property(retain) NSURL * localStoreURL;
@property(readonly) NSURL * localInfoPlistURL;
@property(retain) NSManagedObjectModel * managedObjectModel;
@property(retain) NSManagedObjectContext * managedObjectContext;
@property(retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(retain) NSURL * storeURL;
@property(retain) NSString * type;
@property(retain) NSURL * localURL;
@property(retain) NSArray * storedElementsForMerge;

+ (void)resetDatabaseWithType:(id)arg1 URL:(id)arg2;

- (void)setStoreURL:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setLocalStoreURL:(id)arg1;
- (id)storedElementsForMerge;
- (BOOL)shouldSyncDatabase;
- (void)setStoredElementsForMerge:(id)arg1;
- (id)copyUbiquityTokenInDefaults;
- (void)sendRemoteNotification;
- (void)databaseDidChangeStore:(id)arg1;
- (void)databaseSynced:(id)arg1;
- (id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3;
- (id)localStoreURL;
- (void)migrateiCloudToLocal;
- (id)databaseName;
- (id)ubiquityTokenLookupKey;
- (void)setUbiquityTokenInDefaults;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (void)deleteAllElements;
- (id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2;
- (id)searchResultsWithValueDictionary:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)prepareURLForDatabaseFile:(id)arg1;
- (id)localInfoPlistURL;
- (void)deleteAllMatchingEntries:(id)arg1;
- (void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3;
- (id)dictionaryValueFromManagedObject:(id)arg1;
- (BOOL)isLogging;
- (BOOL)dictionaryEntryHasAllRequiredKeys:(id)arg1;
- (id)entityDescriptionForContext:(id)arg1;
- (void)clearStoredMergeEntries;
- (id)entriesToMerge;
- (void)setDatabaseProperty:(id)arg1 forKey:(id)arg2;
- (id)databasePropertyForKey:(id)arg1;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned int)arg4 identifierKey:(id)arg5;
- (void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (id)dictionaryValuesFromManagedObjects:(id)arg1;
- (id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (void)deleteEntry:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)arg1;
- (id)managedObjectContext;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)managedObjectModel;
- (id)localURL;
- (id)type;
- (void)setType:(id)arg1;
- (void)save;
- (void)dealloc;
- (id)storeURL;
- (void)setLocalURL:(id)arg1;
- (id)entityDescription;
- (void)addEntry:(id)arg1;

@end
