/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class NSObject<OS_dispatch_queue>, <CECBusPollingOperationDelegate>, CECInterface;

@interface CECBusPollingOperation : NSObject  {
    CECInterface *_interface;
    unsigned char _initiatorAddress;
    unsigned char _pollingAddress;
    NSObject<OS_dispatch_queue> *_queue;
    <CECBusPollingOperationDelegate> *_delegate;
}

@property <CECBusPollingOperationDelegate> * delegate;


- (void)poll;
- (void)continuePolling;
- (void)startPolling;
- (id)initWithInterface:(id)arg1 initiator:(unsigned char)arg2 queue:(id)arg3;
- (void)stopPolling;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end