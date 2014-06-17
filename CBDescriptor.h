/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBPeripheral, NSNumber, CBCharacteristic;

@interface CBDescriptor : CBAttribute  {
    CBCharacteristic *_characteristic;
    id _value;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
}

@property CBCharacteristic * characteristic;
@property(retain) id value;
@property(readonly) CBPeripheral * peripheral;
@property(readonly) NSNumber * handle;


- (id)handle;
- (id)characteristic;
- (id)peripheral;
- (id)value;
- (void)setValue:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)setCharacteristic:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;

@end
