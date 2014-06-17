/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImagePickerController, CKVideoPreviewViewController, CKJoystickShutterButtonItem, <CKVideoMessageRecordingViewControllerDelegate>, CKJoystickButtonItem, NSError, CKJoystickController, UIButton, CKRecordingElapsedTimeView, UIView, UIWindow, CKMediaObject;

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKJoystickControllerDelegate, CKVideoRecorderDelegate, CKVideoPreviewViewControllerDelegate> {
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    BOOL _presented;
    BOOL _previewWarmedUp;
    BOOL _showingVideo;
    BOOL _recording;
    BOOL _sending;
    BOOL _canceled;
    BOOL _triedToRecord;
    <CKVideoMessageRecordingViewControllerDelegate> *_videoMessageDelegate;
    UIView *_topBackgroundView;
    CKRecordingElapsedTimeView *_timerView;
    CKJoystickController *_videoJoystickController;
    CKJoystickShutterButtonItem *_recordVideoButtonItem;
    CKJoystickButtonItem *_sendButtonItem;
    UIButton *_swapCameraButton;
    UIView *_blackView;
    unsigned int _enableCancel;
    CKMediaObject *_mediaObjectForSending;
    NSError *_captureError;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _mediaExportCompletionBlock;

    UIImagePickerController *_cameraViewController;
    CKVideoPreviewViewController *_previewViewController;
}

@property <CKVideoMessageRecordingViewControllerDelegate> * videoMessageDelegate;
@property(retain) UIView * topBackgroundView;
@property(retain) CKRecordingElapsedTimeView * timerView;
@property(retain) CKJoystickController * videoJoystickController;
@property(retain) CKJoystickShutterButtonItem * recordVideoButtonItem;
@property(retain) CKJoystickButtonItem * sendButtonItem;
@property(retain) UIButton * swapCameraButton;
@property BOOL recording;
@property BOOL sending;
@property BOOL canceled;
@property(retain) UIView * blackView;
@property BOOL triedToRecord;
@property unsigned int enableCancel;
@property(retain) CKMediaObject * mediaObjectForSending;
@property(retain) NSError * captureError;
@property(copy) id mediaExportCompletionBlock;
@property(retain) UIImagePickerController * cameraViewController;
@property(retain) CKVideoPreviewViewController * previewViewController;


- (void)record;
- (void)ckVideoPreviewViewControllerFinishedPlaying:(id)arg1;
- (void)ckVideoPreviewViewControllerReady:(id)arg1;
- (id)mediaExportCompletionBlock;
- (void)setEnableCancel:(unsigned int)arg1;
- (unsigned int)enableCancel;
- (void)setCaptureError:(id)arg1;
- (void)setMediaObjectForSending:(id)arg1;
- (id)captureError;
- (id)videoMessageDelegate;
- (void)setSending:(BOOL)arg1;
- (void)takePictureWithCompletionBlock:(id)arg1;
- (void)setMediaExportCompletionBlock:(id)arg1;
- (id)mediaObjectForSending;
- (void)_setupPreviewView;
- (void)_cleanupCamera;
- (void)presentInitialPlaybackJoystick;
- (void)delayedRecord;
- (void)setTriedToRecord:(BOOL)arg1;
- (void)presentRecordingJoystick;
- (id)previewViewController;
- (void)setPreviewViewController:(id)arg1;
- (BOOL)sending;
- (void)stopRecordingWithCompletionBlock:(id)arg1;
- (BOOL)triedToRecord;
- (BOOL)recording;
- (id)blackView;
- (void)_animateVideoIn;
- (void)presentVideoJoystick;
- (void)presentPlaybackJoystick:(BOOL)arg1;
- (id)videoJoystickController;
- (id)sendButtonItem;
- (void)setSendButtonItem:(id)arg1;
- (void)joystickSendButtonUpAction:(id)arg1;
- (void)setVideoJoystickController:(id)arg1;
- (id)swapCameraButton;
- (id)recordVideoButtonItem;
- (void)setRecordVideoButtonItem:(id)arg1;
- (void)joystickShutterButtonTapAction:(id)arg1;
- (void)joystickTakePhoto:(id)arg1;
- (void)joystickCancelActionButtonDown:(id)arg1;
- (void)setBlackView:(id)arg1;
- (void)setSwapCameraButton:(id)arg1;
- (void)swapCamera:(id)arg1;
- (id)topBackgroundView;
- (id)timerView;
- (void)setTimerView:(id)arg1;
- (void)setTopBackgroundView:(id)arg1;
- (id)cameraViewController;
- (void)setCameraViewController:(id)arg1;
- (void)_previewWarmedUp:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (BOOL)canceled;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)dismissWithCompletion:(id)arg1;
- (void)presentWithCompletion:(id)arg1;
- (void)setVideoMessageDelegate:(id)arg1;
- (id)initWithPresentationView:(id)arg1;
- (void)joystickControllerWillDismissJoystick:(id)arg1 animated:(BOOL)arg2;
- (void)joystickCancelAction:(id)arg1;
- (void)joystickShutterButtonDownAction:(id)arg1;
- (void)joystickShutterButtonUpAction:(id)arg1;
- (void)joystickPlaybackButtonUpAction:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)send;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)cancel;
- (void)dealloc;
- (void)setRecording:(BOOL)arg1;

@end