/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarComponent, RadarProblemMilestone, RadarProductSecurityAffectedProduct, RadarProductSecurityRecommendedReleaseVehicle, NSNumber, RadarProductSecurityPlannedReleaseVehicle;

@interface RadarProductSecurityTarget : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(retain) RadarProductSecurityAffectedProduct * affectedProduct;
@property(retain) RadarProductSecurityRecommendedReleaseVehicle * recommendedReleaseVehicle;
@property(retain) RadarProductSecurityPlannedReleaseVehicle * plannedReleaseVehicle;
@property(retain) NSNumber * trackingProblemID;
@property BOOL isCriticalToFix;
@property BOOL isVerified;
@property(retain) RadarComponent * component;
@property(retain) RadarProblemMilestone * trackingProblemMilestone;

+ (id)radarProductSecurityTargetFromDictionary:(id)arg1;


@end
