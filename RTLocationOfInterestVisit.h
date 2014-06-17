/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_entryTime;
    NSDate *_exitTime;
}

@property(readonly) NSDate * entryTime;
@property(readonly) NSDate * exitTime;

+ (BOOL)supportsSecureCoding;

- (id)initWithEntryTime:(id)arg1 exitTime:(id)arg2;
- (id)localizedDateDetail;
- (id)localizedTimeDetail;
- (BOOL)_enteredAndExitedOnSameDay;
- (id)exitTime;
- (id)entryTime;
- (void).cxx_destruct;
- (id)localizedDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
