/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject  {
    struct _MRContentItem { } *_mrContentItem;
    MPMediaItemArtwork *_artwork;
}

@property(copy,readonly) NSString * identifier;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(retain) MPMediaItemArtwork * artwork;
@property(getter=isContainer) BOOL container;
@property(getter=isPlayable) BOOL playable;
@property float playbackProgress;


- (BOOL)isContainer;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setContainer:(BOOL)arg1;
- (id)title;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setPlaybackProgress:(float)arg1;
- (float)playbackProgress;
- (void)setPlayable:(BOOL)arg1;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem { }*)arg1;
- (void)_postItemChangedNotification;
- (void)setArtwork:(id)arg1;
- (struct _MRContentItem { }*)_mediaRemoteContentItem;
- (id)artwork;
- (BOOL)isPlayable;

@end
