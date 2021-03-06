/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSCalendar, NSTimeZone, NSLocale, NSObject<OS_dispatch_semaphore>, NSString, NSDate, NSMutableDictionary;

@interface NSDateFormatter : NSFormatter  {
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter { } *_formatter;
    unsigned int _counter;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property int formattingContext;
@property(copy) NSString * dateFormat;
@property unsigned int dateStyle;
@property unsigned int timeStyle;
@property(copy) NSLocale * locale;
@property BOOL generatesCalendarDates;
@property unsigned int formatterBehavior;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSCalendar * calendar;
@property(getter=isLenient) BOOL lenient;
@property(copy) NSDate * twoDigitStartDate;
@property(copy) NSDate * defaultDate;
@property(copy) NSArray * eraSymbols;
@property(copy) NSArray * monthSymbols;
@property(copy) NSArray * shortMonthSymbols;
@property(copy) NSArray * weekdaySymbols;
@property(copy) NSArray * shortWeekdaySymbols;
@property(copy) NSString * AMSymbol;
@property(copy) NSString * PMSymbol;
@property(copy) NSArray * longEraSymbols;
@property(copy) NSArray * veryShortMonthSymbols;
@property(copy) NSArray * standaloneMonthSymbols;
@property(copy) NSArray * shortStandaloneMonthSymbols;
@property(copy) NSArray * veryShortStandaloneMonthSymbols;
@property(copy) NSArray * veryShortWeekdaySymbols;
@property(copy) NSArray * standaloneWeekdaySymbols;
@property(copy) NSArray * shortStandaloneWeekdaySymbols;
@property(copy) NSArray * veryShortStandaloneWeekdaySymbols;
@property(copy) NSArray * quarterSymbols;
@property(copy) NSArray * shortQuarterSymbols;
@property(copy) NSArray * standaloneQuarterSymbols;
@property(copy) NSArray * shortStandaloneQuarterSymbols;
@property(copy) NSDate * gregorianStartDate;
@property BOOL doesRelativeDateFormatting;

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned int)arg2 locale:(id)arg3;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned int)arg2 timeStyle:(unsigned int)arg3;
+ (unsigned int)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (id)CalSharedDateFormatter;
+ (id)mf_formatDate:(id)arg1 shortStyle:(BOOL)arg2;

- (id)shortStandaloneMonthSymbols;
- (id)standaloneMonthSymbols;
- (id)shortMonthSymbols;
- (id)dateFormat;
- (id)monthSymbols;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)dateFromString:(id)arg1;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)locale;
- (id)calendar;
- (id)timeZone;
- (void)setCalendar:(id)arg1;
- (void)_reset;
- (id)PMSymbol;
- (id)AMSymbol;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (void)setLocale:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimeZone:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)setLenient:(BOOL)arg1;
- (BOOL)doesRelativeDateFormatting;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setAMSymbol:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setDefaultDate:(id)arg1;
- (id)defaultDate;
- (void)setTwoDigitStartDate:(id)arg1;
- (id)twoDigitStartDate;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (BOOL)generatesCalendarDates;
- (void)_regenerateFormatterIfAbsent;
- (id)_locale_forOldMethods;
- (id)_timeZone_forOldMethods;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (BOOL)isLenient;
- (unsigned int)formatterBehavior;
- (void)_regenerateFormatter;
- (void)_clearFormatter;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (unsigned int)timeStyle;
- (unsigned int)dateStyle;
- (int)formattingContext;
- (void)setFormattingContext:(int)arg1;
- (id)shortStandaloneQuarterSymbols;
- (id)standaloneQuarterSymbols;
- (id)shortQuarterSymbols;
- (id)quarterSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortMonthSymbols;
- (id)longEraSymbols;
- (id)shortWeekdaySymbols;
- (id)weekdaySymbols;
- (id)eraSymbols;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (id)stringFromDate:(id)arg1 withRelativeToTimeZone:(id)arg2;

@end
