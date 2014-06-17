/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class NSUUID, NSData, NSArray;

@interface RTRoute : NSObject <NSSecureCoding> {
    NSArray *_waypoints;
    NSData *_zilchPoints;
    NSUUID *_uuid;
}

@property(readonly) NSArray * waypoints;
@property(readonly) NSData * zilchPoints;
@property(readonly) NSUUID * uuid;

+ (BOOL)supportsSecureCoding;

- (id)waypoints;
- (id)zilchPoints;
- (void)updateWithNewZilchPoints:(id)arg1;
- (id)initWithWaypoints:(id)arg1 andZilchPoints:(id)arg2;
- (id)uuid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
