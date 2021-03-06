/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class <ACUIAppInstallerDelegate>, NSDate, ACUIAppDescription, NSURL;

@interface ACUIAppInstaller : NSObject  {
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    BOOL _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    BOOL _resultOfLastInstallationCheck;
    BOOL _needsAvailableInStoreCheck;
    BOOL _availableInStoreResult;
    NSURL *_publisherURL;
    <ACUIAppInstallerDelegate> *_delegate;
}

@property(readonly) BOOL isInstalled;
@property(retain) NSURL * publisherURL;
@property(readonly) BOOL isDownloadable;
@property(readonly) BOOL requiresReachabilityCheckToDetermineDownloadability;
@property(readonly) BOOL isAvailableInStore;
@property <ACUIAppInstallerDelegate> * delegate;

+ (id)currentStoreFront;

- (BOOL)isInstalled;
- (void)setPublisherURL:(id)arg1;
- (id)publisherURL;
- (BOOL)isAvailableInStore;
- (BOOL)requiresReachabilityCheckToDetermineDownloadability;
- (id)initForAppWithDescription:(id)arg1;
- (void)_performAvailabilityCheck:(id)arg1;
- (void)checkAvailabilityInStore:(id)arg1;
- (void)_setAvailableInStoreResult:(BOOL)arg1;
- (void)_performReachabilityCheck:(id)arg1;
- (void)fetchDownloadability:(id)arg1;
- (BOOL)_isGreenTeaAvailable;
- (void)_setCachedReachabilityResult:(BOOL)arg1;
- (BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)start;
- (void)setDelegate:(id)arg1;
- (BOOL)isDownloadable;

@end
