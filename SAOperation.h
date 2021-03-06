/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSDictionary;

@interface SAOperation : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * constraints;
@property(copy) NSString * domainId;
@property(copy) NSString * operationId;

+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)operation;

- (void)setOperationId:(id)arg1;
- (id)operationId;
- (void)setDomainId:(id)arg1;
- (id)domainId;
- (id)encodedClassName;
- (id)constraints;
- (void)setConstraints:(id)arg1;
- (id)groupIdentifier;

@end
