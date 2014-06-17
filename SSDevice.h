/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSURLBag, SSKeyValueStore, NSString, NSObject<OS_dispatch_queue>, NSSet;

@interface SSDevice : NSObject <SSRequestDelegate> {
    NSString *_appleTVProductVersion;
    id _cloudMediaLibraryIdentifier;
    int _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    BOOL _localStoreFrontIsTransient;
    id _mediaLibraryIdentifier;
    NSString *_productType;
    NSString *_productVersion;
    id _softwareLibraryIdentifier;
    NSString *_synchedStoreFrontIdentifier;
    SSURLBag *_urlBag;
    NSString *_userAgent;
    double _batteryLevel;
    unsigned int _batteryMonitorNotification;
    struct IONotificationPort { } *_batteryMonitorPort;
    BOOL _pluggedIn;
    int _pluggedInToken;
    int _powerMonitorCount;
}

@property(copy) NSString * cloudMediaLibraryIdentifier;
@property(copy) NSString * softwareLibraryIdentifier;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) NSString * legacyUserAgent;
@property(readonly) NSString * userAgent;
@property(readonly) NSSet * automaticDownloadKinds;
@property(readonly) int deviceType;
@property(readonly) unsigned long deviceTypeIdentifier;
@property(readonly) NSString * productType;
@property(readonly) NSString * productVersion;
@property(getter=isPluggedIn,readonly) BOOL pluggedIn;
@property(readonly) double batteryLevel;
@property(copy) NSString * mediaLibraryIdentifier;
@property(getter=isStoreFrontIdentifierTransient,readonly) BOOL storeFrontIdentifierTransient;
@property(readonly) NSString * synchedStoreFrontIdentifier;

+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (BOOL)setCachedAvailableItemKinds:(id)arg1;
+ (BOOL)promptNeedsDisplay:(id)arg1;
+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;

- (id)synchedStoreFrontIdentifier;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)reloadStoreFrontIdentifier;
- (int)deviceType;
- (unsigned long)deviceTypeIdentifier;
- (id)automaticDownloadKinds;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (void)_invalidateSoftwareCUID;
- (id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2;
- (void)resetStoreFrontForSignOut;
- (id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)synchronizeAutomaticDownloadKinds;
- (void)stopPowerMonitoring;
- (void)startPowerMonitoring;
- (void)setMediaLibraryIdentifier:(id)arg1;
- (void)setCloudMediaLibraryIdentifier:(id)arg1;
- (id)productType;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id)arg1;
- (id)legacyUserAgent;
- (id)softwareLibraryIdentifier;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)setCellularNetworkingAllowed:(BOOL)arg1;
- (id)mediaLibraryIdentifier;
- (void)loadStoreFrontWithCompletionHandler:(id)arg1;
- (void)getCellularNetworkingAllowedWithBlock:(id)arg1;
- (void)getAvailableItemKindsWithBlock:(id)arg1;
- (id)copyStoreFrontRequestHeaders;
- (id)cloudMediaLibraryIdentifier;
- (id)_userAgentClientNameForAppleTVBundleID:(id)arg1;
- (id)_appleTVProductVersion;
- (id)_fairPlayDeviceTypeString;
- (id)_diskCapacityString;
- (int)_deviceClass;
- (int)_deviceTypeForUnknownAppleTV:(id)arg1;
- (int)_deviceTypeForUnknownIPod:(id)arg1;
- (int)_deviceTypeForUnknownIPhone:(id)arg1;
- (int)_deviceTypeForUnknownIPad:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3;
- (id)userAgentWithClientName:(id)arg1 version:(id)arg2;
- (id)_userAgentClientNameForBundleID:(id)arg1;
- (BOOL)_is1080pCapable;
- (BOOL)_is720pCapable;
- (void)_reloadPluggedInState;
- (void)_updateBatteryLevelFromService:(unsigned int)arg1;
- (void)_postStoreFrontDidChangeNotification;
- (BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)_reloadAfterStoreFrontChange;
- (id)_productVersion;
- (int)_deviceTypeForProductType:(id)arg1;
- (id)_copyProductType;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(id)arg3;
- (int)_deviceType;
- (id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL*)arg3;
- (id)_userAgentClientNameForInfoPlist:(id)arg1;
- (id)_newLegacyUserAgent:(BOOL*)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (BOOL)_getDeviceType:(unsigned int*)arg1 error:(id*)arg2;
- (void)_cacheKeyValueStoreValues;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3;
- (BOOL)isPluggedIn;
- (id)productVersion;
- (double)batteryLevel;
- (void)dealloc;
- (id)init;
- (BOOL)supportsDeviceCapability:(int)arg1;
- (id)storeFrontIdentifier;
- (id)userAgent;

@end