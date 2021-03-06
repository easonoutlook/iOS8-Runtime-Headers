/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {
    unsigned int _snapshotID;
    NSString *_deviceName;
    NSDate *_date;
    int _state;
    BOOL _isCompatible;
    NSString *_systemVersion;
    unsigned long long _quotaReserved;
}

@property(readonly) unsigned int snapshotID;
@property(readonly) NSString * deviceName;
@property(readonly) NSDate * date;
@property(readonly) int state;
@property(readonly) BOOL isCompatible;
@property(readonly) NSString * systemVersion;
@property(readonly) unsigned long long quotaReserved;


- (unsigned long long)quotaReserved;
- (BOOL)isCompatible;
- (unsigned int)snapshotID;
- (id)initWithSnapshotID:(unsigned int)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)systemVersion;
- (id)date;
- (int)state;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deviceName;
- (id)description;
- (void)dealloc;

@end
