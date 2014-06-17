/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {
    NSDictionary *_exportSettings;
}

@property(readonly) NSDictionary * baseAudioSettings;
@property(readonly) NSDictionary * baseVideoSettings;


- (void)dealloc;
- (id)init;
- (id)initWithOutputSettingsPreset:(id)arg1;
- (id)baseVideoSettings;
- (id)baseAudioSettings;

@end
