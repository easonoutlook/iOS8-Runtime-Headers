/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

@property(retain) CalLocation * start;
@property(retain) CalLocation * end;
@property double duration;
@property(copy) NSString * route;

+ (BOOL)supportsSecureCoding;

- (id)route;
- (void)setRoute:(id)arg1;
- (void).cxx_destruct;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)end;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)start;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;

@end
