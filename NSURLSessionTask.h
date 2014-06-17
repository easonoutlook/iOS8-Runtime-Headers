/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSError, NSArray, NSObject<OS_dispatch_queue>, NSURLRequest, NSValue, NSDictionary, NSString, NSURLResponse, NSURLSession;

@interface NSURLSessionTask : NSObject <NSCopying> {
    bool__shouldPipelineHTTP;
    bool__shouldUsePipelineHeuristics;
    bool__shouldSkipPipelineProbe;
    bool__shouldHandleCookies;
    bool__preventsIdleSystemSleep;
    bool__shouldStartSynchronously;
    bool__allowsCellular;
    BOOL __prohibitAuthUI;
    BOOL __strictContentLength;
    bool__disallowCellular;
    unsigned int _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSString *_taskDescription;
    int _state;
    NSError *_error;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __PerformanceTiming { } *__performanceTiming;
    NSDictionary *__backgroundTaskTimingData;
    NSDictionary *__legacySocketStreamProperties;
    struct _CFHSTSPolicy { } *__cfHSTS;
    struct _CFURLCache { } *__cfCache;
    struct _CFURLCredentialStorage { } *__cfCreds;
    struct OpaqueCFHTTPCookieStorage { } *__cfCookies;
    int __cachePolicy;
    NSDictionary *__proxySettings;
    NSDictionary *__sslSettings;
    int __cookieAcceptPolicy;
    NSDictionary *__additionalHeaders;
    NSArray *__contentDispositionFallbackArray;
    int __networkServiceType;
    NSValue *__connectionPropertyDuet;
    NSString *__boundInterfaceIdentifier;
    unsigned long __allowedProtocolTypes;
    long __requestPriority;
    unsigned int __powerAssertion;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    double _startTime;
    long long __priorityValue;
    double __timeoutInterval;
    long long __suspensionThreshhold;
    long long __expectedWorkload;
    double __timeWindowDelay;
    double __timeWindowDuration;
}

@property unsigned int taskIdentifier;
@property(copy) NSURLRequest * originalRequest;
@property(copy) NSURLRequest * currentRequest;
@property(copy) NSURLResponse * response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property(copy) NSString * taskDescription;
@property int state;
@property(copy) NSError * error;
@property long long _priority;
@property double startTime;
@property(retain) NSURLSession * session;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property long long _priorityValue;
@property struct __PerformanceTiming { }* _performanceTiming;
@property(copy) NSDictionary * _backgroundTaskTimingData;
@property(retain) NSDictionary * _legacySocketStreamProperties;
@property(retain) struct _CFHSTSPolicy { }* _cfHSTS;
@property(retain) struct _CFURLCache { }* _cfCache;
@property(retain) struct _CFURLCredentialStorage { }* _cfCreds;
@property(retain) struct OpaqueCFHTTPCookieStorage { }* _cfCookies;
@property int _cachePolicy;
@property double _timeoutInterval;
@property(retain) NSDictionary * _proxySettings;
@property(retain) NSDictionary * _sslSettings;
@property bool _shouldPipelineHTTP;
@property bool _shouldUsePipelineHeuristics;
@property bool _shouldSkipPipelineProbe;
@property bool _shouldHandleCookies;
@property int _cookieAcceptPolicy;
@property(retain) NSDictionary * _additionalHeaders;
@property bool _preventsIdleSystemSleep;
@property bool _shouldStartSynchronously;
@property(retain) NSArray * _contentDispositionFallbackArray;
@property bool _allowsCellular;
@property int _networkServiceType;
@property BOOL _prohibitAuthUI;
@property BOOL _strictContentLength;
@property(copy) NSValue * _connectionPropertyDuet;
@property long long _suspensionThreshhold;
@property(retain) NSString * _boundInterfaceIdentifier;
@property bool _disallowCellular;
@property unsigned long _allowedProtocolTypes;
@property long _requestPriority;
@property long long _expectedWorkload;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property unsigned int _powerAssertion;

+ (BOOL)supportsSecureCoding;
+ (id)taskForWrappedRequest:(id)arg1;

- (id)workQueue;
- (id)error;
- (unsigned int)taskIdentifier;
- (void)setError:(id)arg1;
- (id)currentRequest;
- (id)originalRequest;
- (void)setWorkQueue:(id)arg1;
- (id)taskDescription;
- (long long)countOfBytesReceived;
- (void)setTaskDescription:(id)arg1;
- (double)startTime;
- (id)response;
- (void)resume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)suspend;
- (void)setState:(int)arg1;
- (void)setStartTime:(double)arg1;
- (int)state;
- (void)cancel;
- (void)dealloc;
- (BOOL)_prohibitAuthUI;
- (struct __CFHTTPMessage { }*)_copyHTTPMessage;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (void)set_priority:(long long)arg1;
- (long long)_priority;
- (void)set_prohibitAuthUI:(BOOL)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (unsigned int)_powerAssertion;
- (struct __PerformanceTiming { }*)_performanceTiming;
- (void)set_performanceTiming:(struct __PerformanceTiming { }*)arg1;
- (struct __CFDictionary { }*)_copySocketStreamProperties0;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary { }*)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (long long)_expectedWorkload;
- (long)_requestPriority;
- (void)set_allowedProtocolTypes:(unsigned long)arg1;
- (unsigned long)_allowedProtocolTypes;
- (void)set_disallowCellular:(bool)arg1;
- (bool)_disallowCellular;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (id)_boundInterfaceIdentifier;
- (BOOL)_strictContentLength;
- (id)_connectionPropertyDuet;
- (long long)_suspensionThreshhold;
- (int)_networkServiceType;
- (void)set_allowsCellular:(bool)arg1;
- (bool)_allowsCellular;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (id)_contentDispositionFallbackArray;
- (void)set_shouldStartSynchronously:(bool)arg1;
- (bool)_shouldStartSynchronously;
- (void)set_preventsIdleSystemSleep:(bool)arg1;
- (bool)_preventsIdleSystemSleep;
- (void)set_additionalHeaders:(id)arg1;
- (id)_additionalHeaders;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (int)_cookieAcceptPolicy;
- (void)set_shouldHandleCookies:(bool)arg1;
- (bool)_shouldHandleCookies;
- (void)set_shouldSkipPipelineProbe:(bool)arg1;
- (bool)_shouldSkipPipelineProbe;
- (void)set_shouldUsePipelineHeuristics:(bool)arg1;
- (bool)_shouldUsePipelineHeuristics;
- (void)set_shouldPipelineHTTP:(bool)arg1;
- (bool)_shouldPipelineHTTP;
- (void)set_sslSettings:(id)arg1;
- (id)_sslSettings;
- (void)set_proxySettings:(id)arg1;
- (id)_proxySettings;
- (void)set_timeoutInterval:(double)arg1;
- (double)_timeoutInterval;
- (void)set_cachePolicy:(int)arg1;
- (int)_cachePolicy;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_cfCookies;
- (void)set_cfCreds:(struct _CFURLCredentialStorage { }*)arg1;
- (struct _CFURLCredentialStorage { }*)_cfCreds;
- (void)set_cfCache:(struct _CFURLCache { }*)arg1;
- (void)set_cfHSTS:(struct _CFHSTSPolicy { }*)arg1;
- (struct _CFHSTSPolicy { }*)_cfHSTS;
- (id)_legacySocketStreamProperties;
- (void)set_priorityValue:(long long)arg1;
- (void)set_requestPriority:(long)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_strictContentLength:(BOOL)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_connectionPropertyDuet:(id)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (void)setTaskIdentifier:(unsigned int)arg1;
- (double)_timeWindowDuration;
- (double)_timeWindowDelay;
- (void)cleanupAndBreakCycles;
- (id)_backgroundTaskTimingData;
- (struct _CFURLCache { }*)_cfCache;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (id)_timingData;
- (void)updateCurrentRequest:(id)arg1;
- (long long)countOfBytesExpectedToReceive;
- (void)setOriginalRequest:(id)arg1;
- (long long)_priorityValue;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (id)initWithTask:(id)arg1;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned int)arg3 session:(id)arg4;
- (void)setCurrentRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (id)session;

@end
