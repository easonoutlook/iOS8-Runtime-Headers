/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {
    double _start;
    double _end;
    BOOL _floating;
    int _startUTCOffsetSeconds;
    int _endUTCOffsetSeconds;
}

@property(readonly) double start;
@property(readonly) double end;
@property(readonly) int startUTCOffsetSeconds;
@property(readonly) int endUTCOffsetSeconds;
@property(getter=isFloating,readonly) BOOL floating;

+ (id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4;
+ (id)floatingRangeWithStart:(double)arg1 end:(double)arg2;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (double)toFloatingTime:(double)arg1;
+ (id)floatingRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3;
+ (id)utcRangeWithStart:(double)arg1 duration:(double)arg2;
+ (id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (double)fromFloatingTime:(double)arg1;
+ (id)utcRangeWithStart:(double)arg1 end:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (id)dateFromGregorianComponents:(id)arg1;
+ (BOOL)isAllDayComponents:(id)arg1;
+ (BOOL)hasYearMonthDayComponents:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)isFloating;
- (id)absoluteRange;
- (int)endUTCOffsetSeconds;
- (int)startUTCOffsetSeconds;
- (id)stableStringRepresentation;
- (BOOL)isEqualToSimpleTimeRange:(id)arg1;
- (id)initFloatingWithStart:(double)arg1 end:(double)arg2;
- (id)initWithStart:(double)arg1 startUTCOffsetSeconds:(int)arg2 end:(double)arg3 endUTCOffsetSeconds:(int)arg4;
- (double)end;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)start;
- (id)description;

@end
