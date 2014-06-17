/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, EKObjectID, NSString, NSDate, NSTimeZone;

@interface EKAlarmOccurrence : NSObject  {
    EKObjectID *_alarmID;
    EKObjectID *_ownerID;
    NSDate *_ownerDate;
    NSTimeZone *_ownerTimeZone;
    NSURL *_ownerURI;
    NSDate *_fireDate;
    NSString *_externalID;
    NSDate *_acknowledgedDate;
}

@property(readonly) EKObjectID * alarmID;
@property(readonly) EKObjectID * ownerID;
@property(readonly) NSDate * ownerDate;
@property(readonly) NSTimeZone * ownerTimeZone;
@property(readonly) NSURL * ownerURI;
@property(readonly) NSDate * fireDate;
@property(readonly) NSString * externalID;
@property(readonly) NSDate * acknowledgedDate;

+ (id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;

- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)fireDate;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;
- (id)alarmID;
- (id)ownerTimeZone;
- (id)ownerURI;
- (id)ownerDate;
- (id)ownerID;
- (id)acknowledgedDate;
- (id)externalID;

@end
