/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class CBCentralManager, NSString, CBPeripheral;

@interface AMSBTLEPeripheral : NSObject  {
    CBPeripheral *peripheral;
    NSString *uuid;
    NSString *name;
    CBCentralManager *centralManager;
    double lastSeen;
    BOOL inputAvailable;
    BOOL outputAvailable;
    BOOL online;
    BOOL shouldDisconnect;
    BOOL _changingState;
}

@property(readonly) CBPeripheral * peripheral;
@property(retain,readonly) NSString * uuid;
@property(retain) NSString * name;
@property double lastSeen;
@property BOOL inputAvailable;
@property BOOL outputAvailable;
@property(getter=isOnline) BOOL online;
@property(getter=isChangingState) BOOL changingState;


- (void)setOnline:(BOOL)arg1;
- (BOOL)isOnline;
- (BOOL)hidden;
- (BOOL)outputAvailable;
- (BOOL)inputAvailable;
- (id)peripheral;
- (double)lastSeen;
- (void)setLastSeen:(double)arg1;
- (BOOL)isChangingState;
- (id)uuid;
- (BOOL)disconnect;
- (BOOL)connect;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)setOutputAvailable:(BOOL)arg1;
- (void)setInputAvailable:(BOOL)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3;
- (void)setChangingState:(BOOL)arg1;

@end
