/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SALocation;

@interface SAAnswerSearch : SADomainCommand  {
}

@property(retain) SALocation * address;
@property(copy) NSString * attribute;
@property(copy) NSString * miscQuestion;
@property(copy) NSString * placeAttribute;
@property(copy) NSArray * product;
@property(copy) NSString * timeQuestion;
@property(copy) NSString * verbType;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (void)setVerbType:(id)arg1;
- (id)verbType;
- (void)setTimeQuestion:(id)arg1;
- (id)timeQuestion;
- (void)setProduct:(id)arg1;
- (id)product;
- (void)setPlaceAttribute:(id)arg1;
- (id)placeAttribute;
- (void)setMiscQuestion:(id)arg1;
- (id)miscQuestion;
- (void)setAttribute:(id)arg1;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)address;
- (id)groupIdentifier;
- (void)setAddress:(id)arg1;
- (id)attribute;

@end
