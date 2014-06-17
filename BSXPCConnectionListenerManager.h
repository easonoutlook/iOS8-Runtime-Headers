/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BSXPCConnectionListenerManager : NSObject  {
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}

+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (void)stopListeningForService:(id)arg1;
+ (id)defaultHandlerQueue;
+ (id)sharedInstance;

- (void)_removeService:(id)arg1;
- (void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (id)_defaultHandlerQueue;
- (id)_init;
- (void)dealloc;
- (id)init;

@end