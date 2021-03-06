/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSHTTPCookieStorage, NSURLCredentialStorage, NSDictionary, NSString, NSURLCache, NSURL, NSArray;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {
    BOOL _allowsCellularAccess;
    BOOL _discretionary;
    BOOL _sessionSendsLaunchEvents;
    BOOL _HTTPShouldUsePipelining;
    BOOL _HTTPShouldSetCookies;
    BOOL __requiresPowerPluggedIn;
    BOOL __allowsExpensiveAccess;
    BOOL __allowsPowerNapScheduling;
    BOOL __preventsIdleSleepOnceConnected;
    BOOL __sessionSendsLaunchOnDemandEvents;
    BOOL __collectsTimingData;
    BOOL __allowsRetryForBackgroundDataTasks;
    BOOL __respectsAllowsCellularAccessForDiscretionaryTasks;
    BOOL __infersDiscretionaryFromOriginatingClient;
    BOOL _backgroundSession;
    BOOL __phskip_credStorageSet;
    BOOL __phskip_urlCacheSet;
    BOOL __phskip_cookieStorageSet;
    BOOL __phskip_hstsStorageSet;
    BOOL _skip_download_unlink;
    BOOL __requiresClientToOpenFiles;
    BOOL __forcesNewConnections;
    BOOL __supportsAVAssetDownloads;
    BOOL __proxySession;
    BOOL __preventsIdleSleep;
    BOOL __usePipeliningHeuristics;
    BOOL __startSynchronously;
    NSString *_identifier;
    unsigned int _requestCachePolicy;
    unsigned int _networkServiceType;
    NSString *_sharedContainerIdentifier;
    NSDictionary *_connectionProxyDictionary;
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    unsigned int _HTTPCookieAcceptPolicy;
    NSDictionary *_HTTPAdditionalHeaders;
    int _HTTPMaximumConnectionsPerHost;
    NSArray *_protocolClasses;
    NSURL *__directoryForDownloadedFiles;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    unsigned int __TCPAdaptiveReadTimeout;
    unsigned int __TCPAdaptiveWriteTimeout;
    NSString *__ledBellyServiceIdentifier;
    NSString *__connectionPoolName;
    NSString *_disposition;
    NSURLCredentialStorage *__phskip_credStorage;
    NSURLCache *__phskip_urlCache;
    NSHTTPCookieStorage *__phskip_cookieStorage;
    struct _CFHSTSPolicy { } *__phskip_hstsStorage;
    int _pipeliningHighWatermark;
    int _pipeliningLowWatermark;
    int _numPriorityLevels;
    int _numFastLanes;
    int _minimumFastLanePriority;
    NSString *__tcpConnectionPoolName;
    NSDictionary *__socketStreamProperties;
    NSArray *__contentDispHeadEncFallback;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    double __connectionCachePurgeTimeout;
    double __connectionCacheCellPurgeTimeout;
}

@property(copy) NSString * identifier;
@property unsigned int requestCachePolicy;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;
@property unsigned int networkServiceType;
@property BOOL allowsCellularAccess;
@property(getter=isDiscretionary) BOOL discretionary;
@property(copy) NSString * sharedContainerIdentifier;
@property BOOL sessionSendsLaunchEvents;
@property(copy) NSDictionary * connectionProxyDictionary;
@property int TLSMinimumSupportedProtocol;
@property int TLSMaximumSupportedProtocol;
@property BOOL HTTPShouldUsePipelining;
@property BOOL HTTPShouldSetCookies;
@property unsigned int HTTPCookieAcceptPolicy;
@property(copy) NSDictionary * HTTPAdditionalHeaders;
@property int HTTPMaximumConnectionsPerHost;
@property(retain) NSHTTPCookieStorage * HTTPCookieStorage;
@property(retain) NSURLCredentialStorage * URLCredentialStorage;
@property(retain) NSURLCache * URLCache;
@property(copy) NSArray * protocolClasses;
@property BOOL _requiresPowerPluggedIn;
@property(copy) NSURL * _directoryForDownloadedFiles;
@property(copy) NSString * _sourceApplicationBundleIdentifier;
@property(copy) NSString * _sourceApplicationSecondaryIdentifier;
@property unsigned int _TCPAdaptiveReadTimeout;
@property unsigned int _TCPAdaptiveWriteTimeout;
@property BOOL _allowsExpensiveAccess;
@property BOOL _allowsPowerNapScheduling;
@property BOOL _preventsIdleSleepOnceConnected;
@property BOOL _sessionSendsLaunchOnDemandEvents;
@property BOOL _collectsTimingData;
@property(copy) NSString * _ledBellyServiceIdentifier;
@property double _connectionCachePurgeTimeout;
@property double _connectionCacheCellPurgeTimeout;
@property BOOL _allowsRetryForBackgroundDataTasks;
@property BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
@property BOOL _infersDiscretionaryFromOriginatingClient;
@property(copy) NSString * _connectionPoolName;
@property(getter=isBackgroundSession) BOOL backgroundSession;
@property NSString * disposition;
@property(retain) NSURLCredentialStorage * _phskip_credStorage;
@property BOOL _phskip_credStorageSet;
@property(retain) NSURLCache * _phskip_urlCache;
@property BOOL _phskip_urlCacheSet;
@property(retain) NSHTTPCookieStorage * _phskip_cookieStorage;
@property BOOL _phskip_cookieStorageSet;
@property(retain) struct _CFHSTSPolicy { }* _phskip_hstsStorage;
@property BOOL _phskip_hstsStorageSet;
@property int pipeliningHighWatermark;
@property int pipeliningLowWatermark;
@property int numPriorityLevels;
@property int numFastLanes;
@property int minimumFastLanePriority;
@property BOOL skip_download_unlink;
@property BOOL _requiresClientToOpenFiles;
@property(copy) NSString * _tcpConnectionPoolName;
@property BOOL _forcesNewConnections;
@property(copy) NSDictionary * _socketStreamProperties;
@property BOOL _supportsAVAssetDownloads;
@property(getter=_isProxySession) BOOL _proxySession;
@property BOOL _preventsIdleSleep;
@property BOOL _usePipeliningHeuristics;
@property BOOL _startSynchronously;
@property(copy) NSArray * _contentDispHeadEncFallback;

+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)ephemeralSessionConfiguration;
+ (BOOL)supportsSecureCoding;
+ (id)defaultSessionConfiguration;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)_proxySessionConfigurationWithIdentifier:(id)arg1;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)sessionConfigurationForSharedSession;
+ (id)_defaultProtocolClasses;

- (void)setDisposition:(id)arg1;
- (id)disposition;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1;
- (id)sourceApplicationBundleIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (BOOL)isDiscretionary;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (BOOL)allowsCellularAccess;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)URLCache;
- (void)setURLCache:(id)arg1;
- (void)setRequestCachePolicy:(unsigned int)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_copyCFCookieStorage;
- (id)initWithDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_preventsIdleSleepOnceConnected:(BOOL)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (id)_contentDispHeadEncFallback;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (int)minimumFastLanePriority;
- (int)numFastLanes;
- (int)numPriorityLevels;
- (int)pipeliningLowWatermark;
- (int)pipeliningHighWatermark;
- (void)set_connectionPoolName:(id)arg1;
- (id)_connectionPoolName;
- (double)_connectionCacheCellPurgeTimeout;
- (double)_connectionCachePurgeTimeout;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned int)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned int)arg1;
- (id)_sourceApplicationSecondaryIdentifier;
- (id)_sourceApplicationBundleIdentifier;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (int)HTTPMaximumConnectionsPerHost;
- (id)connectionProxyDictionary;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (void)set_startSynchronously:(BOOL)arg1;
- (BOOL)_startSynchronously;
- (void)set_usePipeliningHeuristics:(BOOL)arg1;
- (BOOL)_usePipeliningHeuristics;
- (void)set_preventsIdleSleep:(BOOL)arg1;
- (BOOL)_preventsIdleSleep;
- (void)set_proxySession:(BOOL)arg1;
- (void)set_supportsAVAssetDownloads:(BOOL)arg1;
- (BOOL)_supportsAVAssetDownloads;
- (void)set_forcesNewConnections:(BOOL)arg1;
- (void)set_requiresClientToOpenFiles:(BOOL)arg1;
- (BOOL)_infersDiscretionaryFromOriginatingClient;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1;
- (BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1;
- (BOOL)_allowsRetryForBackgroundDataTasks;
- (void)set_collectsTimingData:(BOOL)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1;
- (BOOL)_sessionSendsLaunchOnDemandEvents;
- (void)set_allowsPowerNapScheduling:(BOOL)arg1;
- (void)set_requiresPowerPluggedIn:(BOOL)arg1;
- (BOOL)_requiresPowerPluggedIn;
- (BOOL)sessionSendsLaunchEvents;
- (void)setSharedContainerIdentifier:(id)arg1;
- (id)_phskip_credStorage;
- (BOOL)_phskip_credStorageSet;
- (id)_phskip_urlCache;
- (BOOL)_phskip_urlCacheSet;
- (id)_phskip_cookieStorage;
- (BOOL)_phskip_cookieStorageSet;
- (struct _CFHSTSPolicy { }*)_phskip_hstsStorage;
- (BOOL)_phskip_hstsStorageSet;
- (void)setSkip_download_unlink:(BOOL)arg1;
- (void)setMinimumFastLanePriority:(int)arg1;
- (void)setPipeliningLowWatermark:(int)arg1;
- (void)setPipeliningHighWatermark:(int)arg1;
- (void)setNumPriorityLevels:(int)arg1;
- (void)setNumFastLanes:(int)arg1;
- (void)set_allowsExpensiveAccess:(BOOL)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)set_phskip_urlCacheSet:(BOOL)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_credStorageSet:(BOOL)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(BOOL)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_phskip_hstsStorageSet:(BOOL)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned int)arg1;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setBackgroundSession:(BOOL)arg1;
- (BOOL)_forcesNewConnections;
- (BOOL)_preventsIdleSleepOnceConnected;
- (id)_tcpConnectionPoolName;
- (BOOL)_allowsPowerNapScheduling;
- (unsigned int)_TCPAdaptiveWriteTimeout;
- (unsigned int)_TCPAdaptiveReadTimeout;
- (id)_ledBellyServiceIdentifier;
- (BOOL)_allowsExpensiveAccess;
- (id)_socketStreamProperties;
- (double)timeoutIntervalForRequest;
- (unsigned int)requestCachePolicy;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(int)arg1;
- (BOOL)HTTPShouldUsePipelining;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (unsigned int)networkServiceType;
- (BOOL)isBackgroundSession;
- (void)setDiscretionary:(BOOL)arg1;
- (unsigned int)HTTPCookieAcceptPolicy;
- (BOOL)HTTPShouldSetCookies;
- (id)sharedContainerIdentifier;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (id)HTTPAdditionalHeaders;
- (BOOL)_isProxySession;
- (BOOL)_collectsTimingData;
- (BOOL)skip_download_unlink;
- (id)_directoryForDownloadedFiles;
- (BOOL)_requiresClientToOpenFiles;
- (double)timeoutIntervalForResource;
- (id)protocolClasses;
- (id)URLCredentialStorage;
- (id)HTTPCookieStorage;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;

@end
