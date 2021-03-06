/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUDateFormatter : NSObject  {
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter { } *mFullDateFormatter;
}

+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)dateFormatStringSpecialSymbols;
+ (id)supportedTimeFormats;
+ (id)supportedDateFormats;
+ (id)defaultDateTimeFormat;
+ (unsigned int)p_DateTimeSplitLocationInFormatString:(id)arg1;

- (id)stringFromDate:(id)arg1 format:(id)arg2;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (id)fullDateString:(id)arg1;
- (void)dealloc;
- (id)init;

@end
