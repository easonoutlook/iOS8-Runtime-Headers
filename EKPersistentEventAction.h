/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendarItem, NSString, NSData;

@interface EKPersistentEventAction : EKPersistentObject  {
}

@property(copy) NSString * externalID;
@property(copy) NSString * externalModTag;
@property(copy) NSString * externalFolderID;
@property(copy) NSString * externalScheduleID;
@property(copy) NSData * externalData;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)relations;

- (void)setOwner:(id)arg1;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (id)owner;
- (int)entityType;
- (void)setExternalModTag:(id)arg1;
- (id)externalModTag;
- (void)setExternalScheduleID:(id)arg1;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)arg1;
- (id)externalFolderID;
- (id)externalID;
- (void)setExternalID:(id)arg1;

@end
