/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    unsigned int _userPlayCount;
    long long _foreignDatabaseEntityID;
    double _bookmarkTimestamp;
    double _bookmarkTime;
}

@property(readonly) SBCPlaybackPositionDomain * playbackPositionDomain;
@property(readonly) NSString * ubiquitousIdentifier;
@property(readonly) long long foreignDatabaseEntityID;
@property double bookmarkTimestamp;
@property double bookmarkTime;
@property unsigned int userPlayCount;
@property BOOL hasBeenPlayed;

+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
+ (BOOL)supportsSecureCoding;

- (long long)foreignDatabaseEntityID;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)SBKUniversalPlaybackPositionMetadata;
- (id)ubiquitousIdentifier;
- (unsigned int)userPlayCount;
- (double)bookmarkTimestamp;
- (void)setUserPlayCount:(unsigned int)arg1;
- (void)setBookmarkTimestamp:(double)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;
- (id)playbackPositionDomain;
- (void)setBookmarkTime:(double)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (BOOL)hasBeenPlayed;
- (double)bookmarkTime;

@end
