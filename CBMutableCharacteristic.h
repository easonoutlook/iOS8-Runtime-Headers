/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBUUID, NSArray, NSData, NSNumber, NSMutableArray;

@interface CBMutableCharacteristic : CBCharacteristic  {
    NSNumber *_ID;
    unsigned int _permissions;
    NSMutableArray *_subscribedCentrals;
}

@property unsigned int permissions;
@property(retain,readonly) NSArray * subscribedCentrals;
@property(retain) CBUUID * UUID;
@property unsigned int properties;
@property(retain) NSData * value;
@property(retain) NSArray * descriptors;
@property(retain) NSNumber * ID;


- (id)initWithType:(id)arg1 properties:(unsigned int)arg2 value:(id)arg3 permissions:(unsigned int)arg4;
- (void)setID:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setProperties:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)subscribedCentrals;
- (void)setPermissions:(unsigned int)arg1;
- (unsigned int)permissions;
- (void)handlePowerNotOn;
- (BOOL)handleCentralUnsubscribed:(id)arg1;
- (BOOL)handleCentralSubscribed:(id)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)ID;

@end