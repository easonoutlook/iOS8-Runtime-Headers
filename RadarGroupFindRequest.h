/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarGroupPersonnel, NSString, RadarProblemComponent;

@interface RadarGroupFindRequest : NUCModel <NSCoding, NUCJSONObjectCusomKeyValue> {
}

@property(copy) NSString * name;
@property(copy) NSString * type;
@property(copy) NSString * groupDescription;
@property(copy) NSString * dsGroupName;
@property BOOL hasExternalUsers;
@property BOOL isSyncDSGroup;
@property(retain) RadarGroupPersonnel * personnel;
@property(retain) RadarProblemComponent * component;


- (id)propertyNamesForKeysInJSON;
- (id)customJSONKeysForProperties;
- (id)dictionary;

@end
