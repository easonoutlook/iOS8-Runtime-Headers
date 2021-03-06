/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class UIImageView, FlickrPhotoSetController, ACAccountStore, SLComposeSheetConfigurationItem, FlickrUploadSession, NSString, FlickrPhotoSetManager, FlickrAudienceController, ACAccount;

@interface FlickrComposeViewController : SLComposeServiceViewController <FlickrComposeOptionViewDelegate> {
    FlickrUploadSession *_session;
    UIImageView *_logoView;
    BOOL _hasFlickrAccount;
    SLComposeSheetConfigurationItem *_photoSetConfigurationItem;
    FlickrPhotoSetController *_photoSetController;
    NSString *_photoSetTitle;
    long long _photoSetID;
    FlickrPhotoSetManager *_manager;
    SLComposeSheetConfigurationItem *_audienceConfigurationItem;
    FlickrAudienceController *_audienceController;
    int _audience;
    ACAccountStore *_accountStore;
    ACAccount *_flickrAccount;
}

@property(retain) ACAccountStore * accountStore;
@property(retain) ACAccount * flickrAccount;


- (void)flickrComposeOptionView:(id)arg1 didFinishWithSelection:(id)arg2;
- (id)flickrAccount;
- (unsigned int)postVisibility;
- (void)setFlickrAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (id)accountStore;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)configurationItems;
- (void)didSelectPost;

@end
