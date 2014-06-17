/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, NSArray;

@interface SUMediaPlayerItem : NSObject <NSCopying> {
    NSURL *_backgroundImageURL;
    NSString *_bookmarkIdentifier;
    NSArray *_downloadPingURLs;
    int _initialOrientation;
    unsigned long long _itemIdentifier;
    int _itemType;
    NSArray *_playbackPingURLs;
    double _playableDuration;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_url;
}

@property(retain) NSURL * backgroundImageURL;
@property double bookmarkedStartTime;
@property(copy) NSString * bookmarkIdentifier;
@property int initialOrientation;
@property unsigned long long itemIdentifier;
@property int itemType;
@property(copy) NSArray * downloadPingURLs;
@property(copy) NSArray * playbackPingURLs;
@property double playableDuration;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property(retain) NSURL * URL;


- (void)setPlaybackPingURLs:(id)arg1;
- (id)playbackPingURLs;
- (void)setPlayableDuration:(double)arg1;
- (void)setInitialOrientation:(int)arg1;
- (int)initialOrientation;
- (void)setDownloadPingURLs:(id)arg1;
- (id)downloadPingURLs;
- (void)setBookmarkIdentifier:(id)arg1;
- (id)bookmarkIdentifier;
- (void)setBackgroundImageURL:(id)arg1;
- (id)backgroundImageURL;
- (void)resetBookmarkedStartTime;
- (double)bookmarkedStartTime;
- (void)setBookmarkedStartTime:(double)arg1;
- (id)_newPingURLsWithArray:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (unsigned long long)itemIdentifier;
- (void)setURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (id)initWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)URL;
- (void)dealloc;
- (double)playableDuration;

@end
