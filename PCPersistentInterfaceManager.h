/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSRecursiveLock, NSTimer, PCSimpleTimer, NSMapTable;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFDictionary { } *_delegatesAndRunLoops;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    void *_wifiManager;
    long _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _hasWWANStatusIndicator;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _shouldOverrideOnCallBehavior;
}

@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL isWWANBetterThanWiFi;
@property(readonly) BOOL doesWWANInterfaceExist;
@property(readonly) NSString * WWANInterfaceName;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isWakeOnWiFiSupported;
@property(readonly) BOOL isInternetReachable;
@property(retain,readonly) NSString * currentLinkQualityString;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;

+ (id)sharedInstance;

- (void)removeDelegate:(id)arg1;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)_populateWakeOnWiFiCapability;
- (void)_updateWWANInterfaceAssertions;
- (BOOL)areAllNetworkInterfacesDisabled;
- (BOOL)isWakeOnWiFiSupported;
- (BOOL)isInternetReachableViaWiFi;
- (BOOL)isWWANInHomeCountry;
- (BOOL)isWWANInterfaceInProlongedHighPowerState;
- (BOOL)isPowerStateDetectionSupported;
- (id)WWANInterfaceName;
- (BOOL)isWWANInterfaceUp;
- (BOOL)isWWANBetterThanWiFi;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
- (id)currentLinkQualityString;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)addDelegate:(id)arg1 callbackRunLoop:(id)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(BOOL)arg2;
- (BOOL)_allowBindingToWWAN;
- (BOOL)_isWiFiUsable;
- (BOOL)isInCall;
- (BOOL)isWWANInterfaceActivationPermitted;
- (BOOL)doesWWANInterfaceExist;
- (void)_adjustWakeOnWiFi;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFiLocked;
- (void)_populateWakeOnWiFiCapabilityLocked;
- (BOOL)_isInternetReachableLocked;
- (void)_performCalloutsForSelectorValue:(id)arg1;
- (BOOL)_isWWANInHomeCountryLocked;
- (void)_inCallWWANOverrideTimerFired;
- (void)_clearInCallWWANOverrideTimerLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_ctConnectionWasInvalidated;
- (void)_mainThreadDelayedInvalidation;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_createCTConnection;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_createWiFiManager;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)isInternetReachable;
- (void)dealloc;
- (id)init;
- (void)handleMachMessage:(void*)arg1;

@end
