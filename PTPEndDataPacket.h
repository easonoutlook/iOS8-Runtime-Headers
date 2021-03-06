/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSData;

@interface PTPEndDataPacket : NSObject  {
    unsigned short _operationCode;
    unsigned long _transactionID;
    NSData *_data;
}


- (void)setOperationCode:(unsigned short)arg1;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (id)contentForUSB;
- (id)initWithUSBBuffer:(void*)arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3;
- (unsigned short)operationCode;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setData:(id)arg1;
- (id)data;
- (id)description;
- (void)dealloc;

@end
