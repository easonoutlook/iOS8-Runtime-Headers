/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityKnowledgeVector, NSNumber, PFUbiquityGlobalObjectIDCache, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSArray;

@interface PFUbiquityStoreSaveSnapshot : NSObject  {
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSDictionary *_storeOptions;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}

@property(readonly) NSArray * entityNames;
@property(readonly) NSArray * peerIDs;
@property(readonly) NSArray * globalObjectIDs;
@property(readonly) NSArray * primaryKeys;
@property(readonly) NSDictionary * insertedObjects;
@property(readonly) NSDictionary * updatedObjects;
@property(readonly) NSDictionary * deletedObjects;
@property(readonly) NSDictionary * peerStates;
@property(retain) NSNumber * transactionNumber;
@property(retain) NSString * exportingPeerID;
@property(retain) NSString * localPeerID;
@property(retain) PFUbiquityKnowledgeVector * storeKV;
@property(readonly) NSDictionary * globalObjectIDToPermanentManagedObjectID;
@property(readonly) NSDictionary * managedObjectIDToGlobalObjectID;
@property(readonly) NSDictionary * entityNameToIndex;
@property(readonly) NSDictionary * peerIDToIndex;
@property(readonly) NSDictionary * primaryKeyToIndex;
@property(readonly) NSDictionary * globalObjectIDToIndex;
@property(retain) PFUbiquityGlobalObjectIDCache * globalObjectIDCache;


- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setGlobalObjectIDCache:(id)arg1;
- (id)globalObjectIDCache;
- (void)setStoreKV:(id)arg1;
- (id)globalObjectIDToPermanentManagedObjectID;
- (id)globalObjectIDToIndex;
- (void)finishGlobalIDReplacement;
- (void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2;
- (void)prepareForGlobalIDReplacement;
- (void)replaceGlobalObjectIDsAtIndexes:(id)arg1 withGlobalObjectIDs:(id)arg2;
- (void)setUpdatedObjects:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (id)filesDeletedInTransaction;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id*)arg3;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)primaryKeyToIndex;
- (id)peerIDToIndex;
- (id)entityNameToIndex;
- (id)managedObjectIDToGlobalObjectID;
- (id)globalObjectIDs;
- (id)peerIDs;
- (id)entityNames;
- (id)initForExport:(id)arg1;
- (void)setLocalPeerID:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;
- (id)storeKV;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)peerStates;
- (id)filesInsertedInTransaction;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id*)arg4;
- (void)resetFromOptimisticLockingException;
- (void)generatePeerStates;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (id)transactionNumber;
- (void)setExportingPeerID:(id)arg1;
- (id)exportingPeerID;
- (void)setDeletedObjects:(id)arg1;
- (id)localPeerID;
- (id)primaryKeys;

@end
