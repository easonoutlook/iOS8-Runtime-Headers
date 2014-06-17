/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_data>, <TSUStreamReadChannel>, NSObject<OS_dispatch_queue>, SFUCryptoKey;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {
    <TSUStreamReadChannel> *_readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long _ivRead;
    struct _CCCryptor { } *_cryptor;
    char *_buffer;
    unsigned long _initialBytesIgnored;
}


- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;

@end