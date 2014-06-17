/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSString, EKCalendarItem, EKRecurrenceEnd, NSDate;

@interface EKRecurrenceRule : EKObject <NSCopying> {
    BOOL _usesEndDate;
    EKRecurrenceEnd *_cachedEnd;
}

@property(readonly) NSString * calendarIdentifier;
@property(copy) EKRecurrenceEnd * recurrenceEnd;
@property(readonly) int frequency;
@property(readonly) int interval;
@property(readonly) int firstDayOfTheWeek;
@property(readonly) NSArray * daysOfTheWeek;
@property(readonly) NSArray * daysOfTheMonth;
@property(readonly) NSArray * daysOfTheYear;
@property(readonly) NSArray * weeksOfTheYear;
@property(readonly) NSArray * monthsOfTheYear;
@property(readonly) NSArray * setPositions;
@property(readonly) BOOL usesEndDate;
@property(readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } gregorianUnits;
@property(retain) EKCalendarItem * owner;
@property(readonly) NSString * UUID;
@property(readonly) NSDate * cachedEndDate;
@property(readonly) BOOL dirtyStateMayAffectExceptionDates;
@property(readonly) BOOL shouldPinMonthDays;
@property(retain) EKRecurrenceEnd * cachedEnd;

+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;

- (int)interval;
- (void)setInterval:(unsigned int)arg1;
- (void)reset;
- (id)calendarIdentifier;
- (void)setFrequency:(int)arg1;
- (int)frequency;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)owner;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (BOOL)mayOccurAfterDate:(id)arg1;
- (int)firstDayOfTheWeek;
- (BOOL)shouldPinMonthDays;
- (void)setCachedEnd:(id)arg1;
- (id)cachedEndDate;
- (BOOL)usesEndDate;
- (id)cachedEnd;
- (void)setFirstDayOfTheWeek:(unsigned int)arg1;
- (id)weeksOfTheYear;
- (id)daysOfTheYear;
- (id)monthsOfTheYear;
- (id)setPositions;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3;
- (id)_persistentRule;
- (void)setRecurrenceEnd:(id)arg1;
- (id)recurrenceEnd;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (BOOL)dirtyStateMayAffectExceptionDates;
- (id)lazyLoadRelationForKey:(id)arg1;

@end
