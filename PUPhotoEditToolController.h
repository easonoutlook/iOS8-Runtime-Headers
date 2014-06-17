/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotoEditToolControllerDelegate>, UIColor, UIButton, UIView, UIImage, NSString, UIScrollView, PLPhotoEditMutableModel, PUPhotoEditToolControllerSpec;

@interface PUPhotoEditToolController : UIViewController <PUPhotoEditLayoutDynamicAdaptable, UIScrollViewDelegate> {
    BOOL _shouldDeferUpdatingModelDependentControls;
    PUPhotoEditToolControllerSpec *_spec;
    int _layoutOrientation;
    PLPhotoEditMutableModel *_photoEditModel;
    <PUPhotoEditToolControllerDelegate> *_delegate;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    UIImage *_selectedToolbarIcon;
    unsigned int _preferredRenderMode;
    UIButton *_preferredAlternateToolbarButton;
    UIScrollView *__toolControllerScrollView;
    UIView *__dummyScrollContentView;
}

@property(retain) PUPhotoEditToolControllerSpec * spec;
@property BOOL shouldDeferUpdatingModelDependentControls;
@property unsigned int preferredRenderMode;
@property(retain) UIButton * preferredAlternateToolbarButton;
@property(readonly) PLPhotoEditMutableModel * photoEditModel;
@property(readonly) PUPhotoEditToolControllerSpec * spec;
@property <PUPhotoEditToolControllerDelegate> * delegate;
@property(readonly) NSString * localizedName;
@property(readonly) UIImage * toolbarIcon;
@property(readonly) UIImage * selectedToolbarIcon;
@property(readonly) BOOL shouldDeferUpdatingModelDependentControls;
@property(readonly) BOOL canResetToDefaultValue;
@property(readonly) NSString * localizedResetToolActionTitle;
@property(readonly) unsigned int preferredRenderMode;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } preferredPreviewViewInsets;
@property(readonly) BOOL wantsDefaultPreviewView;
@property(copy,readonly) UIColor * preferredPreviewBackgroundColor;
@property(readonly) UIButton * preferredAlternateToolbarButton;
@property(readonly) BOOL wantsZoomAndPanEnabled;
@property(setter=_setToolControllerScrollView:,retain) UIScrollView * _toolControllerScrollView;
@property(setter=_setDummyScrollContentView:,retain) UIView * _dummyScrollContentView;
@property(readonly) int layoutOrientation;


- (id)photoEditModel;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)localizedName;
- (void)setLayoutOrientation:(int)arg1;
- (int)layoutOrientation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setPreferredAlternateToolbarButton:(id)arg1;
- (void)setPreferredRenderMode:(unsigned int)arg1;
- (void)setShouldDeferUpdatingModelDependentControls:(BOOL)arg1;
- (id)_dummyScrollContentView;
- (void)photoEditModelDidChange;
- (void)_setDummyScrollContentView:(id)arg1;
- (void)_setToolControllerScrollView:(id)arg1;
- (id)_toolControllerScrollView;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (void)animateBecomingActiveTool;
- (void)animateResigningActiveTool;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;
- (void)setupWithPhotoEditModel:(id)arg1;
- (void)_photoEditModelDidChange:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (BOOL)shouldDeferUpdatingModelDependentControls;
- (void)resetToDefaultValueAnimated:(BOOL)arg1;
- (id)localizedResetToolActionTitle;
- (BOOL)canResetToDefaultValue;
- (BOOL)wantsZoomAndPanEnabled;
- (void)_updateScrollViewCentering;
- (void)resetForZoomAndPan;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })preferredPreviewViewInsets;
- (id)preferredPreviewBackgroundColor;
- (id)preferredAlternateToolbarButton;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (BOOL)wantsDefaultPreviewView;
- (unsigned int)preferredRenderMode;
- (void)setLayoutOrientation:(int)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
