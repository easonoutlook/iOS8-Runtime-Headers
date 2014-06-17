/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject  {
}

@property(copy) NSArray * linkedAnswerGroups;
@property(copy) NSString * name;
@property(copy) NSString * nameAnnotation;
@property(copy) NSArray * structuredAnswers;

+ (id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)encyclopediaDomainObject;

- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;
- (void)setLinkedAnswerGroups:(id)arg1;
- (id)linkedAnswerGroups;
- (void)setNameAnnotation:(id)arg1;
- (id)nameAnnotation;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)name;
- (void)setName:(id)arg1;
- (id)groupIdentifier;

@end
