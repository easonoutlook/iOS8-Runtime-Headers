/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSTimeZone;

@interface EKEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSString *_title;
    BOOL _shouldLoadDefaultProperties;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * eventUUID;
@property(readonly) NSTimeZone * timeZone;
@property(readonly) NSString * title;
@property(readonly) BOOL shouldLoadDefaultProperties;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;

- (id)endDate;
- (id)startDate;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)timeZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)shouldLoadDefaultProperties;
- (id)eventUUID;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)defaultPropertiesToLoad;
- (id)predicateFormat;

@end
