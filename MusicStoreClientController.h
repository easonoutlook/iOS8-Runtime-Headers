/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicStoreClientController : SUClientController <MCProfileConnectionObserver, SSDownloadManagerObserver> {
    BOOL _hasContinueSearchCapability;
    BOOL _isUsingNetwork;
}

@property(readonly) BOOL hasStoreSearchCapability;

+ (void)setSharedController:(id)arg1;
+ (id)continueSearchingURLForMediaType:(unsigned int)arg1 searchString:(id)arg2;
+ (id)musicStoreURLWithAction:(id)arg1;
+ (id)sharedController;

- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)hasStoreSearchCapability;
- (BOOL)_isStoreRestricted;
- (void)dealloc;
- (id)init;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
