/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSUUID, NSObject<OS_dispatch_semaphore>, NSXPCConnection, ML3DatabaseConnection;

@interface MLDActiveTransaction : NSObject  {
    ML3DatabaseConnection *_connection;
    NSObject<OS_dispatch_semaphore> *_connectionSemaphore;
    BOOL _terminable;
    BOOL _inUseByOperation;
    BOOL _startedByOperation;
    BOOL _connectionInUse;
    NSUUID *_identifier;
    NSXPCConnection *_xpcConnection;
    double _lastUsedTime;
}

@property(retain) NSUUID * identifier;
@property(retain) NSXPCConnection * xpcConnection;
@property double lastUsedTime;
@property BOOL terminable;
@property BOOL inUseByOperation;
@property BOOL startedByOperation;
@property(readonly) BOOL connectionInUse;


- (BOOL)startedByOperation;
- (void)setLastUsedTime:(double)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)checkInTransactionConnection:(id)arg1;
- (id)checkoutTransactionConnection;
- (BOOL)terminable;
- (BOOL)inUseByOperation;
- (BOOL)connectionInUse;
- (double)lastUsedTime;
- (id)relinquishConnection:(BOOL)arg1;
- (id)initWithConnection:(id)arg1 identifier:(id)arg2 xpcConnection:(id)arg3;
- (id)xpcConnection;
- (void)setInUseByOperation:(BOOL)arg1;
- (void)updateLastUsed;
- (void)setStartedByOperation:(BOOL)arg1;
- (void)useConnectionWithBlock:(id)arg1;
- (void)setTerminable:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (id)init;

@end
