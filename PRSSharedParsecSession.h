/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSURLSession, NSOperationQueue, NSString, <PRSSessionController>, NSMutableDictionary;

@interface PRSSharedParsecSession : NSObject <NSURLSessionDataDelegate, PRSImageSource> {
    NSURLSession *_urlSession;
    NSOperationQueue *_sessionQueue;
    NSMutableDictionary *_taskHandlers;
    <PRSSessionController> *_client;
    NSString *_userAgent;
}

@property(readonly) NSURLSession * urlSession;
@property(readonly) NSOperationQueue * sessionQueue;
@property(readonly) NSMutableDictionary * taskHandlers;
@property <PRSSessionController> * client;
@property(readonly) NSString * userAgent;

+ (id)sharedParsecSession;
+ (id)initializeForClient:(id)arg1;

- (void)removeTask:(id)arg1;
- (id)client;
- (void)setClient:(id)arg1;
- (id)sessionQueue;
- (id)dataTaskForRequest:(id)arg1 withHandler:(id)arg2;
- (id)taskHandlers;
- (id)_sessionConfiguration;
- (id)urlSessionForImage:(id)arg1;
- (void)getImageWithIdentifier:(id)arg1 block:(id)arg2;
- (id)initWithClient:(id)arg1;
- (id)urlSession;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void).cxx_destruct;
- (id)userAgent;

@end
