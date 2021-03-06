/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableArray, IMWeakReference;

@interface IDSBaseSocketPairConnection : NSObject  {
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long _bytesReceived;
    double _prevBPS;
    BOOL _writeSourceIsResumed;
}

@property(readonly) int socket;


- (BOOL)sendData:(id)arg1;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)_processBytesAvailable;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)setDestination:(id)arg1;
- (int)socket;
- (void)endSession;
- (void)start;
- (void)dealloc;

@end
