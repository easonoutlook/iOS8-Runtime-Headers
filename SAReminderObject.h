/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, <SAReminderPayload>, NSDate, SAReminderRecurrence, SAReminderTrigger;

@interface SAReminderObject : SADomainObject  {
}

@property(copy) NSString * alternateSubject;
@property BOOL completed;
@property(copy) NSDate * dueDate;
@property(copy) NSString * dueDateTimeZoneId;
@property BOOL important;
@property(copy) NSArray * lists;
@property(retain) <SAReminderPayload> * payload;
@property(retain) SAReminderRecurrence * recurrence;
@property(copy) NSString * subject;
@property(retain) SAReminderTrigger * trigger;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (void)setLists:(id)arg1;
- (BOOL)important;
- (void)setDueDateTimeZoneId:(id)arg1;
- (id)dueDateTimeZoneId;
- (void)setAlternateSubject:(id)arg1;
- (id)alternateSubject;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)lists;
- (id)recurrence;
- (void)setRecurrence:(id)arg1;
- (void)setPayload:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)payload;
- (id)groupIdentifier;
- (void)setCompleted:(BOOL)arg1;
- (BOOL)completed;
- (void)setDueDate:(id)arg1;
- (id)dueDate;
- (id)trigger;
- (void)setTrigger:(id)arg1;
- (void)setImportant:(BOOL)arg1;

@end