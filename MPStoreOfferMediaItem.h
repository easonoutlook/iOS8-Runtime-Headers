/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber, MPStoreOfferContentRating, NSDictionary;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {
    NSDictionary *_lookupCollectionPropertyValues;
    NSNumber *_itemID;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

+ (BOOL)supportsSecureCoding;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3;
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1;
+ (id)defaultPropertyValues;
+ (BOOL)canFilterByProperty:(id)arg1;

- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)persistentID;
- (unsigned int)discNumber;
- (id)valueForProperty:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3;
- (int)preferredStoreOfferVariant;
- (BOOL)isDownloadable;
- (id)buyOfferForVariant:(int)arg1;
- (id)mediaLibrary;
- (unsigned int)albumTrackNumber;

@end