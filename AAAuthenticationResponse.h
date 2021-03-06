/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, NSDictionary;

@interface AAAuthenticationResponse : AAResponse  {
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

@property(readonly) NSString * fmfToken;
@property(readonly) NSString * fmfAppToken;
@property(readonly) NSString * fmipToken;
@property(readonly) NSString * authToken;
@property(readonly) NSString * mapsToken;
@property(readonly) NSString * hsaToken;
@property(readonly) NSString * cloudKitToken;
@property(readonly) NSString * fmipLostModeToken;
@property(readonly) NSString * personID;
@property(readonly) NSString * HSAAction;
@property(readonly) NSString * HSAData;


- (id)personID;
- (id)mapsToken;
- (id)authToken;
- (id)fmipLostModeToken;
- (id)cloudKitToken;
- (id)hsaToken;
- (id)fmipToken;
- (id)fmfAppToken;
- (id)fmfToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)HSAData;
- (id)HSAAction;
- (void).cxx_destruct;

@end
