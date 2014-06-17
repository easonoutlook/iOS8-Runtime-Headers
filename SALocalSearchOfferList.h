/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * offers;
@property(copy) NSString * providerId;

+ (id)offerListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)offerList;

- (id)offers;
- (void)setOffers:(id)arg1;
- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)groupIdentifier;

@end
