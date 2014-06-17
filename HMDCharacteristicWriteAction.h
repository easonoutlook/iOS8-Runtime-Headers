/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDActionSet, HMDCharacteristic, NSUUID;

@interface HMDCharacteristicWriteAction : NSObject  {
    NSUUID *_uuid;
    HMDActionSet *_actionSet;
    HMDCharacteristic *_characteristic;
    id _targetValue;
}

@property(copy,readonly) NSUUID * uuid;
@property(readonly) HMDActionSet * actionSet;
@property(readonly) HMDCharacteristic * characteristic;
@property(copy) id targetValue;

+ (BOOL)supportsSecureCoding;

- (id)actionSet;
- (void)configure:(id)arg1 actionSet:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)characteristic;
- (id)uuid;
- (void).cxx_destruct;
- (id)targetValue;
- (void)setTargetValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end