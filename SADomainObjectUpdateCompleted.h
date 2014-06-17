/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SADomainObjectUpdateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSURL * identifier;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectUpdateCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectUpdateCompleted;

- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
