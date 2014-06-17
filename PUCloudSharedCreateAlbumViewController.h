/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, UINavigationItem, NSString, <PUCloudSharedCreateAlbumViewControllerDelegate>, PUPhotoStreamRecipientViewController;

@interface PUCloudSharedCreateAlbumViewController : UIViewController  {
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    <PUCloudSharedCreateAlbumViewControllerDelegate> *_delegate;
    NSString *_nextButtonTitle;
    NSArray *__albumRecipients;
}

@property <PUCloudSharedCreateAlbumViewControllerDelegate> * delegate;
@property(retain) NSString * nextButtonTitle;
@property(readonly) NSArray * albumRecipients;
@property(setter=_setAlbumRecipients:,retain) NSArray * _albumRecipients;


- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)navigationItem;
- (id)delegate;
- (id)_albumRecipients;
- (void)setNextButtonTitle:(id)arg1;
- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(id)arg1 fromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)albumRecipients;
- (void)_doneAction:(id)arg1;
- (id)nextButtonTitle;
- (void)_setAlbumRecipients:(id)arg1;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (void)_saveUserEnterredInfo;
- (void)_handleCompletionWithSuccess:(BOOL)arg1;
- (void)_cancelAction:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end