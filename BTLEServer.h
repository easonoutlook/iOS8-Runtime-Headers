/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CBPeripheralManager, NSUUID, NSObject<OS_dispatch_queue>, NSDictionary, NSMutableDictionary;

@interface BTLEServer : NSObject <CBPeripheralManagerDelegate> {
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; } *_ucat;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_advertiseUUID;
    NSDictionary *_configuration;
    NSMutableDictionary *_characteristics;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _readHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _writeHandler;

    CBPeripheralManager *_peripheralManager;
    BOOL _started;
    NSMutableDictionary *_pendingReplies;
}

@property(copy) NSUUID * advertiseUUID;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }* logCategory;
@property(copy) NSDictionary * configuration;
@property(copy) id readHandler;
@property(copy) id writeHandler;


- (void)setAdvertiseUUID:(id)arg1;
- (id)advertiseUUID;
- (void)completeWriteRequests:(id)arg1 status:(long)arg2;
- (void)completeReadRequest:(id)arg1 status:(long)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (long)_start2;
- (id)writeHandler;
- (id)readHandler;
- (void)setWriteHandler:(id)arg1;
- (void)setReadHandler:(id)arg1;
- (void)setLogCategory:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }*)arg1;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }*)logCategory;
- (void)_stop:(long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_start;
- (void)start;
- (void)stop;
- (void)dealloc;
- (id)init;
- (id)dispatchQueue;

@end
