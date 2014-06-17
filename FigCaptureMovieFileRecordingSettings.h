/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding> {
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    BOOL _videoMirrored;
    int _videoOrientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieFragmentInterval;
    NSDictionary *_movieLevelMetadata;
    BOOL _sendThumbnailIOSurface;
}

@property(copy) NSDictionary * videoSettings;
@property(copy) NSDictionary * audioSettings;
@property BOOL videoMirrored;
@property int videoOrientation;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(copy) NSDictionary * movieLevelMetadata;
@property BOOL sendThumbnailIOSurface;


- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)audioSettings;
- (int)videoOrientation;
- (BOOL)videoMirrored;
- (id)videoSettings;
- (void)setSendThumbnailIOSurface:(BOOL)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAudioSettings:(id)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (void)setVideoSettings:(id)arg1;
- (BOOL)sendThumbnailIOSurface;
- (void)setMovieLevelMetadata:(id)arg1;
- (id)movieLevelMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end