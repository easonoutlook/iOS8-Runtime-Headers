/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarProblemMilestone, NSString, RadarProblemComponent, NSDate, NSNumber, RadarPerson;

@interface RadarProblemHistory : NUCModel <NSCoding> {
}

@property(retain) RadarPerson * changedBy;
@property(retain) NSDate * changedAt;
@property(retain) RadarPerson * assignee;
@property(copy) NSString * previousState;
@property(copy) NSString * changedState;
@property(retain) RadarPerson * proxyUser;
@property(retain) NSNumber * assignorsResponseCode;
@property(retain) NSDate * whenReadDate;
@property(retain) NSNumber * workTimeQuantity;
@property BOOL isReadByAssignee;
@property(retain) NSNumber * responseCode;
@property(retain) NSDate * whenReassignedDate;
@property(copy) NSString * assignedType;
@property(copy) NSString * assignmentType;
@property(retain) RadarProblemComponent * component;
@property(retain) RadarProblemMilestone * changedMilestone;
@property(retain) RadarProblemMilestone * previousMilestone;
@property(retain) NSNumber * changedPriority;
@property(retain) NSNumber * previousPriority;
@property(copy) NSString * changedEvent;
@property(copy) NSString * previousEvent;
@property(retain) NSNumber * changedComponentID;
@property(retain) NSNumber * previousComponentID;

+ (id)radarProblemHistoryFromDictionary:(id)arg1;

- (id)dateFormat;
- (id)description;

@end