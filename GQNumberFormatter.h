/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GQNumberFormatter : NSObject  {
    struct __CFLocale { } *mLocale;
    struct __CFArray { } *mDecimalFormatters;
    struct __CFArray { } *mCurrencyFormatters;
    struct __CFArray { } *mPercentageFormatters;
    struct __CFArray { } *mScientificFormatters;
    struct __CFNumberFormatter { } *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString { } *mAdditionalCurrencyCode;
    struct __CFArray { } *mAdditionalCurrencyCodeFormatters;
}

+ (id)numberFormatStringSpecialSymbols;
+ (id)availableCurrencyCodes;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (id)localizedPercentSymbol;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (id)userVisibleCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currentLocaleCurrencyCode;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;

- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (BOOL)valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (void)numberPreferencesChanged:(id)arg1;
- (id)localizedPercentSymbol;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)displayNameForCurrencyCode:(id)arg1;
- (BOOL)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (BOOL)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)currencyFromString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (BOOL)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (void)dealloc;
- (BOOL)findCurrencySymbolInString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 successfulString:(const struct __CFString {}**)arg3;

@end
