/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSCountedSet, NSObject<OS_dispatch_queue>, <PUSearchResultsValueDelegate>, NSMutableArray, NSAttributedString, PLSearchIndexCategoryKey, NSString, NSArray;

@interface PUSearchResultsValue : NSObject <PUSearchResult> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_uuids;
    NSCountedSet *_owningGeoCategoryContentStrings;
    double _score;
    NSMutableArray *_uncommittedUUIDs;
    NSCountedSet *_uncommittedOwningGeoCategoryContentStrings;
    double _uncommittedScore;
    NSAttributedString *_attributedDisplayString;
    id _albumUUID;
    unsigned int _approximateCount;
    PLSearchIndexCategoryKey *_key;
    <PUSearchResultsValueDelegate> *_delegate;
}

@property(copy,readonly) NSString * displayTitle;
@property(copy,readonly) NSString * displaySubtitle;
@property(readonly) NSArray * uuids;
@property(retain) id albumUUID;
@property unsigned int approximateCount;
@property(copy) PLSearchIndexCategoryKey * key;
@property(readonly) double score;
@property <PUSearchResultsValueDelegate> * delegate;


- (double)score;
- (id)uuids;
- (id)albumUUID;
- (unsigned int)approximateCount;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)key;
- (id)displayTitle;
- (id)delegate;
- (void)_setAlbumUUID:(id)arg1;
- (int)_uncommittedCompare:(id)arg1;
- (void)_computeUncommittedScoreWithMaxGroupedResultsCount:(unsigned int)arg1;
- (id)displaySubtitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (void)_cancelPendingChanges;
- (void)_mergePendingChanges;
- (void)_addOwningGeoCategoryContentStringFromIdenticalKey:(id)arg1;
- (unsigned int)_addAssetWithUUID:(id)arg1;
- (void)_commitWithRollback:(BOOL)arg1;
- (void)_setApproximateCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)_hasPendingChanges;
- (void)_setKey:(id)arg1;

@end