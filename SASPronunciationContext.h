/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSNumber;

@interface SASPronunciationContext : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * domainObjectIdentifier;
@property(copy) NSString * domainObjectPropertyIdentifier;
@property(copy) NSString * fullName;
@property(copy) NSString * orthography;
@property(copy) NSNumber * tokenOffset;

+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationContext;

- (void)setDomainObjectPropertyIdentifier:(id)arg1;
- (id)domainObjectPropertyIdentifier;
- (void)setDomainObjectIdentifier:(id)arg1;
- (id)domainObjectIdentifier;
- (void)setTokenOffset:(id)arg1;
- (id)tokenOffset;
- (void)setOrthography:(id)arg1;
- (id)encodedClassName;
- (void)setFullName:(id)arg1;
- (id)fullName;
- (id)orthography;
- (id)groupIdentifier;

@end
