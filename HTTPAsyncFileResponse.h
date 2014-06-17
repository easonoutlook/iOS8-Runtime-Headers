/* Generated by RuntimeBrowser.
   Image: /private/var/mobile/Containers/Bundle/Application/DDE3370B-7D9E-43B6-9A8A-C891DDE1C4A0/OCRuntime.app/OCRuntime
 */

@class HTTPConnection, NSString, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    BOOL aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned int readBufferSize;
    unsigned int readBufferOffset;
    unsigned int readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    BOOL readSourceSuspended;
}


- (void)abort;
- (BOOL)isDone;
- (id)filePath;
- (id)readDataOfLength:(unsigned int)arg1;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;
- (void)connectionDidClose;
- (void)cancelReadSource;
- (void)resumeReadSource;
- (BOOL)openFileIfNeeded;
- (BOOL)openFileAndSetupReadSource;
- (void)processReadBuffer;
- (void)pauseReadSource;

@end