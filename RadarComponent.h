/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarPerson, RadarComponentOrderdSet, NSString, RadarComponentFollowOnComponent, NSNumber, RadarComponent;

@interface RadarComponent : NUCModel <NSCoding, NUCJSONObjectCusomKeyValue> {
}

@property(retain) NSNumber * id;
@property(copy) NSString * name;
@property(copy) NSString * version;
@property(copy) NSString * componentDescription;
@property BOOL isClosed;
@property BOOL isRestricted;
@property BOOL isRootLevel;
@property BOOL isOpenToExternals;
@property BOOL isDropBox;
@property BOOL doesInheritAccessGroups;
@property BOOL doesInheritBuildsAndMilestones;
@property BOOL doesInheritDescriptionTemplates;
@property(retain) RadarComponent * parent;
@property(retain) RadarComponentOrderdSet * subcomponents;
@property(retain) RadarPerson * owner;
@property(retain) RadarPerson * epm;
@property(retain) RadarPerson * screener;
@property(retain) RadarPerson * integrator;
@property(retain) RadarPerson * builder;
@property(retain) RadarPerson * verifier;
@property BOOL treeLimited;
@property(retain) RadarComponentFollowOnComponent * followOnComponent;
@property(copy) NSString * privilege;

+ (id)radarComponentFromDictionary:(id)arg1;

- (id)propertyNamesForKeysInJSON;
- (id)customJSONKeysForProperties;
- (id)description;

@end