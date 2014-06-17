/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying> {
    BOOL _hasBeenPlayed;
    NSString *_itemIdentifier;
    unsigned int _playCount;
    double _timestamp;
    double _bookmarkTime;
}

@property(copy) NSString * itemIdentifier;
@property double timestamp;
@property double bookmarkTime;
@property BOOL hasBeenPlayed;
@property unsigned int playCount;

+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(BOOL)arg4 playCount:(unsigned int)arg5;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6;
+ (id)_testableMetadataItem_1;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(BOOL)arg3;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;

- (void)setItemIdentifier:(id)arg1;
- (id)keyValueStorePayload;
- (id)initAsTestableItem;
- (id)kvsValueDescription;
- (id)kvsPayload;
- (id)kvsKey;
- (id)itemIdentifier;
- (void)setBookmarkTime:(double)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (BOOL)hasBeenPlayed;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCount;
- (double)bookmarkTime;

@end
