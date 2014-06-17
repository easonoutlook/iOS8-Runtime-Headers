/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSNumber, NSString;

@interface RadarPerson : NUCModel <NSCoding> {
}

@property(retain) NSNumber * dsid;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * email;
@property(copy) NSString * type;
@property(copy) NSString * phone;

+ (id)radarPersonFromDictionary:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (id)description;

@end
