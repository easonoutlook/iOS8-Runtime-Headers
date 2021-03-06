/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, NSData, CBService, NSNumber, CBPeripheral;

@interface CBCharacteristic : CBAttribute  {
    CBService *_service;
    unsigned int _properties;
    NSData *_value;
    NSArray *_descriptors;
    BOOL _isBroadcasted;
    BOOL _isNotifying;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property CBService * service;
@property(readonly) unsigned int properties;
@property(retain) NSData * value;
@property(retain) NSArray * descriptors;
@property(readonly) BOOL isBroadcasted;
@property BOOL isNotifying;
@property(readonly) CBPeripheral * peripheral;
@property(readonly) NSNumber * handle;
@property(readonly) NSNumber * valueHandle;


- (void)setService:(id)arg1;
- (id)handle;
- (id)peripheral;
- (void)setDescriptors:(id)arg1;
- (id)descriptors;
- (unsigned int)properties;
- (id)value;
- (void)setValue:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)service;
- (BOOL)isNotifying;
- (BOOL)isBroadcasted;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)valueHandle;
- (void)setIsNotifying:(BOOL)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;

@end
