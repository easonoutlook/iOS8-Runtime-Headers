/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVAudioDeviceList;

@interface AVAudioClient : NSObject  {
    AVAudioDeviceList *deviceList;
}

@property id changeListener;
@property(retain) AVAudioDeviceList * deviceList;

+ (void)initializeAudioSessionQ;
+ (BOOL)setInputDevice:(id)arg1;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (void)stopAudioSession;
+ (void)startAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;

- (void)setDeviceList:(id)arg1;
- (id)outputDevices;
- (id)inputDevices;
- (id)changeListener;
- (void)setChangeListener:(id)arg1;
- (id)deviceList;
- (void)dealloc;
- (id)init;
- (id)devices;

@end
