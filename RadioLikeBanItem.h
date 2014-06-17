/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {
    long long _albumID;
    RadioArtworkCollection *_artworkCollection;
    BOOL _isSeed;
    RadioSeedMetadata *_seedMetadata;
    long long _storeID;
    int _type;
}

@property(readonly) long long albumID;
@property(readonly) RadioArtworkCollection * artworkCollection;
@property(readonly) BOOL isSeed;
@property(copy,readonly) RadioSeedMetadata * seedMetadata;
@property(readonly) long long storeID;
@property(readonly) int type;


- (id)initWithItemDictionary:(id)arg1;
- (long long)albumID;
- (id)seedMetadata;
- (id)artworkCollection;
- (BOOL)isSeed;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)description;
- (id)init;
- (long long)storeID;

@end
