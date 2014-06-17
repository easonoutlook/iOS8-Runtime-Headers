/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, SSAuthenticationContext, NSString, ISOperation, NSNumber, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying> {
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    int _errorHandlerResponseType;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) SSURLBagContext * bagContext;
@property ISOperation * parentOperation;
@property long long contentLength;
@property(retain) NSString * contentType;
@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) id output;
@property(retain) NSURL * redirectURL;
@property int errorHandlerResponseType;

+ (id)provider;

- (id)authenticatedAccountDSID;
- (BOOL)runAuthorizationDialog:(id)arg1 error:(id*)arg2;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (void)configureFromProvider:(id)arg1;
- (void)setOutput:(id)arg1;
- (id)authenticationContext;
- (void)setErrorHandlerResponseType:(int)arg1;
- (BOOL)runSubOperation:(id)arg1 error:(id*)arg2;
- (BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setBagContext:(id)arg1;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (void)streamDidFailWithError:(id)arg1;
- (void)resetStream;
- (int)errorHandlerResponseType;
- (id)closeStream;
- (BOOL)isStreamComplete;
- (long long)streamedBytes;
- (void)streamCancelled;
- (id)contentType;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (id)redirectURL;
- (id)bagContext;
- (void)setup;
- (void)setParentOperation:(id)arg1;
- (id)parentOperation;
- (id)output;
- (BOOL)isStream;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setAuthenticationContext:(id)arg1;
- (long long)contentLength;

@end