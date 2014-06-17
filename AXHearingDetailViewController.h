/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController  {
    BOOL _isLiveListening;
    AXRemoteHearingAidDevice *_device;
}

@property(retain) AXRemoteHearingAidDevice * device;


- (void)setDevice:(id)arg1;
- (id)device;
- (id)specifiers;
- (struct _NSRange { unsigned int x1; unsigned int x2; })programsRange;
- (void)addVolumesForStream:(id)arg1;
- (id)disconnectedSpecifiers;
- (void)liveListenToggle:(id)arg1;
- (id)_modeSpecifiers;
- (id)_volumeSpecifiers;
- (id)deviceSpecifiers;
- (void)updateLiveListenCell:(id)arg1;
- (id)specifierForKey:(id)arg1;
- (void)updateView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;

@end
