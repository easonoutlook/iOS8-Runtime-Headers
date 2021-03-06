/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSDictionary;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
    NSDictionary *_dictionary;
    int _ratingLevel;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    unsigned int _ratingSystem;
}

@property(getter=isRestrictedContent,readonly) BOOL restrictedContent;
@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property(getter=isRestrictedPurchase,readonly) BOOL restrictedPurchase;
@property(readonly) id mediaPropertyContentRatingValue;
@property int ratingLevel;
@property(copy) NSString * ratingLabel;
@property unsigned int ratingSystem;
@property(copy) NSString * ratingDescription;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)ratingSystemFromString:(id)arg1;

- (void)setRatingSystem:(unsigned int)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingDescription:(id)arg1;
- (id)ratingDescription;
- (id)ratingLabel;
- (unsigned int)ratingSystem;
- (id)valueForProperty:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRatingLevel:(int)arg1;
- (int)ratingLevel;
- (BOOL)_isRatingSystemForMusic:(unsigned int)arg1;
- (BOOL)_isRatingSystemForTV:(unsigned int)arg1;
- (BOOL)_isRatingSystemForMovies:(unsigned int)arg1;
- (BOOL)_isRatingSystemForApps:(unsigned int)arg1;
- (BOOL)isExplicitContent;
- (id)mediaPropertyContentRatingValue;
- (BOOL)isRestrictedContent;
- (BOOL)isRestrictedPurchase;

@end
