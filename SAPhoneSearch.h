/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSNumber, NSArray;

@interface SAPhoneSearch : SADomainCommand  {
}

@property(copy) NSArray * contacts;
@property(copy) NSDate * end;
@property(copy) NSNumber * faceTime;
@property(copy) NSNumber * faceTimeAudio;
@property(copy) NSNumber * isNew;
@property(copy) NSNumber * last;
@property(copy) NSNumber * missed;
@property(copy) NSNumber * outgoing;
@property(copy) NSDate * start;
@property(copy) NSNumber * voiceMail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (void)setVoiceMail:(id)arg1;
- (id)voiceMail;
- (id)outgoing;
- (void)setIsNew:(id)arg1;
- (void)setFaceTimeAudio:(id)arg1;
- (id)faceTimeAudio;
- (void)setFaceTime:(id)arg1;
- (id)faceTime;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setMissed:(id)arg1;
- (id)missed;
- (id)last;
- (void)setLast:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)end;
- (id)start;
- (id)groupIdentifier;
- (id)isNew;
- (void)setContacts:(id)arg1;
- (id)contacts;

@end
