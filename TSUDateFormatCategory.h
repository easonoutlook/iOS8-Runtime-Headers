/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject  {
    struct __CFDateFormatter { } *mInitialFormatter;
    NSMutableArray *mEntries;
}


- (id)entryForSeparator:(unsigned short)arg1;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale { }*)arg3;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const struct __CFString {}**)arg3 perfect:(BOOL*)arg4;
- (void)dealloc;

@end
