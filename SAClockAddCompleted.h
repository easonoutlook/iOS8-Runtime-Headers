/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property BOOL alreadyExists;
@property(copy) NSURL * worldClockId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addCompleted;

- (void)setWorldClockId:(id)arg1;
- (id)worldClockId;
- (void)setAlreadyExists:(BOOL)arg1;
- (BOOL)alreadyExists;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
