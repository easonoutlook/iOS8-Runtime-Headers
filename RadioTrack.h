/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSMutableDictionary, RadioArtworkCollection, RadioTrackAdInfo, NSObject<OS_dispatch_queue>, NSArray, RadioAudioClip, NSDictionary, NSString, NSURL, NSData, NSDate;

@interface RadioTrack : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bestOfferDictionary;
    NSMutableDictionary *_trackDictionary;
    BOOL _isPreorderAlbum;
    NSDate *_expirationDate;
}

@property(copy,readonly) NSData * adData;
@property(readonly) RadioTrackAdInfo * adInfo;
@property(readonly) RadioAudioClip * afterPromoAudioClip;
@property(copy,readonly) NSString * album;
@property(copy,readonly) NSString * albumBuyButtonText;
@property(readonly) int albumBuyButtonType;
@property(readonly) long long albumID;
@property(copy,readonly) NSURL * albumURL;
@property(copy,readonly) NSString * artist;
@property(readonly) RadioArtworkCollection * artworkCollection;
@property(copy,readonly) NSArray * assets;
@property(readonly) RadioAudioClip * beforePromoAudioClip;
@property(copy,readonly) NSString * copyrightText;
@property(readonly) long long dateFetched;
@property(copy,readonly) NSString * debugMessage;
@property(readonly) double duration;
@property(retain) NSDate * expirationDate;
@property(copy,readonly) NSDictionary * feedbackDictionaryRepresentation;
@property(readonly) BOOL isExplicit;
@property(readonly) BOOL isPreorderAlbum;
@property BOOL inWishList;
@property(readonly) int likeStatus;
@property(copy,readonly) NSArray * offers;
@property(copy,readonly) NSURL * previewURL;
@property(readonly) long long shuffleSeed;
@property(readonly) double startTime;
@property(readonly) long long storeID;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSDictionary * trackInfo;
@property(copy,readonly) NSDictionary * trackDictionary;
@property(copy) NSDictionary * metadataDictionary;

+ (BOOL)supportsSecureCoding;

- (id)_offers;
- (id)offers;
- (id)feedbackDictionaryRepresentation;
- (id)trackInfo;
- (id)adData;
- (id)adInfo;
- (id)afterPromoAudioClip;
- (id)beforePromoAudioClip;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (BOOL)isExplicit;
- (long long)albumID;
- (BOOL)inWishList;
- (int)likeStatus;
- (id)artworkCollection;
- (BOOL)isPreorderAlbum;
- (void)_performWriteTransactionAndWait:(id)arg1;
- (void)_performTransaction:(id)arg1;
- (long long)shuffleSeed;
- (void)setInWishList:(BOOL)arg1;
- (id)metadataDictionary;
- (id)debugMessage;
- (long long)dateFetched;
- (id)albumURL;
- (void)_performWriteTransaction:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)trackDictionary;
- (id)initWithTrackDictionary:(id)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (void)_performTransactionAndWait:(id)arg1;
- (id)album;
- (id)assets;
- (id)artist;
- (double)startTime;
- (void).cxx_destruct;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)duration;
- (id)init;
- (id)previewURL;
- (id)copyrightText;
- (long long)storeID;

@end
