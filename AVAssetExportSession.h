/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVMetadataItemFilter, AVAsset, <AVVideoCompositing>, AVAudioMix, AVAssetExportSessionInternal, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSession : NSObject  {
    AVAssetExportSessionInternal *_exportSession;
}

@property(readonly) NSString * presetName;
@property(retain,readonly) AVAsset * asset;
@property(readonly) NSArray * supportedFileTypes;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) int status;
@property(readonly) NSError * error;
@property(readonly) float progress;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property(readonly) long long estimatedOutputFileLength;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(copy) NSArray * metadata;
@property(retain) AVMetadataItemFilter * metadataItemFilter;
@property long long fileLengthLimit;
@property(copy) NSString * audioTimePitchAlgorithm;
@property(copy) AVAudioMix * audioMix;
@property(copy) AVVideoComposition * videoComposition;
@property(readonly) <AVVideoCompositing> * customVideoCompositor;
@property BOOL shouldOptimizeForNetworkUse;
@property BOOL canPerformMultiplePassesOverSourceMediaData;
@property(copy) NSURL * directoryForTemporaryFiles;

+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id)arg4;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)_videoCompressionPropertiesForVideoSetting:(id)arg1;
+ (id)_utTypesForTemporalMetadataPresets;
+ (BOOL)_disablePassthrough;
+ (id)_figRemakerNotificationNames;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2;
+ (BOOL)_disableExportCompatibilityCheck;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(BOOL)arg2 playableVideo:(BOOL)arg3 outputFileType:(id)arg4;
+ (BOOL)_failsAudioPassthroughRestrictions:(id)arg1 outputFileType:(id)arg2;
+ (id)_utTypesForAudioOnly;
+ (BOOL)_isPassthroughExportSupportedForAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forFileType:(struct __CFString { }*)arg2 asChapterTrack:(BOOL)arg3 usingModifiedFormatDescription:(const struct opaqueCMFormatDescription {}**)arg4;
+ (id)_utTypesForDefaultPassthroughPreset;
+ (id)_audioOnlyPresets;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (BOOL)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2;
+ (id)_utTypesForPresets;
+ (BOOL)_isPassthroughExportSupportedForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forFileType:(struct __CFString { }*)arg2 asChapterTrack:(BOOL)arg3;
+ (id)_mediaTypesToFailPassthroughExport;
+ (id)_mediaTypesToStripOnPassthroughExport;
+ (id)_settingForPreset:(id)arg1;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (BOOL)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (id)_asynchronousDispatchQueue;
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(BOOL)arg3;
+ (id)_audioVideoPresets;
+ (id)allExportPresets;

- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setMetadataItemFilter:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (id)supportedFileTypes;
- (id)presetName;
- (id)error;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (id)outputFileType;
- (id)outputURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (int)status;
- (id)asset;
- (float)progress;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct CGSize { float x1; float x2; })_getSourceDimension;
- (void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2;
- (id)_actualSettingForPresetAppleM4VAppleTV:(id)arg1;
- (void)_transferTrackProperties:(struct OpaqueFigRemaker { }*)arg1 sourceTrackID:(int)arg2 destinationTrackID:(int)arg3;
- (id)_audioProcessingOptions;
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (BOOL)_isAudioMixdownRequired:(struct __CFString { }*)arg1 error:(id*)arg2;
- (id)_addTracksAndPropertiesToFigRemakerForPassthroughExport:(struct OpaqueFigRemaker { }*)arg1;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_canPassThroughTemporalMetadata;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_canPassThroughVideo:(id)arg1 remaker:(struct OpaqueFigRemaker { }*)arg2 checkEnabled:(BOOL)arg3 checkAll:(BOOL)arg4 checkProtected:(BOOL)arg5;
- (id)_settingForFigRemaker;
- (id)_remakerOptionsForFileFormat:(id)arg1;
- (void)_createFormatWriterOptions:(id*)arg1 forFileFormat:(id)arg2;
- (id)_addAudioPassthroughTrack:(id)arg1 asChapterTrack:(BOOL)arg2 toFigRemaker:(struct OpaqueFigRemaker { }*)arg3 returningTrackID:(int*)arg4;
- (int)_averageBitRateForSourceAndPreset:(id)arg1 targetFrameRate:(float)arg2;
- (float)_getSourceVideoFrameRate;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2;
- (struct CGSize { float x1; float x2; })_getUntransformedSourceDimension;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg1;
- (BOOL)canPerformMultiplePassesOverSourceMediaData;
- (void)setFileLengthLimit:(long long)arg1;
- (long long)fileLengthLimit;
- (long long)estimatedOutputFileLength;
- (BOOL)_canPerformFastFrameRateConversionWithPreset:(id)arg1 usingRemaker:(struct OpaqueFigRemaker { }*)arg2;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (void)setMinVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)cancelExport;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)arg1;
- (void)_addListeners;
- (id)_createFigRemaker:(struct OpaqueFigRemaker {}**)arg1;
- (BOOL)_validateSettablePropertiesReturningError:(id*)arg1;
- (void)_createRemakerAndBeginExport;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_validateOutputFileTypeForExport;
- (id)_actualOutputFileType;
- (void)_updateProgress;
- (id)_determineCompatibleFileTypes;
- (id)_actualPresetName;
- (void)_removeListeners;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)videoFrameRateConversionAlgorithm;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minVideoFrameDuration;
- (id)metadataItemFilter;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)audioTimePitchAlgorithm;
- (void)setAudioMix:(id)arg1;
- (id)audioMix;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;

@end