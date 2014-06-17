/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class NSArray, HAPAccessory, NSString, NSObject<OS_dispatch_queue>;

@interface HAPAccessoryServer : NSObject  {
    BOOL _reachable;
    BOOL _paired;
    BOOL _unconnected;
    NSString *_identifier;
    NSString *_name;
    HAPAccessory *_primaryAccessory;
    NSArray *_accessories;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_pairSetupPassword;
}

@property(getter=isReachable) BOOL reachable;
@property(copy) NSString * identifier;
@property(copy,readonly) NSString * name;
@property(copy) HAPAccessory * primaryAccessory;
@property(copy) NSArray * accessories;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(copy) NSString * pairSetupPassword;
@property(getter=isPaired) BOOL paired;
@property(getter=isUnconnected) BOOL unconnected;


- (void)setUnconnected:(BOOL)arg1;
- (BOOL)isUnconnected;
- (void)setPaired:(BOOL)arg1;
- (void)setPairSetupPassword:(id)arg1;
- (id)pairSetupPassword;
- (id)accessories;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (BOOL)isReachable;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2 withCompletionHandler:(id)arg3;
- (void)readValueForDescriptor:(id)arg1 withCompletionHandler:(id)arg2;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverServices:(id)arg1 forAccessory:(id)arg2;
- (BOOL)pairAdditionalControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)stopPairingWithError:(id*)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (BOOL)startPairingWithError:(id*)arg1;
- (void)discoverAccessories;
- (id)primaryAccessory;
- (BOOL)isPaired;
- (id)briefDescription;
- (BOOL)removePairingForControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (void)setAccessories:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)name;
- (id)init;
- (id)dispatchQueue;

@end
