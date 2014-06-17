/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RURadioPlaybackCoordinator;

@interface RUNowPlayingObserver : MPNowPlayingObserver  {
    RURadioPlaybackCoordinator *_playbackCoordinator;
}


- (id)initWithPlayer:(id)arg1 playbackCoordinator:(id)arg2;
- (void)_currentStationDidChangeNotfication:(id)arg1;
- (void)_isBannedDidChangeNotification:(id)arg1;
- (void)_isInWishListDidChangeNotification:(id)arg1;
- (void)_isLikedDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;
- (void)dealloc;
- (BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id)arg2;
- (void)_radioModelDidChangeNotification:(id)arg1;

@end
