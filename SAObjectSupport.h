/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable> {
}

@property(copy) NSString * aceVersion;
@property(copy) NSString * classId;
@property(copy) NSString * groupId;
@property(copy) NSArray * supportedProperties;

+ (id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectSupport;

- (void)setSupportedProperties:(id)arg1;
- (void)setClassId:(id)arg1;
- (id)classId;
- (void)setAceVersion:(id)arg1;
- (id)aceVersion;
- (id)encodedClassName;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)groupIdentifier;
- (id)supportedProperties;

@end
