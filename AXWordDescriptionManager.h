/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface AXWordDescriptionManager : NSObject  {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSString *languageDialectCode;
}

@property(retain) NSString * languageDialectCode;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(readonly) NSManagedObjectModel * managedObjectModel;

+ (id)sharedInstance;

- (id)persistentStoreCoordinator;
- (id)languageDialectCode;
- (id)descriptionForWord:(id)arg1;
- (void)setLanguageDialectCode:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)languageCode;
- (void)dealloc;

@end
