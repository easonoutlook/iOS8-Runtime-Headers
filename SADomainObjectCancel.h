/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject;

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand> {
}

@property(retain) SADomainObject * identifier;

+ (id)domainObjectCancelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCancel;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
