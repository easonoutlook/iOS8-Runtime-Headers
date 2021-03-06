/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NSNetServiceBrowserDelegate>;

@interface NSNetServiceBrowser : NSObject  {
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
    BOOL _includesPeerToPeer;
}

@property <NSNetServiceBrowserDelegate> * delegate;
@property BOOL includesPeerToPeer;


- (id)delegate;
- (void)stop;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)searchForAllDomains;
- (void)_dispatchCallBack:(void*)arg1 flags:(unsigned long)arg2 error:(struct { int x1; int x2; })arg3;
- (void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (void)searchForRegistrationDomains;
- (void)searchForBrowsableDomains;
- (struct __CFNetServiceBrowser { }*)_internalNetServiceBrowser;
- (void)_setIncludesAWDL:(BOOL)arg1;
- (void)setIncludesPeerToPeer:(BOOL)arg1;
- (BOOL)_includesAWDL;
- (BOOL)includesPeerToPeer;

@end
