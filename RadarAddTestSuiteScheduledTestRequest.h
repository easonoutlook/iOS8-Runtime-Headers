/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarProblemComponent, NSString, NSDate, NSNumber;

@interface RadarAddTestSuiteScheduledTestRequest : NUCModel <NSCoding> {
}

@property(retain) NSNumber * suiteID;
@property(retain) RadarProblemComponent * component;
@property(retain) NSNumber * owner;
@property(retain) NSNumber * tester;
@property(retain) NSDate * scheduledStartDate;
@property(retain) NSDate * scheduledEndDate;
@property(copy) NSString * testCycle;
@property(copy) NSString * geography;
@property(copy) id datesTrackToMilestone;
@property(copy) id datesTrackToBuild;
@property(copy) id build;
@property(copy) NSString * testConfiguration;


- (id)dateFormat;
- (id)dictionary;

@end
