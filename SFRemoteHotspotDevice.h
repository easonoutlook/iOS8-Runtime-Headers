/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {
    unsigned char _networkType;
    NSString *_deviceName;
    NSString *_deviceIdentifier;
    NSNumber *_batteryLife;
    NSNumber *_signalStrength;
}

@property(copy) NSString * deviceName;
@property(copy) NSString * deviceIdentifier;
@property(retain) NSNumber * batteryLife;
@property unsigned char networkType;
@property(retain) NSNumber * signalStrength;

+ (BOOL)supportsSecureCoding;

- (void)setNetworkType:(unsigned char)arg1;
- (void)setBatteryLife:(id)arg1;
- (id)batteryLife;
- (void)setDeviceName:(id)arg1;
- (void)setSignalStrength:(id)arg1;
- (id)signalStrength;
- (id)deviceIdentifier;
- (void)setDeviceIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deviceName;
- (void)dealloc;
- (unsigned char)networkType;

@end
