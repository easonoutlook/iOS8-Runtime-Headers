/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class DKDAAPWriter;

@interface ML3DAAPExportSession : ML3ExportSession  {
    DKDAAPWriter *_daapWriter;
    unsigned int _currentListingContainerCode;
    unsigned int _currentSongsContainerCode;
}


- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylist:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrack:(unsigned long long)arg1;
- (id)_playlistExportItemForPersistentId:(long long)arg1;
- (id)_trackExportItemForPersistendId:(long long)arg1;
- (void)_setListingContainer:(unsigned int)arg1;
- (void)_setSongsContainer:(unsigned int)arg1;
- (void)_endCurrentSongsContainer;
- (void)_endCurrentListingContainer;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;
- (void).cxx_destruct;
- (id)end;
- (id)begin;

@end
