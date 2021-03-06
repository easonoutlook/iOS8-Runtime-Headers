/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * actionResults;
@property(copy) NSString * commandOutcome;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandCompleted;

- (void)setCommandOutcome:(id)arg1;
- (id)commandOutcome;
- (void)setActionResults:(id)arg1;
- (id)actionResults;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
