/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAHAEntity, NSString, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject  {
}

@property(retain) SAHAEntity * entity;
@property(copy) NSString * outcome;
@property(copy) NSString * resultAttribute;
@property(retain) SAHAAttributeValue * resultValue;

+ (id)actionResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)actionResult;

- (void)setResultValue:(id)arg1;
- (id)resultValue;
- (void)setResultAttribute:(id)arg1;
- (id)resultAttribute;
- (void)setOutcome:(id)arg1;
- (id)outcome;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)entity;
- (void)setEntity:(id)arg1;
- (id)groupIdentifier;

@end
