/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject  {
    int _effectiveNetworkTypeForCloudPlayback;
    double _lastAverageBitrate;
    int _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) double lastAverageBitrate;
@property(readonly) int networkType;
@property(readonly) int effectiveNetworkTypeForPlayback;

+ (id)sharedNetworkPlayabilityMonitor;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (double)lastAverageBitrate;
- (int)effectiveNetworkTypeForPlayback;
- (int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (int)networkType;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;

@end
