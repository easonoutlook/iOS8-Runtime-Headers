/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSObject<OS_dispatch_queue>, <WCMClientDelegate>, NSObject<OS_xpc_object>;

@interface VCWCMClient : NSObject  {
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    <WCMClientDelegate> *wcmClientDelegate;
}

@property(readonly) NSObject<OS_xpc_object> * connection;
@property(readonly) NSObject<OS_dispatch_queue> * connectionQueue;
@property(retain) <WCMClientDelegate> * wcmClientDelegate;


- (id)wcmClientDelegate;
- (id)connectionQueue;
- (void)stopWCMClient;
- (void)startWCMClient;
- (void)setWcmClientDelegate:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)init;

@end
