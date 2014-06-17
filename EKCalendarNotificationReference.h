/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKEventStore, EKCalendarNotification;

@interface EKCalendarNotificationReference : NSObject  {
    struct { 
        int entityType; 
        int entityID; 
    } _objectID;
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
    int _type;
}

@property(readonly) int type;
@property(readonly) EKCalendarNotification * notification;


- (int)type;
- (id)notification;
- (id)description;
- (void)dealloc;
- (int)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
- (id)initWithType:(int)arg1 objectID:(struct { int x1; int x2; })arg2 eventStore:(id)arg3;
- (id)initWithType:(int)arg1 objectID:(struct { int x1; int x2; })arg2 date:(id)arg3 eventStore:(id)arg4;

@end
