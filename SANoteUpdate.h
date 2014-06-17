/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SANoteUpdate : SADomainCommand  {
}

@property(copy) NSString * contentsToAppend;
@property(copy) NSURL * identifier;

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;

- (void)setContentsToAppend:(id)arg1;
- (id)contentsToAppend;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
