/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject  {
    void *_echo;
    void *_echo_library;
    void *_echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(id)arg3;
+ (void)ignoreUnusedWarnings;
+ (BOOL)useFakeGeniusData;
+ (unsigned int)defaultTrackCount;
+ (unsigned int)defaultMinTrackCount;
+ (BOOL)hasGeniusFeatureEnabled;
+ (BOOL)hasGeniusDataAvailable;

- (id)_sharedBlobMutableData;
- (id)tracksFromClusterForCount:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)_canIncludeTrackInGeniusContainer:(id)arg1;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned int)arg2 stride:(int)arg3;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2;
- (BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
