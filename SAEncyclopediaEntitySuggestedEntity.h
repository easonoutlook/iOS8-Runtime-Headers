/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, <SAClientBoundCommand>;

@interface SAEncyclopediaEntitySuggestedEntity : AceObject <SAAceSerializable> {
}

@property(retain) <SAClientBoundCommand> * command;
@property(copy) NSString * name;

+ (id)suggestedEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedEntity;

- (id)encodedClassName;
- (void)setCommand:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)command;
- (id)groupIdentifier;

@end