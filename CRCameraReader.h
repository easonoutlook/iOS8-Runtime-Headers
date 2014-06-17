/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class CRBoxLayer, <CRCameraReaderDelegate>, CIDetector, CIContext, UIActivityIndicatorView, NSPointerArray, NSDate, CRAlignmentLayer, CRCaptureSessionManager, NSObject<OS_dispatch_queue>, DiagnosticHUDLayer, NSArray, UITapGestureRecognizer, NSString, CIFilter, NSObject<OS_dispatch_semaphore>, NSTimer;

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    BOOL _continousMode;
    BOOL _captureMode;
    BOOL _showDiagnosticHUD;
    BOOL _configPresentCentered;
    BOOL _codeInverted;
    BOOL _didSendEndOrCancel;
    BOOL _didSendFindBox;
    BOOL _configUseJPEGForColor;
    BOOL _configExperimentalMode;
    BOOL _configUseFastScanning;
    BOOL _previousIdleState;
    <CRCameraReaderDelegate> *_callbackDelegate;
    NSArray *_outputObjectTypes;
    unsigned int _captureCount;
    int _whiteBalanceMode;
    int _focusMode;
    int _exposureMode;
    int _torchMode;
    NSString *_cameraMode;
    int _cameraPosition;
    float _configDemoSpeed;
    CRCaptureSessionManager *_sessionManager;
    CRBoxLayer *_boxLayer;
    DiagnosticHUDLayer *_diagnosticHUDLayer;
    NSArray *_foundPoints;
    NSString *_foundCode;
    NSDate *_sessionStarted;
    NSDate *_pointsFound;
    NSDate *_codePresented;
    unsigned int _imagesToCapture;
    NSPointerArray *_captureBuffer;
    NSTimer *_boxLayerHideTimer;
    struct opaqueCMSampleBuffer { } *_lastBuffer;
    NSObject<OS_dispatch_semaphore> *_processingImage;
    int _numberOfNameDateAttempts;
    int _maxNumberOfNameDateAttempts;
    CRAlignmentLayer *_alignmentLayer;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    UIActivityIndicatorView *_activityIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct OpaqueVTPixelTransferSession { } *_previewScaleSession;
    CIDetector *_rectangleDetector;
    CIFilter *_perspectiveFilter;
    CIContext *_ciContext;
    double _sessionTimeout;
}

@property <CRCameraReaderDelegate> * callbackDelegate;
@property(copy) NSArray * outputObjectTypes;
@property(readonly) int currentCameraIdentifier;
@property BOOL continousMode;
@property(getter=isCaptureMode) BOOL captureMode;
@property unsigned int captureCount;
@property double sessionTimeout;
@property int whiteBalanceMode;
@property int focusMode;
@property int exposureMode;
@property int torchMode;
@property(copy) NSString * cameraMode;
@property int cameraPosition;
@property BOOL showDiagnosticHUD;
@property BOOL configPresentCentered;
@property float configDemoSpeed;
@property(retain) CRCaptureSessionManager * sessionManager;
@property(retain) CRBoxLayer * boxLayer;
@property(retain) DiagnosticHUDLayer * diagnosticHUDLayer;
@property(retain) NSArray * foundPoints;
@property(retain) NSString * foundCode;
@property(retain) NSDate * sessionStarted;
@property(retain) NSDate * pointsFound;
@property(retain) NSDate * codePresented;
@property BOOL codeInverted;
@property BOOL didSendEndOrCancel;
@property BOOL didSendFindBox;
@property unsigned int imagesToCapture;
@property BOOL configUseJPEGForColor;
@property(retain) NSPointerArray * captureBuffer;
@property(retain) NSTimer * boxLayerHideTimer;
@property BOOL configExperimentalMode;
@property BOOL configUseFastScanning;
@property struct opaqueCMSampleBuffer { }* lastBuffer;
@property(retain) NSObject<OS_dispatch_semaphore> * processingImage;
@property int numberOfNameDateAttempts;
@property int maxNumberOfNameDateAttempts;
@property(retain) CRAlignmentLayer * alignmentLayer;
@property(retain) NSObject<OS_dispatch_queue> * processingQueue;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property(retain) UITapGestureRecognizer * tapGestureRecognizer;
@property struct OpaqueVTPixelTransferSession { }* previewScaleSession;
@property(retain) CIDetector * rectangleDetector;
@property(retain) CIFilter * perspectiveFilter;
@property(retain) CIContext * ciContext;
@property BOOL previousIdleState;

+ (unsigned int)supportedCameraCount;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 roi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)findCCCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 roi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2;
+ (void)loadFonts;

- (void)setOutputObjectTypes:(id)arg1;
- (id)sessionManager;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(int)arg3 duration:(double)arg4;
- (void)startSession;
- (void)toggleCamera;
- (id)processingQueue;
- (void)stopSession;
- (BOOL)configUseFastScanning;
- (BOOL)configExperimentalMode;
- (void)setShowDiagnosticHUD:(BOOL)arg1;
- (void)setCaptureMode:(BOOL)arg1;
- (void)setContinousMode:(BOOL)arg1;
- (BOOL)continousMode;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (void)sendDidFindBox;
- (int)currentCameraIdentifier;
- (void)sendDidEndWithError:(id)arg1;
- (BOOL)didSendFindBox;
- (BOOL)didSendEndOrCancel;
- (void)sendDidDisplayMessageStyle:(int)arg1;
- (id)codePresented;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boxLayerPresentationFrame;
- (float)configDemoSpeed;
- (id)boxLayerHideTimer;
- (void)sendDidEndAnimation;
- (int)maxNumberOfNameDateAttempts;
- (int)numberOfNameDateAttempts;
- (id)extractCardImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 fromSamplebuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)ciContext;
- (id)perspectiveFilter;
- (id)rectangleDetector;
- (void)animatePresentCode;
- (void)pauseBoxLayerHideTimer;
- (void)sendDidEndWithInfo:(id)arg1;
- (BOOL)codeInverted;
- (BOOL)configPresentCentered;
- (void)primeBoxLayerHideTimer;
- (id)pointsFound;
- (void)setFoundPoints:(id)arg1;
- (id)foundPoints;
- (id)foundCode;
- (void)flashScreenAndPlayCaptureSound;
- (id)callbackDelegate;
- (BOOL)configUseJPEGForColor;
- (id)generateStringFromDate:(id)arg1;
- (void)findCCCodeInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)processingImage;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (double)sessionTimeout;
- (id)sessionStarted;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)previousIdleState;
- (void)setPreviousIdleState:(BOOL)arg1;
- (void)setBoxLayer:(id)arg1;
- (void)setMaxNumberOfNameDateAttempts:(int)arg1;
- (void)setNumberOfNameDateAttempts:(int)arg1;
- (id)boxLayer;
- (void)setDidSendFindBox:(BOOL)arg1;
- (void)setDidSendEndOrCancel:(BOOL)arg1;
- (void)setCodeInverted:(BOOL)arg1;
- (void)setCodePresented:(id)arg1;
- (void)setPointsFound:(id)arg1;
- (void)setSessionStarted:(id)arg1;
- (void)setFoundCode:(id)arg1;
- (void)sendDidCancel;
- (void)setImagesToCapture:(unsigned int)arg1;
- (unsigned int)imagesToCapture;
- (unsigned int)captureCount;
- (void)captureImage;
- (void)switchToCamera:(int)arg1;
- (id)captureBuffer;
- (struct OpaqueVTPixelTransferSession { }*)previewScaleSession;
- (struct opaqueCMSampleBuffer { }*)lastBuffer;
- (void)removeLayerTree;
- (void)altHandleTapFrom:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (BOOL)isCaptureMode;
- (id)diagnosticHUDLayer;
- (void)setDiagnosticHUDLayer:(id)arg1;
- (BOOL)showDiagnosticHUD;
- (id)alignmentLayer;
- (void)setAlignmentLayer:(id)arg1;
- (void)setBoxLayerHideTimer:(id)arg1;
- (void)hideBoxLayer;
- (id)outputObjectTypes;
- (int)cameraPosition;
- (void)setSessionManager:(id)arg1;
- (void)setCallbackDelegate:(id)arg1;
- (void)setCiContext:(id)arg1;
- (void)setPerspectiveFilter:(id)arg1;
- (void)setRectangleDetector:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setLastBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setProcessingImage:(id)arg1;
- (void)setPreviewScaleSession:(struct OpaqueVTPixelTransferSession { }*)arg1;
- (void)setCameraPosition:(int)arg1;
- (void)setSessionTimeout:(double)arg1;
- (void)setCaptureBuffer:(id)arg1;
- (void)setCaptureCount:(unsigned int)arg1;
- (void)setConfigUseJPEGForColor:(BOOL)arg1;
- (void)setConfigUseFastScanning:(BOOL)arg1;
- (void)setConfigExperimentalMode:(BOOL)arg1;
- (void)setConfigDemoSpeed:(float)arg1;
- (void)setConfigPresentCentered:(BOOL)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
- (id)cameraMode;
- (void)setCameraMode:(id)arg1;
- (id)tapGestureRecognizer;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;

@end
