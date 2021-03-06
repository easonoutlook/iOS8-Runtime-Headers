/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLResponse, NSURLRequest, NSString, NSError, NSDictionary, NSURL;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    BOOL _hasStarted;
    BOOL _expectingResumeCallback;
    BOOL _establishedConnection;
    BOOL _disablesRetry;
    BOOL _shouldCancelOnDisconnect;
    BOOL _discretionary;
    unsigned int _identifier;
    unsigned int _taskKind;
    int _state;
    unsigned int _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned int _retryCount;
    NSString *_uniqueIdentifier;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSDictionary *_options;
    NSDictionary *__backgroundTaskTimingData;
    double _creationTime;
    long long _basePriority;
    unsigned long long _AVAssetDownloadToken;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
}

@property unsigned int identifier;
@property unsigned int taskKind;
@property double creationTime;
@property int state;
@property unsigned int suspendCount;
@property(copy) NSString * taskDescription;
@property(copy) NSURLRequest * originalRequest;
@property(copy) NSURLRequest * currentRequest;
@property(copy) NSURLResponse * response;
@property(copy) NSError * error;
@property(retain) NSURL * fileURL;
@property(retain) NSURL * downloadFileURL;
@property(retain) NSString * bundleID;
@property(retain) NSString * sessionID;
@property BOOL hasStarted;
@property BOOL expectingResumeCallback;
@property BOOL establishedConnection;
@property unsigned int retryCount;
@property BOOL disablesRetry;
@property BOOL shouldCancelOnDisconnect;
@property long long basePriority;
@property(getter=isDiscretionary) BOOL discretionary;
@property(retain) NSString * uniqueIdentifier;
@property unsigned long long AVAssetDownloadToken;
@property(copy) NSURL * URL;
@property(copy) NSURL * destinationURL;
@property(retain) NSDictionary * options;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property(copy) NSDictionary * _backgroundTaskTimingData;

+ (BOOL)supportsSecureCoding;

- (void)setRetryCount:(unsigned int)arg1;
- (id)error;
- (unsigned int)retryCount;
- (void)setCreationTime:(double)arg1;
- (void)setError:(id)arg1;
- (id)currentRequest;
- (id)originalRequest;
- (void)setSessionID:(id)arg1;
- (id)sessionID;
- (id)taskDescription;
- (void)setBundleID:(id)arg1;
- (long long)countOfBytesReceived;
- (void)setTaskDescription:(id)arg1;
- (void)setFileURL:(id)arg1;
- (id)bundleID;
- (BOOL)isDiscretionary;
- (id)fileURL;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setURL:(id)arg1;
- (id)response;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (unsigned int)identifier;
- (int)state;
- (void)encodeWithCoder:(id)arg1;
- (id)URL;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)options;
- (void)dealloc;
- (unsigned int)suspendCount;
- (void)setDestinationURL:(id)arg1;
- (id)destinationURL;
- (void)setDisablesRetry:(BOOL)arg1;
- (BOOL)disablesRetry;
- (void)setEstablishedConnection:(BOOL)arg1;
- (BOOL)establishedConnection;
- (void)setExpectingResumeCallback:(BOOL)arg1;
- (BOOL)expectingResumeCallback;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 taskIdentifier:(unsigned int)arg4 bundleID:(id)arg5 sessionID:(id)arg6;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setBasePriority:(long long)arg1;
- (void)setShouldCancelOnDisconnect:(BOOL)arg1;
- (long long)basePriority;
- (BOOL)shouldCancelOnDisconnect;
- (BOOL)hasStarted;
- (id)downloadFileURL;
- (double)creationTime;
- (void)setDownloadFileURL:(id)arg1;
- (void)setTaskKind:(unsigned int)arg1;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (void)setHasStarted:(BOOL)arg1;
- (id)_backgroundTaskTimingData;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (unsigned int)taskKind;
- (unsigned long long)AVAssetDownloadToken;
- (long long)countOfBytesExpectedToReceive;
- (void)setOriginalRequest:(id)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setSuspendCount:(unsigned int)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setResponse:(id)arg1;

@end
