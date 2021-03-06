/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class CLLocation, NSString;

@interface EKStructuredLocation : EKObject <NSCopying> {
}

@property(retain) NSString * title;
@property(retain) CLLocation * geoLocation;
@property double radius;
@property(copy) NSString * addressBookEntityID;
@property(readonly) BOOL isStructured;
@property(retain) NSString * address;
@property(retain) NSString * routing;

+ (id)locationWithTitle:(id)arg1;

- (id)address;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)description;
- (id)init;
- (id)_asCalLocation;
- (BOOL)isEqualToLocation:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (id)_persistentLocation;
- (void)setRouting:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (id)geoLocation;
- (BOOL)isStructured;
- (id)routing;
- (void)updatePersistentObject;
- (void)setAddress:(id)arg1;
- (id)humanReadableContactString;

@end
