/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@class AVAudioPlayer;

@interface MediaControlAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_audioPlayer;
}


- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (int)playPath:(id)arg1;
- (void)dealloc;

@end
