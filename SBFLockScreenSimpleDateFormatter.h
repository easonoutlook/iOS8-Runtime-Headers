/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSTimeZone;

@interface SBFLockScreenSimpleDateFormatter : NSObject <SBFLockScreenDateFormatter> {
    NSTimeZone *_timeZone;
}

@property(retain) NSTimeZone * timeZone;


- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (void)resetFormattersIfNecessary;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;

@end