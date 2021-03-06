/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarProblemAttachementPrivileges, NSString, NSDate, NSNumber, RadarPerson;

@interface RadarProblemAttachment : NUCModel <NSCoding> {
}

@property(copy) NSString * fileName;
@property(retain) NSNumber * fileSize;
@property(retain) NSDate * addedAt;
@property(retain) RadarPerson * addedBy;
@property(retain) RadarProblemAttachementPrivileges * privileges;
@property(retain) NSString * fileId;
@property(retain) NSDate * createdAt;
@property(retain) NSDate * lastModifiedAt;
@property(copy) NSString * encodeType;
@property(retain) NSNumber * pictureOrder;

+ (id)radarProblemAttachmentFromDictionary:(id)arg1;

- (id)dateFormat;
- (id)initWithFileName:(id)arg1;
- (id)description;
- (id)init;

@end
