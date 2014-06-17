/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection, NSObject<OS_dispatch_queue>, <GameControllerDaemon>, NSTimer, NSMutableDictionary;

@interface GCControllerManager : NSObject <GameControllerDaemonListener> {
    NSXPCConnection *_connection;
    <GameControllerDaemon> *_remote;
    struct __IOHIDManager { } *_hidManager;
    NSMutableDictionary *_controllersByUDID;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    struct IONotificationPort { } *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _logger;

    BOOL _idleTimerNeedsReset;
    NSTimer *_idleWatchTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestConnectedHostsCallback;

}

@property struct __IOHIDManager { }* hidManager;
@property(copy) id logger;
@property(retain) NSXPCConnection * connection;
@property(retain) <GameControllerDaemon> * remote;
@property BOOL idleTimerNeedsReset;


- (void)open;
- (id)remote;
- (void)setRemote:(id)arg1;
- (void)setLogger:(id)arg1;
- (id)logger;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setIdleTimerNeedsReset:(BOOL)arg1;
- (BOOL)idleTimerNeedsReset;
- (void)setHidManager:(struct __IOHIDManager { }*)arg1;
- (struct __IOHIDManager { }*)hidManager;
- (id)controllers;
- (void)requestConnectedHostsWithHandler:(id)arg1;
- (void)startIdleWatchTimer;
- (void)replyConnectedHosts:(id)arg1;
- (void)controllerWithUDID:(unsigned int)arg1 setArrayValue:(float*)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned int)arg1 setData:(id)arg2;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;
- (void)updateIdleTimer:(id)arg1;

@end