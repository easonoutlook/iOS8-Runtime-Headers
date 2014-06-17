/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreAuthentication.framework/CoreAuthentication
 */

@class <LAUIDelegate>, NSString, NSDictionary, NSData, LAClient;

@interface VRCredentialReference : NSObject  {
    LAClient *_client;
    <LAUIDelegate> *_delegateProxy;
    NSDictionary *_lastEvaluatePolicyResult;
    NSString *_creatorDisplayName;
    NSData *_credentialHandle;
}

@property(readonly) NSString * creatorDisplayName;
@property(readonly) NSData * credentialHandle;


- (void).cxx_destruct;
- (void)invalidate;
- (id)credentialHandle;
- (void)sendClientRequest:(id)arg1 params:(id)arg2 reply:(id)arg3;
- (id)resultForTag:(id)arg1;
- (BOOL)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 error:(id*)arg4;
- (BOOL)evaluatePolicy:(id)arg1 hints:(id)arg2 error:(id*)arg3;
- (BOOL)setupNewReferenceWithError:(id*)arg1;
- (void)setupWithCredentialHandle:(id)arg1 uiDelegate:(id)arg2 reply:(id)arg3;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 reply:(id)arg3;
- (void)setupWithCredentialHandle:(id)arg1 reply:(id)arg2;
- (void)setupNewReferenceWithReply:(id)arg1;
- (void)resultForTag:(id)arg1 reply:(id)arg2;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 reply:(id)arg4;
- (void)evaluatePolicy:(id)arg1 hints:(id)arg2 reply:(id)arg3;
- (BOOL)setupWithCredentialHandle:(id)arg1 error:(id*)arg2;
- (id)creatorDisplayName;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 uiDelegate:(id)arg3 reply:(id)arg4;

@end
