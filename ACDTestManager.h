/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSXPCListener, NSString, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject  {
    NSXPCListener *_accountStoreConnectionListener;
    NSXPCListener *_oauthSignerConnectionListener;
    NSXPCListener *_authenticationDialogConnectionListener;
    NSString *_storePath;
}

@property(readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint;
@property(readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint;

+ (id)testServer;

- (id)remoteOAuthSignerEndpoint;
- (id)remoteAccountStoreEndpoint;
- (void)stopTestServer;
- (void)startTestServer;
- (id)_pseudoUniqueDatabasePath;
- (void).cxx_destruct;

@end
