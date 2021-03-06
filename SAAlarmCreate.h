/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand  {
}

@property(retain) SAAlarmObject * alarmToCreate;

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;

- (void)setAlarmToCreate:(id)arg1;
- (id)alarmToCreate;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
