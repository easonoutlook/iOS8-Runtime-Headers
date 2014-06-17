/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * fullsize;
@property(copy) NSString * identifier;
@property(copy) NSURL * largeSize;
@property(copy) NSURL * maximumSize;
@property(retain) SAUIAppPunchOut * photoPunchOut;
@property(copy) NSURL * thumbnail;

+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)photo;

- (void)setMaximumSize:(id)arg1;
- (void)setPhotoPunchOut:(id)arg1;
- (id)photoPunchOut;
- (void)setLargeSize:(id)arg1;
- (id)largeSize;
- (void)setFullsize:(id)arg1;
- (id)fullsize;
- (id)encodedClassName;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;
- (id)maximumSize;

@end
