/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey> {
    NSString *_externalId;
}

@property(readonly) NSString * externalId;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (BOOL)isEqualToCuratedEventKey:(id)arg1;
- (id)externalId;
- (id)initWithExternalId:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
