/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface UIManagedDocument : UIDocument  {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSDictionary *_documentMetadata;
    struct __mdocFlags { 
        unsigned int shouldWriteAdditionalContent : 1; 
        unsigned int _reserved : 31; 
    } _mdocFlags;
    NSDictionary *persistentStoreOptions;
    NSString *modelConfiguration;
}

@property(retain,readonly) NSManagedObjectContext * managedObjectContext;
@property(retain,readonly) NSManagedObjectModel * managedObjectModel;
@property(copy) NSDictionary * persistentStoreOptions;
@property(copy) NSString * modelConfiguration;

+ (id)additionalContentPathComponent;
+ (id)persistentStoreName;
+ (BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1;
+ (void)initialize;

- (void)setModelConfiguration:(id)arg1;
- (void)setPersistentStoreOptions:(id)arg1;
- (id)additionalContentForURL:(id)arg1 error:(id*)arg2;
- (BOOL)readAdditionalContentFromURL:(id)arg1 error:(id*)arg2;
- (id)managedObjectContext;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2;
- (BOOL)_writeMetadataToDocumentURL:(id)arg1;
- (id)_readMetadataFromDocumentURL:(id)arg1;
- (id)modelConfiguration;
- (id)persistentStoreOptions;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (BOOL)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;
- (id)managedObjectModel;
- (id)initWithFileURL:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (BOOL)readFromURL:(id)arg1 error:(id*)arg2;
- (void)dealloc;

@end
