/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * photos;
@property(copy) NSString * providerId;

+ (id)photoListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)photoList;

- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)photos;
- (void)setPhotos:(id)arg1;
- (id)groupIdentifier;

@end