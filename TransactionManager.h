/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSXPCInterface, NSMutableArray, NSXPCConnection;

@interface TransactionManager : CHSynchronizedLoggable  {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}


- (void)setupConnectionHandlers_sync;
- (void)createXpcConnection_sync;
- (void)createXpcConnection;
- (void)appendTransactions:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end