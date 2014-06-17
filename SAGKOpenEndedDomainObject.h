/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAGKDirectAnswer, NSArray;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject  {
}

@property(retain) SAGKDirectAnswer * directAnswer;
@property(copy) NSArray * image;
@property(copy) NSArray * linkedAnswerGroups;
@property(copy) NSArray * structuredAnswers;

+ (id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openEndedDomainObject;

- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;
- (void)setLinkedAnswerGroups:(id)arg1;
- (id)linkedAnswerGroups;
- (void)setDirectAnswer:(id)arg1;
- (id)directAnswer;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)image;
- (void)setImage:(id)arg1;
- (id)groupIdentifier;

@end
