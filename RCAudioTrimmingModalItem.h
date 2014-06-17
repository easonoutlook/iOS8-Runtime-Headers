/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSOperationQueue, <RCAudioTrimmingModalItemDelegate>, RCTrimTimeRangeOperation, RCSavedRecording, AVAssetExportSession, NSString, RCActionSheetController, RCAudioTrimmingModalItemViewController;

@interface RCAudioTrimmingModalItem : NSObject  {
    AVAssetExportSession *_exportSession;
    NSString *_sourcePath;
    NSString *_destinationPath;
    BOOL _playing;
    BOOL _isBeingDismissed;
    BOOL _cancelTrimRequested;
    RCTrimTimeRangeOperation *_trimOperation;
    NSOperationQueue *_trimOperationQueue;
    RCActionSheetController *_presentedActionSheetController;
    RCAudioTrimmingModalItemViewController *_trimmingViewController;
    BOOL _deletesDestinationPathWhenDone;
    <RCAudioTrimmingModalItemDelegate> *_delegate;
    RCSavedRecording *_recording;
    double _maximumTrimmedDuration;
}

@property <RCAudioTrimmingModalItemDelegate> * delegate;
@property(copy,readonly) NSString * sourcePath;
@property(copy,readonly) NSString * destinationPath;
@property BOOL deletesDestinationPathWhenDone;
@property double maximumTrimmedDuration;
@property(readonly) RCSavedRecording * recording;

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;

- (void)_dismissAnimated:(BOOL)arg1;
- (double)maximumTrimmedDuration;
- (void)setDeletesDestinationPathWhenDone:(BOOL)arg1;
- (BOOL)deletesDestinationPathWhenDone;
- (id)sourcePath;
- (void)showWithPresentationViewController:(id)arg1 message:(id)arg2 trimButtonTitle:(id)arg3 completionBlock:(id)arg4;
- (void)setMaximumTrimmedDuration:(double)arg1;
- (id)initWithDelegate:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)_handleTrimSheetActionWithClickedButtonIndex:(unsigned int)arg1 completionBlock:(id)arg2;
- (id)destinationPath;
- (id)recording;
- (void)_applicationWillResignActive:(id)arg1;
- (void).cxx_destruct;
- (void)dismiss;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
