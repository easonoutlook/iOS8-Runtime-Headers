/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString, NSInputStream, NSOutputStream, EAAccessory;

@interface EASession : NSObject  {
    EAAccessory *_accessory;
    unsigned int _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    BOOL _openCompleted;
    int _sock;
}

@property(readonly) EAAccessory * accessory;
@property(readonly) NSString * protocolString;
@property(readonly) NSInputStream * inputStream;
@property(readonly) NSOutputStream * outputStream;


- (id)_shortDescription;
- (id)outputStream;
- (id)accessory;
- (id)inputStream;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setOpenCompleted:(BOOL)arg1;
- (BOOL)isOpenCompleted;
- (void)_endStreams;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (void)_streamClosed;
- (unsigned int)_sessionID;
- (id)protocolString;

@end
