/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand  {
}

@property(copy) NSString * adamId;

+ (id)addMediaEntityToWishListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaEntityToWishList;

- (void)setAdamId:(id)arg1;
- (id)adamId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
