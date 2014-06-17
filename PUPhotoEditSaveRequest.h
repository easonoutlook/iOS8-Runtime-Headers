/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHContentEditingOutput, PHAsset, PLPhotoEditModel;

@interface PUPhotoEditSaveRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    PHAsset *_photo;
    PLPhotoEditModel *_editModel;
    PHContentEditingOutput *_contentEditingOutput;
    int _workImageVersion;
    int _currentState;
}

@property(readonly) PHAsset * photo;
@property(copy,readonly) PLPhotoEditModel * editModel;
@property(readonly) PHContentEditingOutput * contentEditingOutput;
@property(readonly) int workImageVersion;
@property(readonly) int currentState;


- (void).cxx_destruct;
- (int)currentState;
- (id)contentEditingOutput;
- (id)editModel;
- (void)cancelSaveOperation;
- (void)beginSaveOperationWithCompletionHandler:(id)arg1;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(int)arg3;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(int)arg3;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (void)_finishWithSuccess:(BOOL)arg1;
- (void)_renderAndSaveBaseImage:(id)arg1;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (void)_transitionToState:(int)arg1;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(int)arg4;
- (int)workImageVersion;
- (id)photo;
- (id)init;

@end