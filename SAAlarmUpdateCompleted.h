/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAAlarmUpdateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * alarmId;
@property(copy) NSArray * alarmIds;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)updateCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateCompleted;

- (void)setAlarmIds:(id)arg1;
- (id)alarmIds;
- (void)setAlarmId:(id)arg1;
- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
