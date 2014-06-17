/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PUCloudSharedBackdropView, <PUCloudSharedPostCommentViewControllerDelegate>, UITableView, NSMutableArray, UILabel, UIView, UITextView, PUStackView, NSString, UIColor, NSArray;

@interface PUCloudSharedPostCommentViewController : UIViewController <UITextViewDelegate, UITableViewDataSource, UITableViewDelegate, PLModalDimmingContained> {
    UIView *_backgroundView;
    NSArray *_dialogConstraints;
    NSArray *_backgroundConstraints;
    PUStackView *_imageStackView;
    PUCloudSharedBackdropView *_containerView;
    UILabel *_textPlaceholderLabel;
    UITextView *_textView;
    NSMutableArray *_attachments;
    UIColor *_placeholderColor;
    UIColor *_separatorColor;
    NSString *_albumName;
    UITableView *_tableView;
    UIView *_dialogView;
    struct { 
        unsigned int hasDidCancelComment : 1; 
        unsigned int hasDidSendComment : 1; 
    } _delegateFlags;
    BOOL _isNewAlbum;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSString *_placeholderText;
    int _selectedAlbumIndex;
    <PUCloudSharedPostCommentViewControllerDelegate> *_commentDelegate;
}

@property(copy) id completionHandler;
@property(copy) NSString * placeholderText;
@property(readonly) NSString * commentText;
@property BOOL isNewAlbum;
@property int selectedAlbumIndex;
@property <PUCloudSharedPostCommentViewControllerDelegate> * commentDelegate;


- (BOOL)isNewAlbum;
- (void)setIsNewAlbum:(BOOL)arg1;
- (id)commentText;
- (id)initWithDelegate:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (id)_placeholderColor;
- (void)addImage:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_separatorColor;
- (id)completionHandler;
- (id)navigationItem;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_contentView;
- (void)setSelectedAlbumIndex:(int)arg1;
- (int)selectedAlbumIndex;
- (void)setPlaceholderText:(id)arg1;
- (id)initWithAlbumName:(id)arg1 isCreateAlbum:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })preferredOffsetInParentViewController;
- (struct CGSize { float x1; float x2; })preferredSizeInParentViewController;
- (id)commentDelegate;
- (void)_postAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (id)_constraintsForBackgroundView:(id)arg1 inContainerView:(id)arg2;
- (void)_updateKeyboard;
- (void)_addBackgroundViewConstraintsInView:(id)arg1;
- (void)_addDialogConstraintsInView:(id)arg1;
- (id)placeholderText;
- (void)setCommentDelegate:(id)arg1;
- (void)dealloc;

@end
