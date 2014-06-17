/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_data>;

@interface NEIPC : NSObject  {
    int _socket;
    NSObject<OS_dispatch_io> *_socket_io;
    NSObject<OS_dispatch_data> *_previousData;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageHandler;

}

@property int socket;
@property(retain) NSObject<OS_dispatch_io> * socket_io;
@property(retain) NSObject<OS_dispatch_data> * previousData;
@property(copy) id messageHandler;


- (void).cxx_destruct;
- (BOOL)sendMessageWithType:(unsigned int)arg1 data:(id)arg2 andQueue:(id)arg3;
- (void)startWithQueue:(id)arg1 messageHandler:(id)arg2;
- (id)initWithSocket:(int)arg1;
- (void)logMessageType:(unsigned int)arg1 data:(id)arg2 actionString:(id)arg3;
- (BOOL)parseMessageFromData:(id)arg1 messageHeader:(struct { unsigned int x1; unsigned int x2; }*)arg2 messageData:(id*)arg3;
- (void)setPreviousData:(id)arg1;
- (id)previousData;
- (id)socket_io;
- (void)setSocket_io:(id)arg1;
- (id)messageHandler;
- (void)setSocket:(int)arg1;
- (int)socket;
- (void)setMessageHandler:(id)arg1;
- (void)stop;

@end
