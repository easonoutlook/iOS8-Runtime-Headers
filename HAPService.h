/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class NSArray, NSString, HAPAccessory, NSNumber;

@interface HAPService : NSObject  {
    BOOL _primary;
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_includedServices;
}

@property(copy) NSString * type;
@property(copy) NSNumber * instanceID;
@property(getter=isPrimary) BOOL primary;
@property HAPAccessory * accessory;
@property(retain) NSArray * characteristics;
@property(readonly) NSArray * includedServices;


- (void)setPrimary:(BOOL)arg1;
- (id)characteristics;
- (void)setCharacteristics:(id)arg1;
- (id)includedServices;
- (void)setInstanceID:(id)arg1;
- (id)accessory;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)instanceID;
- (void)setAccessory:(id)arg1;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg1;
- (id)description;
- (BOOL)isPrimary;

@end
