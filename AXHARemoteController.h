/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSMutableData, AXHATimer, <AXHARemoteControllerDelegate>, NSMutableArray, NSInputStream, AXHARemoteMessage, NSNetService, NSOutputStream;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {
    <AXHARemoteControllerDelegate> *_delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_inputBuffer;
    NSMutableData *_outputBuffer;
    NSMutableArray *_ackQueue;
    AXHATimer *_ackTimer;
    AXHATimer *_dataTimer;
    AXHATimer *_communicationTimer;
    AXHARemoteMessage *_currentMessageInFlight;
}

@property <AXHARemoteControllerDelegate> * delegate;
@property(retain) NSNetService * service;
@property(retain) NSMutableArray * outputDataQueue;
@property(retain) NSInputStream * inputStream;
@property(retain) NSOutputStream * outputStream;
@property(retain) NSMutableData * inputBuffer;
@property(retain) NSMutableData * outputBuffer;
@property(retain) NSMutableArray * ackQueue;
@property(retain) AXHATimer * ackTimer;
@property(retain) AXHATimer * dataTimer;
@property(retain) AXHATimer * communicationTimer;
@property(retain) AXHARemoteMessage * currentMessageInFlight;


- (id)outputStream;
- (void)setService:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)resetConnection;
- (id)inputStream;
- (id)communicationTimer;
- (void)acceptConnection:(int)arg1;
- (void)receivedData:(id)arg1;
- (id)inputBuffer;
- (id)dataTimer;
- (void)clearMessageQueue;
- (void)openConnectionIfNecessary;
- (id)outputBuffer;
- (id)currentMessageInFlight;
- (void)sendDataChunk;
- (id)ackTimer;
- (void)messageWasAcked:(id)arg1;
- (void)didCommunicate;
- (void)enqueueData:(id)arg1;
- (id)nextMessageInQueue;
- (void)finishedSending:(id)arg1;
- (id)outputDataQueue;
- (id)ackQueue;
- (void)setCurrentMessageInFlight:(id)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)validatePairedAid;
- (void)setCommunicationTimer:(id)arg1;
- (void)setDataTimer:(id)arg1;
- (void)setAckTimer:(id)arg1;
- (void)setOutputBuffer:(id)arg1;
- (void)setInputBuffer:(id)arg1;
- (void)setAckQueue:(id)arg1;
- (void)setOutputDataQueue:(id)arg1;
- (BOOL)sendObject:(id)arg1;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(id)arg2 andAckCompletion:(id)arg3;
- (id)delegate;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)isConnecting;
- (id)service;
- (id)initWithService:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceWillResolve:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceWillPublish:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (BOOL)isConnected;

@end
