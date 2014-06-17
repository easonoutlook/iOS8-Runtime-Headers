/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSObject<OS_xpc_object>;

@interface CAMKeepDaemonAliveAssertion : NSObject  {
    NSObject<OS_xpc_object> *_keepaliveConnection;
}

+ (id)assertion;

- (void)_setupConnection;
- (void)_setupHeartBeatForConnection:(id)arg1;
- (void)_unregisterForAppActiveNotifications;
- (void)_registerForAppActiveNotifications;
- (void)_tearDownConnection;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end