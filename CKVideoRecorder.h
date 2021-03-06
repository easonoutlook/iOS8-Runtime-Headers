/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSObject<OS_dispatch_queue>, AVCaptureDevice, AVCaptureDeviceInput, <CKVideoRecorderDelegate>, AVCaptureSession, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, NSURL, AVCaptureVideoPreviewLayer;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    int _currentDevice;
    BOOL _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    BOOL _canceled;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    <CKVideoRecorderDelegate> *_delegate;
    NSURL *_outputFileURL;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureDeviceInput *_frontVideoInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureMovieFileOutput *_videoOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
}

@property(retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;
@property int cameraDevice;
@property <CKVideoRecorderDelegate> * delegate;
@property(copy) NSURL * outputFileURL;
@property(retain) AVCaptureSession * session;
@property(retain) AVCaptureDeviceInput * rearVideoInput;
@property(retain) AVCaptureDeviceInput * frontVideoInput;
@property(retain) AVCaptureDeviceInput * audioInput;
@property(retain) AVCaptureMovieFileOutput * videoOutput;
@property(retain) AVCaptureStillImageOutput * stillImageOutput;
@property BOOL canceled;


- (id)audioInput;
- (id)rearVideoInput;
- (id)frontVideoInput;
- (void)setRearVideoInput:(id)arg1;
- (id)rearFacingCamera;
- (void)setFrontVideoInput:(id)arg1;
- (id)frontFacingCamera;
- (void)setupCamera:(id)arg1;
- (id)_cameraWithPosition:(int)arg1;
- (BOOL)canceled;
- (void)setOutputFileURL:(id)arg1;
- (id)videoOutput;
- (void)setAudioInput:(id)arg1;
- (id)audioDevice;
- (id)captureVideoPreviewLayer;
- (void)setStillImageOutput:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (id)_configureRearVideoInput;
- (id)_configureFrontVideoInput;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (void)setCanceled:(BOOL)arg1;
- (id)stillImageOutput;
- (void)setCameraDevice:(int)arg1;
- (int)cameraDevice;
- (void)stopVideoCapture;
- (BOOL)startVideoCapture;
- (void)takePicture;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (id)outputFileURL;
- (void)setSession:(id)arg1;
- (id)session;

@end
