/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKObjectID, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem  {
    EKObjectID *_parentID;
}

@property(copy) NSDate * dueDate;
@property(copy) NSTimeZone * dueDateTimeZone;
@property BOOL dueDateAllDay;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property unsigned int displayOrder;
@property(copy) EKObjectID * parentID;

+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;

- (BOOL)validate:(id*)arg1;
- (void)setParentID:(id)arg1;
- (id)parentID;
- (BOOL)isCompleted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (int)entityType;
- (void)setCompleted:(BOOL)arg1;
- (void)setDueDateAllDay:(BOOL)arg1;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (BOOL)dueDateAllDay;
- (id)dueDateTimeZone;
- (id)dueDate;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;

@end
