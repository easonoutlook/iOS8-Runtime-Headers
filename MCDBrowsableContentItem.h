/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSString, NSData;

@interface MCDBrowsableContentItem : NSObject  {
    struct _MRContentItem { } *_contentItem;
}

@property(readonly) NSString * identifier;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;
@property(readonly) NSData * artworkData;
@property(readonly) float playbackProgress;
@property(readonly) BOOL isPlayable;
@property(readonly) BOOL isContainer;


- (id)artworkData;
- (id)initWithMRContentItem:(struct _MRContentItem { }*)arg1;
- (BOOL)isContainer;
- (id)subtitle;
- (id)title;
- (id)identifier;
- (void)dealloc;
- (float)playbackProgress;
- (BOOL)isPlayable;

@end
