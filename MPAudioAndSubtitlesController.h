/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITableView, MPAVItem, <MPAudioAndSubtitlesControllerDelegate>, MPAlternateTrack;

@interface MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MPAVItem *_avItem;
    <MPAudioAndSubtitlesControllerDelegate> *_delegate;
    UITableView *_tableView;
    BOOL _hasAudio;
    BOOL _hasSubtitles;
    MPAlternateTrack *_originalAudioTrack;
    MPAlternateTrack *_originalSubtitleTrack;
    MPAlternateTrack *_newAudioTrack;
    MPAlternateTrack *_newSubtitleTrack;
}

@property <MPAudioAndSubtitlesControllerDelegate> * delegate;


- (void).cxx_destruct;
- (void)loadView;
- (id)delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_applyChanges;
- (id)_trackAtIndexPath:(id)arg1;
- (id)initWithAVItem:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;

@end