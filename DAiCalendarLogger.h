/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate> {
}

+ (id)sharedLogger;

- (void)registerWithiCalendar;
- (void)logICSMessage:(id)arg1 atLevel:(int)arg2;

@end
