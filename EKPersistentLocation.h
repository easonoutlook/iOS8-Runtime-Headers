/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSNumber, NSString;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}

@property(copy) NSString * title;
@property(copy) NSString * address;
@property(copy) NSNumber * latitude;
@property(copy) NSNumber * longitude;
@property(copy) NSNumber * radius;
@property(copy) NSString * addressBookEntityID;
@property(copy) NSString * routing;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)address;
- (id)longitude;
- (id)latitude;
- (void)setLongitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)radius;
- (void)setRadius:(id)arg1;
- (id)description;
- (id)init;
- (int)entityType;
- (id)alarmOwner;
- (void)setAlarmOwner:(id)arg1;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (id)routing;
- (void)setAddress:(id)arg1;

@end
