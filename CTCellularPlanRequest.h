/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLResponse, NSMutableData, NSMutableURLRequest, NSError, NSURLConnection;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {
    int nextConnectionTypeIndex;
    NSMutableData *_receivedData;
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    struct dispatch_queue_s { } *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSURLConnection *_connection;
}

@property(retain) NSMutableData * receivedData;
@property(retain) NSMutableURLRequest * request;
@property(retain) NSURLResponse * response;
@property(retain) NSError * error;
@property struct dispatch_queue_s { }* queue;
@property(copy) id completionBlock;
@property(retain) NSURLConnection * connection;

+ (void)initialize;
+ (id)confirmPurchaseCompleteRequestWithIccid:(id)arg1 didFinishPurchase:(BOOL)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2;
+ (id)requestUrls;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2;
+ (id)createSessionRequest;
+ (void)load;

- (void)setRequest:(id)arg1;
- (void)setReceivedData:(id)arg1;
- (id)receivedData;
- (id)error;
- (void)setError:(id)arg1;
- (void)_callback;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initPostWithUrl:(id)arg1;
- (id)initGetWithUrl:(id)arg1;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (BOOL)_nextConnectionTypeWithConnectionProperties:(id*)arg1 andProxySettings:(id*)arg2;
- (BOOL)_isRetryableError:(id)arg1;
- (id)_bootstrapConnectionProperties;
- (BOOL)_shouldUseProxyOnInternet;
- (BOOL)_hasProxySettings;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s { }*)arg1 completion:(id)arg2;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)queue;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)request;
- (id)response;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)cancel;
- (void)dealloc;
- (id)_proxySettings;
- (void)setResponse:(id)arg1;

@end