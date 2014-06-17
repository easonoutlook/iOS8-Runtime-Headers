/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
 */

@class NSDictionary, NSString, NSData, NSURLRequest, NKIssue, NSURLConnection;

@interface NKAssetDownload : NSObject  {
    NKIssue *_issue;
    NSString *_identifier;
    NSData *_userInfoData;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    BOOL _attemptedConnection;
    BOOL _isDecodingValid;
}

@property(readonly) NKIssue * issue;
@property(copy) NSString * identifier;
@property(copy) NSDictionary * userInfo;
@property(copy) NSURLRequest * URLRequest;
@property(retain) NSData * userInfoData;
@property(retain) NSURLConnection * connection;
@property BOOL attemptedConnection;


- (void)setURLRequest:(id)arg1;
- (void)_cancel;
- (id)_connection;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)setIdentifier:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)identifier;
- (id)downloadWithDelegate:(id)arg1;
- (void)setAttemptedConnection:(BOOL)arg1;
- (void)_connectionBackgroundDownloadPostCompleted:(id)arg1;
- (void)_connectionBackgroundDownloadPreCompleted:(id)arg1;
- (BOOL)attemptedConnection;
- (id)issue;
- (id)userInfoData;
- (void)setUserInfoData:(id)arg1;
- (void)setIssue:(id)arg1;
- (id)_initWithURLRequest:(id)arg1 issue:(id)arg2;
- (void)_setIssue:(id)arg1;
- (void)_issueWasRemovedFromLibrary;
- (BOOL)_isDecodingValid;
- (BOOL)_attemptedConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)URLRequest;

@end
