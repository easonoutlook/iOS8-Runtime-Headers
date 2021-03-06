/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKAttendee : EKParticipant  {
}

@property int pendingStatus;
@property(readonly) NSDate * lastModifiedParticipationStatus;
@property BOOL commentChanged;
@property BOOL statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (void)setParticipantType:(int)arg1;
- (int)participantType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)owner;
- (id)description;
- (id)init;
- (id)lastModifiedParticipationStatus;
- (id)_persistentAttendee;
- (BOOL)statusChanged;
- (void)setStatusChanged:(BOOL)arg1;
- (BOOL)commentChanged;
- (void)setCommentChanged:(BOOL)arg1;
- (void)setPendingStatus:(int)arg1;
- (int)pendingStatus;
- (void)setParticipantRole:(int)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (int)participantRole;
- (BOOL)isCurrentUser;
- (void)setParticipantStatus:(int)arg1;
- (int)participantStatus;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

@end
