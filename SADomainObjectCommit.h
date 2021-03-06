/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand> {
}

@property(retain) SADomainObject * identifier;

+ (id)domainObjectCommitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCommit;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
