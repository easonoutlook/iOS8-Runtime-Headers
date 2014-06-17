/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVCaptureVideoPreviewLayerInternal, AVCaptureConnection, AVCaptureSession;

@interface AVCaptureVideoPreviewLayer : CALayer  {
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property(retain) AVCaptureSession * session;
@property(readonly) AVCaptureConnection * connection;
@property(copy) NSString * videoGravity;
@property(getter=isOrientationSupported,readonly) BOOL orientationSupported;
@property int orientation;
@property(getter=isMirroringSupported,readonly) BOOL mirroringSupported;
@property BOOL automaticallyAdjustsMirroring;
@property(getter=isMirrored) BOOL mirrored;

+ (void)initialize;
+ (id)alloc;
+ (id)layerWithSession:(id)arg1;

- (void)setVideoGravity:(id)arg1;
- (BOOL)isPaused;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (id)connection;
- (void)setPaused:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (id)_input;
- (int)orientation;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)initWithLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)init;
- (id)connections;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMetadataObject:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)activeConnections;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (void)setMirrored:(BOOL)arg1;
- (BOOL)isMirrored;
- (void)setAutomaticallyAdjustsMirroring:(BOOL)arg1;
- (BOOL)isOrientationSupported;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForCaptureDeviceFaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isChromaNoiseReductionSupported;
- (BOOL)isMirroringSupported;
- (void)_updateCaptureDeviceTransform;
- (BOOL)_isMirrored;
- (BOOL)_automaticallyAdjustsMirroring;
- (int)_orientation;
- (void)centerSublayer:(int)arg1;
- (id)initWithSession:(id)arg1;
- (BOOL)automaticallyAdjustsMirroring;
- (float)previewRotationDegrees;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)bumpChangeSeed;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)changeSeed;
- (id)videoGravity;
- (id)connectionMediaTypes;
- (void)setSession:(id)arg1;
- (id)liveConnections;
- (id)session;

@end