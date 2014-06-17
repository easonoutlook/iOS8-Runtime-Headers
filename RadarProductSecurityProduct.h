/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSNumber, NSString, RadarProductSecurityGroupOrderedSet;

@interface RadarProductSecurityProduct : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(copy) NSString * name;
@property BOOL isClosed;
@property BOOL isRestricted;
@property(retain) RadarProductSecurityGroupOrderedSet * groups;

+ (id)radarProductSecurityProductFromDictionary:(id)arg1;

- (id)description;

@end