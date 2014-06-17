/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSDate, NSString, RadarPerson;

@interface RadarWorkGroupMember : NUCModel <NSCoding> {
}

@property(retain) RadarPerson * person;
@property(copy) NSString * department;
@property(retain) NSDate * lastModifiedAt;
@property(retain) RadarPerson * lastModifiedBy;
@property(copy) NSString * privilege;
@property(copy) NSString * company;

+ (id)radarWorkGroupMemberFromDictionary:(id)arg1;

- (id)dateFormat;
- (id)description;

@end
