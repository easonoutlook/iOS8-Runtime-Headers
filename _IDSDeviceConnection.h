/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSInputStream, NSString, NSObject<OS_dispatch_queue>, NSOutputStream;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {
    NSString *_nsuuid;
    BOOL _isDefaultPairedDevice;
    NSString *_service;
    NSString *_serviceToken;
    int _socket;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _openSocketCompletionHandler;

    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
}

@property(readonly) int socket;
@property(retain,readonly) NSInputStream * inputStream;
@property(retain,readonly) NSOutputStream * outputStream;


- (id)outputStream;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)_daemonDied:(id)arg1;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 queue:(id)arg4;
- (void)_connect;
- (id)inputStream;
- (void)_close;
- (void)close;
- (int)socket;
- (void)dealloc;

@end