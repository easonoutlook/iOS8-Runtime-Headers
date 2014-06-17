/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLSession, NSOperationQueue, NSOutputStream, NSInputStream, NSURLSessionDataTask, NSDictionary;

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSStreamDelegate> {
    BOOL _didOpen;
    BOOL _isValid;
    BOOL _isTaskDone;
    struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; int x5; double x6; double x7; double x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; struct __CFUUID {} *x16; double x17; double x18; int x19; long long x20; long long x21; double x22; unsigned long long x23; double x24; long long x25; double x26; unsigned long long x27; int x28; int x29; struct __CFError {} *x30; struct __CFHTTPMessage {} *x31; unsigned char x32; unsigned long long x33; struct __CFDictionary {} *x34; double x35; struct __CFHTTPMessage {} *x36; unsigned char x37; struct __CFData {} *x38; struct __sFILE {} *x39; struct __sFILE {} *x40; struct __CFString {} *x41; struct __CFString {} *x42; unsigned short x43; unsigned char x44; struct mmcs_metrics_http_info {} *x45; int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); void *x51; void *x52; struct mmcs_read_stream_pool {} *x53; struct __CFRunLoop {} *x54; struct __CFArray {} *x55; union { struct mmcs_cfnetwork_http_context {} *x_56_1_1; struct mmcs_nsurlsession_http_context {} *x_56_1_2; struct mmcs_curl_http_context {} *x_56_1_3; } x56; } *_hc;
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_timingData;
}

@property struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; int x5; double x6; double x7; double x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; struct __CFUUID {} *x16; double x17; double x18; int x19; long long x20; long long x21; double x22; unsigned long long x23; double x24; long long x25; double x26; unsigned long long x27; int x28; int x29; struct __CFError {} *x30; struct __CFHTTPMessage {} *x31; unsigned char x32; unsigned long long x33; struct __CFDictionary {} *x34; double x35; struct __CFHTTPMessage {} *x36; unsigned char x37; struct __CFData {} *x38; struct __sFILE {} *x39; struct __sFILE {} *x40; struct __CFString {} *x41; struct __CFString {} *x42; unsigned short x43; unsigned char x44; struct mmcs_metrics_http_info {} *x45; int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); void *x51; void *x52; struct mmcs_read_stream_pool {} *x53; struct __CFRunLoop {} *x54; struct __CFArray {} *x55; union { struct mmcs_cfnetwork_http_context {} *x_56_1_1; struct mmcs_nsurlsession_http_context {} *x_56_1_2; struct mmcs_curl_http_context {} *x_56_1_3; } x56; }* hc;
@property(retain) NSURLSession * urlSession;
@property(retain) NSInputStream * inputStream;
@property(retain) NSOutputStream * outputStream;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) NSURLSessionDataTask * dataTask;
@property(retain) NSDictionary * timingData;
@property BOOL didOpen;
@property BOOL isValid;
@property BOOL isTaskDone;

+ (id)sharedMMCSHTTPSession;

- (id)outputStream;
- (BOOL)didOpen;
- (long long)countOfRequestBodyBytesSent;
- (void)setTimingData:(id)arg1;
- (void)cleanupRequest;
- (void)setDidOpen:(BOOL)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setIsTaskDone:(BOOL)arg1;
- (id)urlSession;
- (void)setDataTask:(id)arg1;
- (BOOL)createNewRequestBodyInputStream;
- (void)setHc:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; int x5; double x6; double x7; double x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; struct __CFUUID {} *x16; double x17; double x18; int x19; long long x20; long long x21; double x22; unsigned long long x23; double x24; long long x25; double x26; unsigned long long x27; int x28; int x29; struct __CFError {} *x30; struct __CFHTTPMessage {} *x31; unsigned char x32; unsigned long long x33; struct __CFDictionary {} *x34; double x35; struct __CFHTTPMessage {} *x36; unsigned char x37; struct __CFData {} *x38; struct __sFILE {} *x39; struct __sFILE {} *x40; struct __CFString {} *x41; struct __CFString {} *x42; unsigned short x43; unsigned char x44; struct mmcs_metrics_http_info {} *x45; int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); void *x51; void *x52; struct mmcs_read_stream_pool {} *x53; struct __CFRunLoop {} *x54; struct __CFArray {} *x55; union { struct mmcs_cfnetwork_http_context {} *x_56_1_1; struct mmcs_nsurlsession_http_context {} *x_56_1_2; struct mmcs_curl_http_context {} *x_56_1_3; } x56; }*)arg1;
- (void)invalidateStreamPair;
- (void)setInputStream:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; int x5; double x6; double x7; double x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; struct __CFUUID {} *x16; double x17; double x18; int x19; long long x20; long long x21; double x22; unsigned long long x23; double x24; long long x25; double x26; unsigned long long x27; int x28; int x29; struct __CFError {} *x30; struct __CFHTTPMessage {} *x31; unsigned char x32; unsigned long long x33; struct __CFDictionary {} *x34; double x35; struct __CFHTTPMessage {} *x36; unsigned char x37; struct __CFData {} *x38; struct __sFILE {} *x39; struct __sFILE {} *x40; struct __CFString {} *x41; struct __CFString {} *x42; unsigned short x43; unsigned char x44; struct mmcs_metrics_http_info {} *x45; int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); void *x51; void *x52; struct mmcs_read_stream_pool {} *x53; struct __CFRunLoop {} *x54; struct __CFArray {} *x55; union { struct mmcs_cfnetwork_http_context {} *x_56_1_1; struct mmcs_nsurlsession_http_context {} *x_56_1_2; struct mmcs_curl_http_context {} *x_56_1_3; } x56; }*)hc;
- (BOOL)isTaskDone;
- (id)dataTask;
- (BOOL)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (int)writeRequestBody:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)cleanupResponse;
- (id)timingData;
- (void)setIsValid:(BOOL)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (id)inputStream;
- (id)operationQueue;
- (void).cxx_destruct;
- (BOOL)send;
- (void)setOperationQueue:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithContext:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; int x5; double x6; double x7; double x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; struct __CFUUID {} *x16; double x17; double x18; int x19; long long x20; long long x21; double x22; unsigned long long x23; double x24; long long x25; double x26; unsigned long long x27; int x28; int x29; struct __CFError {} *x30; struct __CFHTTPMessage {} *x31; unsigned char x32; unsigned long long x33; struct __CFDictionary {} *x34; double x35; struct __CFHTTPMessage {} *x36; unsigned char x37; struct __CFData {} *x38; struct __sFILE {} *x39; struct __sFILE {} *x40; struct __CFString {} *x41; struct __CFString {} *x42; unsigned short x43; unsigned char x44; struct mmcs_metrics_http_info {} *x45; int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); void *x51; void *x52; struct mmcs_read_stream_pool {} *x53; struct __CFRunLoop {} *x54; struct __CFArray {} *x55; union { struct mmcs_cfnetwork_http_context {} *x_56_1_1; struct mmcs_nsurlsession_http_context {} *x_56_1_2; struct mmcs_curl_http_context {} *x_56_1_3; } x56; }*)arg1 options:(const struct mmcs_http_context_options { struct __CFString {} *x1; struct __CFHTTPMessage {} *x2; struct __CFDictionary {} *x3; double x4; unsigned char x5; unsigned long long x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); void *x11; int (*x12)(); void *x13; unsigned char x14; }*)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

@end
