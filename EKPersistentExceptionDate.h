/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject  {
}

@property(readonly) NSDate * date;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)exceptionDateWithDate:(id)arg1;
+ (id)relations;

- (void)setOwner:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (unsigned int)hash;
- (id)owner;
- (id)description;
- (int)entityType;
- (id)initWithExceptionDate:(id)arg1;

@end
