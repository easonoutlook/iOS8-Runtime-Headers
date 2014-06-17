/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class NSDictionary, NSMutableData, NSMutableURLRequest, NSHTTPURLResponse, OAURLRequestSigner, NSURLConnection, NSString, <JSONHTTPRequestDelegate>, NSData;

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSData *_overridePostBody;
    <JSONHTTPRequestDelegate> *_delegate;
    BOOL _receivedValidResponse;
    OAURLRequestSigner *_signer;
    NSString *_HTTPRequestBoundary;
    BOOL _signsMultipartPOSTData;
    BOOL _allowsCellularAccess;
    NSDictionary *_getParams;
    NSDictionary *_postParams;
    NSDictionary *_unsignedPostParams;
    NSHTTPURLResponse *_response;
    int _HTTPMethod;
    int _responseType;
}

@property(retain) NSDictionary * getParams;
@property(retain) NSDictionary * postParams;
@property(retain) NSDictionary * unsignedPostParams;
@property BOOL signsMultipartPOSTData;
@property(readonly) NSHTTPURLResponse * response;
@property int HTTPMethod;
@property BOOL allowsCellularAccess;
@property int responseType;

+ (id)encodedStringForParameterDictionary:(id)arg1;

- (void)setSignsMultipartPOSTData:(BOOL)arg1;
- (BOOL)signsMultipartPOSTData;
- (void)setUnsignedPostParams:(id)arg1;
- (id)unsignedPostParams;
- (void)setPostParams:(id)arg1;
- (id)postParams;
- (void)setGetParams:(id)arg1;
- (id)getParams;
- (void)setOverridePostBody:(id)arg1;
- (void)setHTTPHeader:(id)arg1 value:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)_multipartParamData:(id)arg1;
- (id)HTTPRequestBoundary;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 signer:(id)arg3;
- (int)responseType;
- (void)setHTTPMethod:(int)arg1;
- (void)setResponseType:(int)arg1;
- (int)HTTPMethod;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (BOOL)allowsCellularAccess;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)response;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;

@end
