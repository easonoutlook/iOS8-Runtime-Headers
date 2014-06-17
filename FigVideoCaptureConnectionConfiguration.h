/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration  {
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    BOOL _videoStabilizationEnabled;
    int _videoStabilizationMethod;
    BOOL _mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
    int _videoStabilizationgMethod;
}

@property int outputFormat;
@property int outputWidth;
@property int outputHeight;
@property BOOL videoStabilizationEnabled;
@property int videoStabilizationMethod;
@property BOOL mirroringEnabled;
@property int orientation;
@property int retainedBufferCount;


- (void)setMirroringEnabled:(BOOL)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (void)setVideoStabilizationEnabled:(BOOL)arg1;
- (BOOL)mirroringEnabled;
- (int)videoStabilizationMethod;
- (BOOL)videoStabilizationEnabled;
- (void)setRetainedBufferCount:(int)arg1;
- (int)retainedBufferCount;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (int)outputHeight;
- (int)outputWidth;
- (int)outputFormat;
- (void)setOrientation:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)orientation;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
