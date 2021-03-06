/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, AVAudioTier;

@interface AVAudioTierPicker : NSObject  {
    NSMutableArray *audioTiers;
    BOOL isUsingCellular;
    AVAudioTier *defaultTier;
    AVAudioTier *fallbackTier;
    int mode;
}

@property(readonly) AVAudioTier * defaultTier;
@property(readonly) AVAudioTier * fallbackTier;

+ (BOOL)shouldFilterTierForPayload:(id)arg1 bitRate:(unsigned long)arg2 packetsPerBundle:(unsigned long)arg3 cellular:(BOOL)arg4 operatingMode:(int)arg5;

- (id)fallbackTier;
- (id)AudioTier:(unsigned long)arg1;
- (unsigned int)LargestCapTier:(unsigned long)arg1;
- (id)createTierForPayload:(id)arg1 bitrate:(unsigned long)arg2 sampleRate:(unsigned long)arg3 packetsPerBundle:(unsigned long)arg4 headerSize:(unsigned long)arg5;
- (id)tierForNetworkBitrate:(unsigned long)arg1 duplication:(unsigned long)arg2;
- (id)forcedAudioTier;
- (id)defaultTier;
- (id)initWithOperatingMode:(int)arg1 payloads:(id)arg2 sampleRate:(unsigned long)arg3 packetsPerBundle:(id)arg4 headerSize:(unsigned long)arg5 usingCellular:(BOOL)arg6 defaultMaxCap:(unsigned long)arg7;
- (void)dealloc;

@end
