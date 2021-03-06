/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFormatReaderInspector : AVAssetInspector  {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property(getter=_formatReader,setter=_setFormatReader:,retain) struct OpaqueFigFormatReader { }* formatReader;


- (id)commonMetadata;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (id)lyrics;
- (struct CGSize { float x1; float x2; })naturalSize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)dealloc;
- (void)finalize;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (BOOL)_hasQTSaveRestriction;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (long)trackCount;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)canContainMovieFragments;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (id)alternateTrackGroups;
- (BOOL)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;

@end
