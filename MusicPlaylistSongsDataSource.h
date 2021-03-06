/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPMediaPlaylist, MPMediaLibrary;

@interface MusicPlaylistSongsDataSource : MusicQueryDataSource  {
    MPMediaLibrary *_mediaLibrary;
}

@property(readonly) MPMediaPlaylist * playlist;


- (id)playlist;
- (BOOL)entityIsSeedItemAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (BOOL)showsEntityCountFooter;
- (id)entityCountFormat;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;

@end
