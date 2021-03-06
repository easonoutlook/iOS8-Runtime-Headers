/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSDate, NSNumber, NSURL;

@interface SACalendarEventSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSDate * endDate;
@property(copy) NSURL * eventId;
@property(retain) NSNumber * limit;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(copy) NSArray * participants;
@property(copy) NSDate * startDate;
@property(copy) NSString * timeZoneId;
@property(copy) NSString * title;

+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)eventSearch;

- (void)setLocation:(id)arg1;
- (id)endDate;
- (id)startDate;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEventId:(id)arg1;
- (id)eventId;
- (id)limit;
- (void)setLimit:(id)arg1;
- (void)setParticipants:(id)arg1;
- (id)participants;
- (id)location;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)groupIdentifier;
- (void)setNotes:(id)arg1;
- (id)notes;

@end
