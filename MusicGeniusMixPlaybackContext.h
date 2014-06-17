/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPMediaItem, NSMutableArray, MPMediaPlaylist;

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {
    NSMutableArray *_indexedSubQueries;
    BOOL _finite;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
}

@property(readonly) MPMediaPlaylist * mixPlaylist;
@property(retain) MPMediaItem * requiredInitialMediaItem;

+ (Class)queueFeederClass;

- (id)_generateNewItemsQuery:(id*)arg1 index:(unsigned int)arg2;
- (unsigned int)_indexOfSubQueryWithSubQueryIndex:(unsigned int)arg1 searchOptions:(unsigned int)arg2;
- (void)_enumerateItemsBySubQueryUsingBlock:(id)arg1;
- (id)_queryForMediaItemAtIndex:(unsigned int)arg1;
- (void)setRequiredInitialMediaItem:(id)arg1;
- (id)requiredInitialMediaItem;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)mixPlaylist;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (void).cxx_destruct;
- (id)query;
- (void)dealloc;

@end
