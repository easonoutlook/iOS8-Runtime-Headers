/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSCache, NSObject<OS_dispatch_queue>;

@interface MusicPlaylistsDataSource : MusicQueryDataSource  {
    BOOL _hasParentPlaylist;
    NSCache *_cachedDurations;
    NSCache *_cachedCounts;
    NSCache *_cachedRepresentativeItems;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}


- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (void)_invalidateCalculatedEntities;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (id)representativeItemForEntityAtIndex:(unsigned int)arg1;
- (unsigned int)countForEntityAtIndex:(unsigned int)arg1;
- (double)durationForEntityAtIndex:(unsigned int)arg1;
- (void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(BOOL*)arg3 visitor:(id)arg4;
- (void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(id)arg2;
- (id)_representativePlaylistForEntityAtIndex:(unsigned int)arg1;
- (id)cachedRepresentativeItemForEntityAtIndex:(unsigned int)arg1;
- (unsigned int)cachedCountForEntityAtIndex:(unsigned int)arg1;
- (BOOL)isFolderForEntityAtIndex:(unsigned int)arg1;
- (double)cachedDurationForEntityAtIndex:(unsigned int)arg1;
- (BOOL)showsIndexBar;
- (BOOL)showsEntityCountFooter;
- (id)entityCountFormat;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (void)resetCaches;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_networkTypeDidChangeNotification:(id)arg1;

@end
