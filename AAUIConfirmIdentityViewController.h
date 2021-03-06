/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSValue, AAUIProfilePictureStore, UILabel, UIButton, UIView, UIImage, ACAccount, UIScrollView, UIImagePickerController, <AAUIConfirmIdentityViewControllerDelegate>;

@interface AAUIConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {
    ACAccount *_account;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UIButton *_editButton;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
    <AAUIConfirmIdentityViewControllerDelegate> *_delegate;
}

@property <AAUIConfirmIdentityViewControllerDelegate> * delegate;


- (void)_updateViewsInPhotoArea:(id)arg1;
- (void)_presentImagePickerWithSourceType:(int)arg1;
- (void)_showImageSourcePicker;
- (BOOL)shouldShowInviteeInstructions;
- (void)_showImagePickerForAvailableSources;
- (float)_heightForText:(id)arg1 width:(float)arg2;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (void)continueButtonWasTapped:(id)arg1;
- (id)titleForContinuebutton;
- (void)_editPhotoButtonWasTapped:(id)arg1;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)pageTitle;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)instructions;

@end
