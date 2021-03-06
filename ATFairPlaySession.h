/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATFairPlaySession : NSObject  {
    unsigned long _contextId;
}


- (struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })_fpHWInfoFromString:(id)arg1;
- (BOOL)contextIsValid;
- (id)hostSyncPrepareKeybagResponseForRequest:(id)arg1 withDeviceCertificate:(id)arg2 hwInfoString:(id)arg3 deviceType:(unsigned int)arg4 supportVersion:(unsigned int)arg5;
- (id)importKeybag:(id)arg1;
- (id)generateKeybagRequest:(id*)arg1;
- (struct DeviceKeyTypeSupport { int x1; unsigned int x2; })deviceKeyTypeSupport;
- (id)hwInfoString;
- (id)deviceCertificate:(id*)arg1;
- (id)keybagData;
- (void)dealloc;
- (id)init;

@end
