/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSMapTable, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSMutableDictionary;

@interface PHChange : NSObject  {
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
}

+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(id)arg2;
+ (id)handlerQueue;

- (void).cxx_destruct;
- (id)changeDetailsForObject:(id)arg1;
- (id)changeDetailsForFetchResult:(id)arg1;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 handler:(id)arg2;
- (id)initWithChangedIdentifiers:(id)arg1;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id)arg2;
- (id)description;
- (id)init;
- (id)deletedObjectIDs;
- (id)updatedObjectIDs;
- (id)insertedObjectIDs;

@end
