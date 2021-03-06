/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject  {
    NSMutableSet *ringerVolumeChangedHandlers;
    NSMutableSet *ringerSilentChangedHandlers;
}

+ (id)sharedInstance;

- (void)ringerSilentChanged;
- (void)addVolumeChangedHandler:(id)arg1;
- (void)addRingerSwitchChangedHandler:(id)arg1;
- (void)ringerVolumeChanged:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
