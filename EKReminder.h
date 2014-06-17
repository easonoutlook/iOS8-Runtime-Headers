/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDateComponents, EKObjectID, EKAlarm, NSDate, NSURL;

@interface EKReminder : EKCalendarItem  {
    BOOL hadRecurrences;
}

@property(copy) NSDateComponents * startDateComponents;
@property(copy) NSDateComponents * dueDateComponents;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property int priority;
@property unsigned int displayOrder;
@property(readonly) NSDate * dueDate;
@property(copy) NSURL * action;
@property(readonly) EKObjectID * parentID;
@property(readonly) EKAlarm * bestDisplayAlarm;
@property BOOL hadRecurrences;

+ (id)reminderWithEventStore:(id)arg1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;

- (BOOL)validate:(id*)arg1;
- (id)parentID;
- (BOOL)isCompleted;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setTimeZone:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setCompleted:(BOOL)arg1;
- (void)setHadRecurrences:(BOOL)arg1;
- (BOOL)hadRecurrences;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (void)setDueDateComponents:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (id)reminderIdentifier;
- (id)dueDateComponents;
- (id)dueDate;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;
- (id)_persistentReminder;
- (BOOL)commit:(id*)arg1;
- (id)initWithPersistentObject:(id)arg1;

@end
