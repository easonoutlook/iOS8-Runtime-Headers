/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject  {
    struct OpaqueCFHTTPCookieStorage { } *storage;
    struct OpaqueCFHTTPCookieStorage { } *privateStorage;
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
}


- (void)dealloc;
- (id)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)registerForPostingNotifications;
- (void)_syncCookies;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;

@end
