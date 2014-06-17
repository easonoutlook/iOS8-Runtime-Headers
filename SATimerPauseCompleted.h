/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SATimerObject;

@interface SATimerPauseCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SATimerObject * timer;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)pauseCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pauseCompleted;

- (id)encodedClassName;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)groupIdentifier;

@end
