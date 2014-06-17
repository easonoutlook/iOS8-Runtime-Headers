/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSNumber, NSString, NSUUID;

@interface PKBeacon : NSObject <NSSecureCoding> {
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    NSString *_name;
    NSString *_relevantText;
}

@property(retain) NSUUID * proximityUUID;
@property(retain) NSNumber * major;
@property(retain) NSNumber * minor;
@property(retain) NSString * name;
@property(retain) NSString * relevantText;

+ (BOOL)supportsSecureCoding;

- (id)proximityUUIDAsString;
- (void)setProximityUUIDWithString:(id)arg1;
- (id)relevantText;
- (void)setRelevantText:(id)arg1;
- (void)setMinor:(id)arg1;
- (void)setMajor:(id)arg1;
- (void)setProximityUUID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)minor;
- (id)major;
- (id)proximityUUID;

@end
