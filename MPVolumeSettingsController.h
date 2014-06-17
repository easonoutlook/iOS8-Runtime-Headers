/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
    NSString *_audioCategory;
}


- (void)flip;
- (void)twoSidedAlertControllerDidDismiss:(id)arg1;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;
- (id)initWithAudioCategory:(id)arg1;

@end
