/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class BSDispatchSource, NSLock;

@interface BSPortDeathWatcher : NSObject  {
    NSLock *_lock;
    BSDispatchSource *_source;
    unsigned int _port;
}

@property(readonly) unsigned int port;


- (BOOL)isWatchingValidPort;
- (id)initWithPort:(unsigned int)arg1 deathHandler:(id)arg2;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (unsigned int)port;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
