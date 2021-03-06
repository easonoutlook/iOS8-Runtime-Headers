/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MusicGeniusMixQueueFeederDataSource>;

@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder  {
    unsigned int _currentPlaylistOffset;
    <MusicGeniusMixQueueFeederDataSource> *_dataSource;
}

@property(retain) <MusicGeniusMixQueueFeederDataSource> * dataSource;


- (BOOL)_configureWithMixPlaylist:(id)arg1 playbackContext:(id)arg2 startPlayback:(BOOL)arg3;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (unsigned int)itemCount;
- (void).cxx_destruct;
- (id)query;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (unsigned int)realRepeatType;
- (BOOL)userCanChangeShuffleAndRepeatType;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (unsigned int)shuffleType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;

@end
