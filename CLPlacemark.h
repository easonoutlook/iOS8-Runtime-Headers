/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, NSArray, CLPlacemarkInternal, CLRegion, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property(copy,readonly) CLLocation * location;
@property(copy,readonly) CLRegion * region;
@property(copy,readonly) NSDictionary * addressDictionary;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * thoroughfare;
@property(copy,readonly) NSString * subThoroughfare;
@property(copy,readonly) NSString * locality;
@property(copy,readonly) NSString * subLocality;
@property(copy,readonly) NSString * administrativeArea;
@property(copy,readonly) NSString * subAdministrativeArea;
@property(copy,readonly) NSString * postalCode;
@property(copy,readonly) NSString * ISOcountryCode;
@property(copy,readonly) NSString * country;
@property(copy,readonly) NSString * inlandWater;
@property(copy,readonly) NSString * ocean;
@property(copy,readonly) NSArray * areasOfInterest;

+ (BOOL)supportsSecureCoding;
+ (id)placemarkWithGEOMapItem:(id)arg1;

- (id)postalCode;
- (id)thoroughfare;
- (id)subLocality;
- (id)locality;
- (id)subAdministrativeArea;
- (id)administrativeArea;
- (id)country;
- (id)_geoMapItem;
- (id)areasOfInterest;
- (id)inlandWater;
- (id)ocean;
- (id)subThoroughfare;
- (id)fullThoroughfare;
- (id)formattedAddressLines;
- (id)region;
- (id)location;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)ISOcountryCode;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)addressDictionary;
- (id)_initWithGeoMapItem:(id)arg1;

@end
