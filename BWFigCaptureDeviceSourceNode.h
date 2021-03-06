/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BWFigVideoCaptureDevice, BWNodeOutput;

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _videoSBufHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stillImageSBufHandler;

    BWFigVideoCaptureDevice *_captureDevice;
    BWNodeOutput *_videoCaptureOutput;
    BWNodeOutput *_stillImageOutput;
    int _resolvedSensorFormatIndex;
    int _streamSensorFormatIndex;
    unsigned long _sensorPixelFormat;
    unsigned long _streamSensorPixelFormat;
    int _offlineConfigurationSeed;
    int _resolvedOfflineConfigurationSeed;
    struct { 
        int width; 
        int height; 
    } _sensorDimensions;
    struct { 
        int width; 
        int height; 
    } _minOutputDimensions;
    int _minOutputDimensionsSensorFormatIndex;
    int _sensorFormatIndex;
    float _minFrameRate;
    float _maxFrameRate;
    BOOL _requiresOverscan;
    BOOL _temporalNoiseReductionEnabled;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    BOOL _lowLightBoostSupportedForFormat;
    int _motionAttachmentsSource;
    struct { 
        int width; 
        int height; 
    } _outputDimensions;
    struct { 
        int width; 
        int height; 
    } _streamOutputDimensions;
    struct { 
        int width; 
        int height; 
    } _sensorOverscanDimensions;
    BOOL _streamFormatChangeInFlight;
    struct { 
        int width; 
        int height; 
    } _streamOutputDimensionsAfterFormatChange;
    unsigned long _streamSensorPixelFormatAfterFormatChange;
}

@property(readonly) BWFigVideoCaptureDevice * captureDevice;
@property(readonly) BWNodeOutput * videoCaptureOutput;
@property(readonly) BWNodeOutput * stillImageOutput;

+ (int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(struct { int x1; int x2; })arg2 sensorPixelFormat:(unsigned long)arg3 sensorFormatIndex:(int)arg4;
+ (id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1;
+ (void)initialize;

- (BOOL)lowLightBoostSupportedForFormat;
- (BOOL)temporalNoiseReductionEnabled;
- (BOOL)requiresOverscan;
- (int)motionAttachmentsSource;
- (struct { int x1; int x2; })outputDimensions;
- (float)maxFrameRate;
- (float)minFrameRate;
- (int)sensorFormatIndex;
- (unsigned long)sensorPixelFormat;
- (struct { int x1; int x2; })_maxOutputDimensionsForResolvedSensorFormatIndex;
- (void)_updateMetadataConfigurations;
- (long)_updateStreamOutputDimensions;
- (long)_lockFramerateToMaxSupportedByCurrentSensorFormat;
- (void)_udpateMinOutputDimensionsForResolvedSensorFormatIndex;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_initWithCaptureDevice:(id)arg1;
- (BOOL)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(BOOL*)arg1 sensorPixelFormatChanged:(BOOL*)arg2 outputDimensionsChanged:(BOOL*)arg3;
- (void)_resolveOfflineConfiguration;
- (long)_bringStreamUpToDate;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (BOOL)stop:(id*)arg1;
- (struct { int x1; int x2; })sensorOverscanDimensions;
- (void)updateOutputRequirements;
- (struct { int x1; int x2; })minOutputDimensions;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)setLowLightBoostSupportedForFormat:(BOOL)arg1;
- (void)setTemporalNoiseReductionEnabled:(BOOL)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setRequiresOverscan:(BOOL)arg1;
- (void)setSensorFormatIndex:(int)arg1;
- (void)setSensorDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorPixelFormat:(unsigned long)arg1;
- (id)stillImageOutput;
- (id)videoCaptureOutput;
- (struct { int x1; int x2; })sensorDimensions;
- (struct OpaqueCMClock { }*)clock;
- (BOOL)start:(id*)arg1;
- (id)captureDevice;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeSubType;
- (void)dealloc;

@end
