/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSLock;

@interface _MFMailAccountProxySource : NSObject  {
    NSLock *_lock;
    NSArray *_accountProxies;
    BOOL _registeredForNotifications;
    int _notifyToken;
}

+ (id)defaultInstance;

- (void)_applicationDidEnterBackground:(id)arg1;
- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)_resetAccountsChanged:(BOOL)arg1;
- (void)_registerForNotifications_nts;
- (void)_deregisterForNotifications_nts;
- (void)dealloc;
- (id)init;

@end
