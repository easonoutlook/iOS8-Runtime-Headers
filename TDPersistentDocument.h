/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSURL, NSString, NSManagedObjectContext, NSManagedObjectModel;

@interface TDPersistentDocument : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    id _store;
    NSURL *_fileURL;
    NSString *_fileType;
    NSURL *_temporaryFileURL;
}

@property(copy) NSURL * fileURL;
@property(copy) NSString * fileType;
@property(copy) NSURL * temporaryFileURL;

+ (id)_fileModificationDateForURL:(id)arg1;

- (void)setManagedObjectContext:(id)arg1;
- (id)temporaryFileURL;
- (void)setTemporaryFileURL:(id)arg1;
- (void)saveDocument:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (void)setFileURL:(id)arg1;
- (id)managedObjectContext;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (id)managedObjectModel;
- (void)setFileType:(id)arg1;
- (id)fileType;
- (id)fileURL;
- (id)displayName;
- (void)close;
- (id)undoManager;
- (void)dealloc;
- (id)_persistentStoreCoordinator;

@end
