/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSMutableArray, RCCaptureSession, NSURL, RCComposition, NSMutableDictionary;

@interface RCCompositionController : NSObject  {
    BOOL _hasStartedRecording;
    NSMutableDictionary *_accessTokensByName;
    NSMutableArray *_undoableCompositionItemStack;
    RCComposition *_composition;
    RCCaptureSession *_activeCaptureSession;
}

@property(retain) RCComposition * composition;
@property(readonly) NSURL * savedRecordingURI;
@property(readonly) RCCaptureSession * activeCaptureSession;
@property(readonly) unsigned int countOfUndoableCompositions;
@property(readonly) BOOL isTopUndoableCompositionFromCapture;

+ (id)compositionControllerForComposedAVURL:(id)arg1;

- (id)_activitySourceRecording;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(id)arg4;
- (BOOL)isTopUndoableCompositionFromCapture;
- (void)finalizingComposedAssetWithCompletionHandler:(id)arg1;
- (void)beginAccessSessionToTrimWithAssetReadyBlock:(id)arg1;
- (void)beginAccessSessionToPlayTimeRange:(struct { double x1; double x2; })arg1 readyToPlayBlock:(id)arg2;
- (void)endPreviewAccessSession;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1;
- (unsigned int)countOfUndoableCompositions;
- (void)_reloadComposition;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(struct { double x1; double x2; })arg1 isOverdub:(BOOL)arg2;
- (void)_endAccessSessionWithToken:(id)arg1;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)activeRecordingSessionWillFinish;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id)arg1;
- (void)deleteCompositionFromFileSystem;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(id)arg5 sessionFinishedBlock:(id)arg6;
- (void)endAccessSessions;
- (void)endTrimAccessSession;
- (void)beginAccessSessionToExportWithAssetReadyBlock:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (id)savedRecordingURI;
- (void)sanitizeWithCompletionBlock:(id)arg1;
- (id)activeCaptureSession;
- (void)setComposition:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { float x1; float x2; })arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void).cxx_destruct;
- (void)endEditing;
- (void)beginEditing;
- (id)init;
- (id)composition;

@end