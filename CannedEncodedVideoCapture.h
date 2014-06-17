/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVURLAsset, AVAssetReader, NSString, VideoScaler, AVAssetTrack, AVAssetReaderTrackOutput;

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder> {
    AVURLAsset *_compressedFileAsset;
    AVAssetReader *_assetReader;
    AVAssetTrack *_videoTrack;
    AVAssetReaderTrackOutput *_readerVideoTrackOutput;
    NSString *_movieURLString;
    VideoScaler *_videoScaler;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    struct __CVPixelBufferPool { } *_rotatedPixelBufferPool;
    int _width;
    int _height;
    int _allFrameCount;
    double _allFrameRate;
    int _frameCount;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _inputMutex;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _attributeMutex;
}

@property(retain) AVURLAsset * compressedFileAsset;
@property(retain) AVAssetReader * assetReader;
@property(retain) AVAssetTrack * videoTrack;
@property(retain) AVAssetReaderTrackOutput * readerVideoTrackOutput;
@property(retain) NSString * movieURLString;
@property(retain) VideoScaler * videoScaler;
@property int width;
@property int height;
@property int allFrameCount;
@property double allFrameRate;
@property int frameCount;


- (void)setFrameCount:(int)arg1;
- (int)frameCount;
- (void)setAllFrameRate:(double)arg1;
- (double)allFrameRate;
- (void)setAllFrameCount:(int)arg1;
- (int)allFrameCount;
- (void)setVideoScaler:(id)arg1;
- (id)videoScaler;
- (void)setMovieURLString:(id)arg1;
- (id)movieURLString;
- (long)rotatePixelBuffer:(struct __CVBuffer { }*)arg1 andStoreTo:(struct __CVBuffer {}**)arg2;
- (long)setWidth:(int)arg1 height:(int)arg2;
- (void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
- (struct __CVBuffer { }*)createPixelBufferForFrameIndex:(int)arg1;
- (long)initializeDecoder;
- (id)readerVideoTrackOutput;
- (void)setReaderVideoTrackOutput:(id)arg1;
- (id)videoTrack;
- (void)setVideoTrack:(id)arg1;
- (id)assetReader;
- (void)setAssetReader:(id)arg1;
- (id)compressedFileAsset;
- (void)setCompressedFileAsset:(id)arg1;
- (void)setHeight:(int)arg1;
- (id)initWithPath:(id)arg1;
- (void)setWidth:(int)arg1;
- (int)height;
- (int)width;
- (long)initialize;
- (void)dealloc;

@end
