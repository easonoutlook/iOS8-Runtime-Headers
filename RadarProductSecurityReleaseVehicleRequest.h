/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSString, RadarStringOrderedSet;

@interface RadarProductSecurityReleaseVehicleRequest : NUCModel <NSCoding> {
}

@property(copy) NSString * name;
@property BOOL isClosed;
@property BOOL isRestricted;
@property(retain) RadarStringOrderedSet * groupNames;


- (id)initWithName:(id)arg1;
- (id)dictionary;

@end
