/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@class NSTimer, NSString, NSObject<OS_dispatch_source>, HTSHTTPServer, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {
    HTSHTTPServer *_server;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readActive;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeActive;
    int _socket;
    int _socketRefCount;
    struct __CFHTTPMessage { } *_incomingMessage;
    NSMutableArray *_incomingQueue;
    NSMutableArray *_outputQueue;
    BOOL _outputStalled;
    BOOL _closeOnEmptyQueue;
    NSString *_identifier;
    NSTimer *_idleTimer;
    double _lastActivity;
}

@property(readonly) NSString * identifier;
@property double lastActivity;
@property(retain) NSTimer * idleTimer;


- (id)idleTimer;
- (double)lastActivity;
- (void)printData:(id)arg1 withMessage:(id)arg2;
- (void)_shutdownIdleConnection:(id)arg1;
- (void)setIdleTimer:(id)arg1;
- (void)_processIncomingBytes:(const char *)arg1 length:(long)arg2;
- (void)_processStreamOutput;
- (void)_processStreamInput;
- (void)setLastActivity:(double)arg1;
- (void)_closeOutputStream;
- (void)_closeInputStream;
- (void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(BOOL)arg3;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (id)identifier;
- (void)dealloc;

@end
