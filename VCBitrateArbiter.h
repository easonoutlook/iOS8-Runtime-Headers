/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray;

@interface VCBitrateArbiter : NSObject  {
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    NSMutableArray *supportedBitrateRules;
}

@property(readonly) unsigned int maxAllowedBitrate;
@property(readonly) unsigned int maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrateWifi;


- (unsigned int)maxAllowedBitrateWifi;
- (unsigned int)maxAllowedBitrateLTE;
- (unsigned int)maxAllowedBitrate3G;
- (unsigned int)maxAllowedBitrate2G;
- (void)createSupportedBitrateRuleSets;
- (void)readCarrierBundleValues;
- (void)readStoreBagValues;
- (void)readHardwareValues;
- (unsigned int)maxAllowedCellularBitrate;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrate;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1;
- (void)dealloc;
- (id)init;

@end
