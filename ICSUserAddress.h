/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString, ICSDateValue;

@interface ICSUserAddress : ICSProperty  {
}

@property BOOL rsvp;
@property(retain) NSString * cn;
@property int cutype;
@property(retain) NSString * dir;
@property int partstat;
@property int schedulestatus;
@property int scheduleagent;
@property int scheduleforcesend;
@property int role;
@property(retain) ICSDateValue * partstatModified;
@property BOOL x_apple_self_invited;
@property(retain) NSString * email;

+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (id)URLForNoMail;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)calendarUserFromICSString:(id)arg1;
+ (int)roleFromICSString:(id)arg1;

- (id)x_calendarserver_email;
- (void)setX_calendarserver_email:(id)arg1;
- (BOOL)x_apple_self_invited;
- (void)setX_apple_self_invited:(BOOL)arg1;
- (void)setPartstatModified:(id)arg1;
- (int)scheduleforcesend;
- (void)setScheduleforcesend:(int)arg1;
- (int)schedulestatus;
- (void)setSchedulestatus:(int)arg1;
- (BOOL)isHTTPSAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isEmailAddress;
- (void)fixAddress;
- (BOOL)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (void)setDir:(id)arg1;
- (id)dir;
- (id)email;
- (id)emailAddress;
- (BOOL)hasEmailAddress;
- (id)displayName;
- (void)setURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setRsvp:(BOOL)arg1;
- (void)setScheduleagent:(int)arg1;
- (void)setRole:(int)arg1;
- (void)setPartstat:(int)arg1;
- (void)setCutype:(int)arg1;
- (void)setCn:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (void)setEmail:(id)arg1;
- (id)partstatModified;
- (BOOL)rsvp;
- (int)scheduleagent;
- (int)role;
- (int)partstat;
- (int)cutype;
- (id)cn;

@end
