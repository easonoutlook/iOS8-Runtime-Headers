/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSNumber, NSString, RadarProblemComponent;

@interface RadarTestSuiteRelatedProblem : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(copy) NSString * title;
@property(copy) NSString * relationType;
@property(retain) RadarProblemComponent * component;
@property(copy) NSString * state;
@property(copy) NSString * assignee;
@property(retain) NSNumber * caseNumber;
@property(retain) NSNumber * priority;
@property(retain) NSNumber * caseID;

+ (id)radarTestSuiteRelatedProblemFromDictionary:(id)arg1;


@end
