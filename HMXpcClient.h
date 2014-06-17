/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSObject<OS_dispatch_queue>, HMMessageDispatcher, NSXPCConnection;

@interface HMXpcClient : NSObject <HMMessageTransport> {
    HMMessageDispatcher *_messageDispatcher;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(readonly) HMMessageDispatcher * messageDispatcher;
@property(retain) NSXPCConnection * xpcConnection;
@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;


- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (id)messageDispatcher;
- (void)setCallbackQueue:(id)arg1;
- (id)callbackQueue;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end