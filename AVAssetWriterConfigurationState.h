/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, NSArray, AVMediaFileType;

@interface AVAssetWriterConfigurationState : NSObject  {
    NSURL *_URL;
    AVMediaFileType *_mediaFileType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieFragmentInterval;
    BOOL _shouldOptimizeForNetworkUse;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    NSArray *_inputs;
    NSArray *_inputGroups;
}

@property(copy) NSURL * URL;
@property(copy) AVMediaFileType * mediaFileType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property BOOL shouldOptimizeForNetworkUse;
@property(copy) NSURL * directoryForTemporaryFiles;
@property(copy) NSArray * metadataItems;
@property int movieTimeScale;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property float preferredVolume;
@property float preferredRate;
@property(copy) NSArray * inputs;
@property(copy) NSArray * inputGroups;


- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)inputs;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (void)setInputGroups:(id)arg1;
- (id)inputGroups;
- (void)setInputs:(id)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
- (void)setMetadataItems:(id)arg1;
- (id)metadataItems;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setMediaFileType:(id)arg1;
- (id)mediaFileType;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (float)preferredVolume;
- (float)preferredRate;

@end
