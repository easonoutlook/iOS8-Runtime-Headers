/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {
    BOOL _indexed;
    BOOL _stored;
    NSString *_name;
}

@property(readonly) NSString * name;
@property(readonly) BOOL indexed;
@property(readonly) BOOL stored;

+ (id)resolveName:(id)arg1;
+ (id)testTag:(int)arg1;
+ (id)extraKey:(id)arg1;
+ (id)defaultDuration;
+ (id)fromExtractedDomain;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (void)rememberPrefix:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
+ (id)remember:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)identity:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)extractedEventCancellation;
+ (id)url:(id)arg1;
+ (id)inhuman;
+ (void)initialize;
+ (id)allDay;

- (BOOL)isUrl;
- (BOOL)indexed;
- (BOOL)stored;
- (id)initWithName:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
- (BOOL)isContactDetail;
- (BOOL)isExtraKey;
- (BOOL)isEqualToEntityTag:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;

@end
