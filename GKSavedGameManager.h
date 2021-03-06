/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableDictionary, NSMutableArray, NSMetadataQuery, NSURL;

@interface GKSavedGameManager : NSObject  {
    BOOL _ubiquityUnavailable;
    NSURL *_ubiquityURL;
    NSMetadataQuery *_query;
    NSMutableDictionary *_documents;
    int _queryDisableCount;
    NSMutableArray *_fetchHandlers;
}

@property(retain) NSURL * ubiquityURL;
@property BOOL ubiquityUnavailable;
@property(retain) NSMetadataQuery * query;
@property(retain) NSMutableDictionary * documents;
@property int queryDisableCount;
@property(retain) NSMutableArray * fetchHandlers;

+ (id)sharedManager;

- (id)documents;
- (void)removeDocument:(id)arg1;
- (id)fetchHandlers;
- (void)setQueryDisableCount:(int)arg1;
- (int)queryDisableCount;
- (BOOL)ubiquityUnavailable;
- (id)ubiquityURL;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(id)arg2;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)setDocuments:(id)arg1;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (void)queryDidFinishGathering:(id)arg1;
- (id)currentDocumentWithName:(id)arg1;
- (void)addDocument:(id)arg1;
- (id)errorForNoUbiquity;
- (id)fileURLForName:(id)arg1;
- (id)documentToSaveWithName:(id)arg1;
- (void)enableQueryUpdates;
- (id)documentForSavedGame:(id)arg1;
- (void)disableQueryUpdates;
- (id)savedGameForDocument:(id)arg1;
- (id)savedGameForDocuments:(id)arg1;
- (void)setFetchHandlers:(id)arg1;
- (void)callFetchHandlers;
- (void)setUbiquityUnavailable:(BOOL)arg1;
- (void)startSavedGameQuery;
- (void)setUbiquityURL:(id)arg1;
- (void)documentConflictStateChanged:(id)arg1;
- (void)documentModified:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)dealloc;
- (id)init;

@end
