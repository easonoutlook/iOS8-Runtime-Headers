/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarPerson, NSString, NSNumber, RadarComponentBundleComponentOrderdSet;

@interface RadarComponentBundle : NUCModel <NSCoding, NUCJSONObjectCusomKeyValue> {
}

@property(retain) NSNumber * id;
@property(copy) NSString * name;
@property(copy) NSString * componentBundleDescription;
@property(retain) RadarComponentBundleComponentOrderdSet * components;
@property(retain) RadarPerson * owner;
@property BOOL isActive;
@property BOOL isPublic;

+ (id)radarComponentBundleFromDictionary:(id)arg1;

- (id)propertyNamesForKeysInJSON;
- (id)customJSONKeysForProperties;
- (id)dictionary;
- (id)description;

@end
