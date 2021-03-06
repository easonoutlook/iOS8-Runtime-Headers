/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAPerson, NSString, NSNumber, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand  {
}

@property(copy) NSNumber * enable;
@property(copy) NSString * fenceType;
@property(retain) SAPerson * friend;
@property(copy) NSString * geoFenceTrigger;
@property(copy) NSNumber * oneTimeOnly;
@property(retain) SALocation * requestedLocation;

+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSet;

- (void)setOneTimeOnly:(id)arg1;
- (id)oneTimeOnly;
- (void)setFenceType:(id)arg1;
- (id)fenceType;
- (void)setGeoFenceTrigger:(id)arg1;
- (id)geoFenceTrigger;
- (void)setRequestedLocation:(id)arg1;
- (id)requestedLocation;
- (void)setFriend:(id)arg1;
- (id)friend;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)enable;
- (id)groupIdentifier;
- (void)setEnable:(id)arg1;

@end
