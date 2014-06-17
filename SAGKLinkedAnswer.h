/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SAUIAppPunchOut;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSString * description;
@property(copy) NSString * displayLink;
@property(copy) NSURL * link;
@property(copy) NSString * name;
@property(retain) SAUIAppPunchOut * punchOut;
@property(copy) NSString * query;
@property(copy) NSURL * searchUri;

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswer;

- (void)setSearchUri:(id)arg1;
- (id)searchUri;
- (void)setPunchOut:(id)arg1;
- (id)punchOut;
- (id)encodedClassName;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)query;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)groupIdentifier;
- (void)setDescription:(id)arg1;

@end