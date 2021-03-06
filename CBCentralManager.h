/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSMapTable, <CBCentralManagerDelegate>, CBPairingAgent, CBXpcConnection;

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    <CBCentralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didRetrievePeripherals : 1; 
        unsigned int didRetrieveConnectedPeripherals : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
    } _delegateFlags;
    int _state;
    BOOL _isScanning;
    NSMapTable *_peripherals;
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
}

@property <CBCentralManagerDelegate> * delegate;
@property int state;
@property(readonly) CBPairingAgent * sharedPairingAgent;


- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (id)sharedPairingAgent;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (void)setState:(int)arg1;
- (int)state;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (oneway void)release;
- (void)setDesiredConnectionLatency:(int)arg1 forPeripheral:(id)arg2;
- (void)retrieveConnectedPeripherals;
- (void)retrievePeripherals:(id)arg1;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (id)peerWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handleMtuChanged:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)dataArrayToUUIDArray:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2;
- (void)orphanPeripherals;
- (void)forEachPeripheral:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1 dict:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (BOOL)sendMsg:(int)arg1 args:(id)arg2;
- (BOOL)isMsgAllowedAlways:(int)arg1;
- (BOOL)isMsgAllowedWhenOff:(int)arg1;

@end
