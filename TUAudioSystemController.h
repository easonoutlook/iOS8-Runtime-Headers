/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSNumber, NSArray, NSObject<OS_dispatch_queue>;

@interface TUAudioSystemController : TUAudioController  {
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForNonTTY;
    BOOL _isRequestingUplinkMuted;
    BOOL _isRequestingDownlinkMuted;
    BOOL _isRequestingTTY;
    BOOL _isRequestingPickableRoutesForTTY;
    BOOL _isRequestingPickableRoutesForNonTTY;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastNonTTYPickableRoutesScheduleTime;
}

+ (id)sharedSystemController;
+ (id)sharedAudioSystemController;

- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (id)pickableRoutesForNonTTY;
- (id)pickableRoutesForTTY;
- (id)_pickableRoutesForNonTTYWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1;
- (id)pickableRoutes;
- (void)_handleCallStatusChanged;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (BOOL)isTTY;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (BOOL)isDownlinkMuted;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (BOOL)isUplinkMuted;
- (void)dealloc;
- (id)init;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;

@end
