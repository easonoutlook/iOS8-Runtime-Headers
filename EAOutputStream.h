/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class EAAccessory, NSRecursiveLock, EASession;

@interface EAOutputStream : NSOutputStream  {
    id _delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    struct __CFSocket { } *_cfSocket;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _hasSpaceAvailable;
    BOOL _isAtEndEventSent;
    unsigned int _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
}


- (void)open;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (id)propertyForKey:(id)arg1;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)hasSpaceAvailable;
- (void)close;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_streamWriteable;
- (void)endStream;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;
- (void)_performAtEndOfStreamValidation;
- (void)openCompleted;
- (void)_accessoryDidDisconnect:(id)arg1;
- (id)streamError;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;

@end