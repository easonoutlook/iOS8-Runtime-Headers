/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIVideoEditorController, <CKTrimControllerDelegate>, CKMediaObject;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate> {
    <CKTrimControllerDelegate> *_delegate;
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
    UIVideoEditorController *_editVideoVC;
}

@property <CKTrimControllerDelegate> * delegate;
@property(retain) CKMediaObject * originalMediaObject;
@property(retain) CKMediaObject * trimmedMediaObject;
@property(retain) UIVideoEditorController * editVideoVC;


- (void)setEditVideoVC:(id)arg1;
- (id)trimmedMediaObject;
- (void)setTrimmedMediaObject:(id)arg1;
- (id)originalMediaObject;
- (void)setOriginalMediaObject:(id)arg1;
- (id)editVideoVC;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end