/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSDate;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand> {
}

@property double latitude;
@property double longitude;
@property double verticalAccuracy;
@property double horizontalAccuracy;
@property(retain) NSNumber * age;
@property double altitude;
@property(copy) NSString * desiredAccuracy;
@property double direction;
@property double speed;
@property(copy) NSString * status;
@property(copy) NSDate * timestamp;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRequestOrigin;

- (double)altitude;
- (void)setAge:(id)arg1;
- (id)age;
- (id)encodedClassName;
- (double)verticalAccuracy;
- (double)horizontalAccuracy;
- (void)setDesiredAccuracy:(id)arg1;
- (double)longitude;
- (double)latitude;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setAltitude:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (double)direction;
- (void)setDirection:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (id)desiredAccuracy;
- (id)groupIdentifier;

@end
