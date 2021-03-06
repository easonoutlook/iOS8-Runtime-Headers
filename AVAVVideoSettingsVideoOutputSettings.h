/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property(readonly) unsigned long videoCodecType;
@property(readonly) NSDictionary * videoEncoderSpecification;
@property(readonly) NSDictionary * videoCompressionProperties;

+ (BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (int)height;
- (int)width;
- (void)dealloc;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)cleanApertureDictionary;
- (id)pixelAspectRatioDictionary;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)videoCompressionProperties;
- (id)videoEncoderSpecification;
- (unsigned long)videoCodecType;
- (BOOL)willYieldCompressedSamples;

@end
