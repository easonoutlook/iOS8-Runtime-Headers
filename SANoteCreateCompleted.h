/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SANoteCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * identifier;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createCompleted;

- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end