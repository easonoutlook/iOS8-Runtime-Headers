/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarComponentBundleRequest, RadarProblemComponent, NSOrderedSet, NSString, NSNumber, NSDate;

@interface RadarFindScheduledTestRequest : NUCModel <NSCoding> {
}

@property(retain) RadarProblemComponent * component;
@property(retain) NSNumber * tester;
@property(retain) NSOrderedSet * status;
@property(retain) NSNumber * scheduledID;
@property(retain) NSNumber * suiteID;
@property(copy) NSString * keyword;
@property(copy) NSString * additionalWhereClause;
@property(copy) NSString * title;
@property(retain) NSNumber * priority;
@property(copy) NSString * complexity;
@property(copy) NSString * geography;
@property(copy) NSString * trackName;
@property(copy) NSString * applicationName;
@property(copy) NSString * category;
@property(copy) NSString * build;
@property(copy) NSString * suiteTitle;
@property(copy) NSString * datesTrackToBuild;
@property(copy) NSString * datesTrackToMilestone;
@property(copy) NSString * testCycle;
@property(retain) NSDate * createdAt;
@property(retain) NSDate * lastModifiedAt;
@property(retain) NSDate * scheduledStartDate;
@property(retain) NSDate * scheduledEndDate;
@property(retain) NSNumber * owner;
@property(retain) NSNumber * currentTester;
@property(retain) NSNumber * lastModifiedBy;
@property(retain) NSNumber * author;
@property(retain) NSNumber * failCaseCount;
@property(retain) NSNumber * problemID;
@property(retain) RadarComponentBundleRequest * componentBundle;
@property(retain) NSNumber * isOneTestCaseFailed;
@property(retain) NSNumber * completedCasePercent;
@property(retain) NSNumber * passedCasePercent;
@property(retain) NSNumber * failedCasePercent;
@property(retain) NSNumber * blockedCasePercent;
@property(retain) NSNumber * naCasePercent;
@property(retain) NSNumber * noValueCasePercent;
@property(copy) NSString * actualTimeAllCases;
@property(copy) NSString * actualTimeNoValueCases;
@property(copy) NSString * actualTimePassedCases;
@property(copy) NSString * actualTimeFailedCases;
@property(copy) NSString * actualTimeBlockedCases;
@property(copy) NSString * actualTimeNACases;
@property(copy) NSString * expectedTimeAllCases;
@property(copy) NSString * expectedTimeNoValueCases;
@property(copy) NSString * expectedTimePassedCases;
@property(copy) NSString * expectedTimeFailedCases;
@property(copy) NSString * expectedTimeBlockedCases;
@property(copy) NSString * expectedTimeNACases;


- (id)dateFormat;
- (id)dictionary;

@end
