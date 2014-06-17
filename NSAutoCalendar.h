/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSLocale, NSCalendar, NSDate, NSTimeZone;

@interface NSAutoCalendar : NSCalendar  {
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    unsigned int changedFirstWeekday;
    unsigned int changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
}

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (id)initWithCalendarIdentifier:(id)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (unsigned int)firstWeekday;
- (void)_update:(id)arg1;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)locale;
- (id)timeZone;
- (void)setLocale:(id)arg1;
- (id)dateFromComponents:(id)arg1;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimeZone:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (BOOL)isDateInWeekend:(id)arg1;
- (BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned int)arg3 afterDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (void)setFirstWeekday:(unsigned int)arg1;

@end
