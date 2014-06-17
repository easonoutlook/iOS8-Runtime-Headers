/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {
}

@property(copy,readonly) NSString * name;
@property(copy,readonly) NSData * data;

+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)systemTimeZone;
+ (id)localTimeZone;
+ (id)defaultTimeZone;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)resetSystemTimeZone;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)timeZoneDataVersion;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)knownTimeZoneNames;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)abbreviationDictionary;
+ (id)ICSQuickTimeZoneNames;
+ (id)calendarTimeZone;

- (int)secondsFromGMT;
- (BOOL)isDaylightSavingTime;
- (id)abbreviation;
- (id)initWithName:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)name;
- (id)description;
- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isNSTimeZone__;
- (unsigned long)_cfTypeID;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (BOOL)isUTC;
- (BOOL)isEquivalentTo:(id)arg1;
- (id)descriptionForDate:(id)arg1;
- (void)setCityName:(id)arg1;
- (id)cityName;

@end