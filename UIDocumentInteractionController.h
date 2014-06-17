/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPopoverController, UIActivityViewController, NSURL, _UIPreviewItemProxy, <UIDocumentInteractionControllerDelegate>, UIView, NSString, UIViewController, UIBarButtonItem, NSArray;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
    <UIDocumentInteractionControllerDelegate> *_delegate;
    id _previewItemProxy;
    NSArray *_icons;
    id _annotation;
    NSString *_uniqueIdentifier;
    UIViewController *_presentingViewController;
    id _previewController;
    NSArray *_gestureRecognizers;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSArray *_availableApplications;
    UIPopoverController *_popoverController;
    UIActivityViewController *_activityViewController;
    BOOL _shouldUnzipDocument;
    BOOL _sourceIsManaged;
    NSURL *_unzippedDocumentURL;
    id _applicationToOpen;
    NSURL *_tmpURLToDeleteOnDealloc;
    struct { 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateRectForPreview : 1; 
        unsigned int delegateViewForPreview : 1; 
        unsigned int transitionImageForPreview : 1; 
        unsigned int documentProxyForPreview : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateDidEndPreviewPreview : 1; 
        unsigned int delegateWillEndPreviewPreview : 1; 
        unsigned int delegateWillPresentOptionsMenu : 1; 
        unsigned int delegateDidDismissOptionsMenu : 1; 
        unsigned int delegateWillPresentOpenInMenu : 1; 
        unsigned int delegateDidDismissOpenInMenu : 1; 
        unsigned int delegateWillBeginSendingToApplication : 1; 
        unsigned int delegateDidEndSendingToApplication : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateUnzipURL : 1; 
        unsigned int showingOptionsMenu : 1; 
        unsigned int showingOpenInMenu : 1; 
        unsigned int delegateExcludesActivities : 1; 
        unsigned int delegateCanBlockRemoteImages : 1; 
        unsigned int delegateAddsActivities : 1; 
        unsigned int delegateProvidesActivityItem : 1; 
        unsigned int delegateProvidesPrintInfo : 1; 
        unsigned int performingActivity : 1; 
    } _documentInteractionControllerFlags;
}

@property(retain) NSString * uniqueIdentifier;
@property BOOL shouldUnzipDocument;
@property BOOL sourceIsManaged;
@property(getter=isArchive,readonly) BOOL archive;
@property <UIDocumentInteractionControllerDelegate> * delegate;
@property(retain) NSURL * URL;
@property(copy) NSString * UTI;
@property(copy) NSString * name;
@property(readonly) NSArray * icons;
@property(retain) id annotation;
@property(readonly) NSArray * gestureRecognizers;
@property(retain) NSString * uniqueIdentifier;
@property BOOL shouldUnzipDocument;
@property BOOL sourceIsManaged;
@property(retain) UIActivityViewController * activityViewController;
@property(getter=_performingActivity,setter=_setPerformingActivity:) BOOL performingActivity;
@property(readonly) id previewController;
@property(retain) UIPopoverController * popoverController;
@property(readonly) _UIPreviewItemProxy * previewItemProxy;

+ (id)_pathFilterPredicate;
+ (id)interactionControllerWithURL:(id)arg1;
+ (id)_unzippingQueue;
+ (id)_UTIForFileURL:(id)arg1;
+ (id)allActionSelectorNames;
+ (id)_applicationsForDocumentProxy:(id)arg1;
+ (void)initialize;

- (id)extractSubitemFromArchive:(id)arg1 completion:(id)arg2;
- (id)subitemsInArchive:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (BOOL)_canSaveToCameraRollForType;
- (BOOL)_isPackageArchive:(id)arg1;
- (id)_unzippedDocumentURL;
- (void)_setUnzippedDocumentURL:(id)arg1;
- (id)_pathsInArchive:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_presentOpenIn:(id)arg1;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)presentingNavigationController;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldUnzipDocument;
- (void)setUTI:(id)arg1;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (id)_unzipFileAndSetupPayload:(id)arg1 completion:(id)arg2;
- (BOOL)_isValidURL:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (BOOL)_isImageOrVideo;
- (BOOL)_delegateCanPerformAction:(SEL)arg1;
- (BOOL)_delegateImplementsLegacyActions;
- (void)_fixupFileExtensionIfNeeded;
- (id)_applicationToOpen;
- (void)_finishedCopyingResource;
- (id)annotation;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)_presentOptionsMenu:(id)arg1;
- (void)_presentPreview:(id)arg1;
- (BOOL)_setupForOpenInMenu;
- (BOOL)_canUnzipDocumentAndPresentOpenIn;
- (void)setSourceIsManaged:(BOOL)arg1;
- (id)previewController;
- (BOOL)_setupPreviewController;
- (BOOL)_documentNeedsHelpUnzippingForPreview;
- (BOOL)_canUnzipDocumentForPreview;
- (BOOL)isArchive;
- (void)_unzipFileAndSetupPayload:(id)arg1;
- (BOOL)_setupForOptionsMenu;
- (BOOL)_canUnzipDocumentAndPresentOptions;
- (BOOL)_canPreviewUnzippedDocument;
- (BOOL)_isImage;
- (BOOL)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(BOOL)arg2;
- (void)_interfaceOrientationWillChange:(id)arg1;
- (void)setShouldUnzipDocument:(BOOL)arg1;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg1;
- (void)openDocumentWithDefaultApplication;
- (unsigned int)applicationCount;
- (void)setPreviewURLOverride:(id)arg1;
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1;
- (id)_documentProxySourceIsManaged:(BOOL)arg1;
- (BOOL)_canUnzipDocument;
- (id)activityViewController;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewItemProxy;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (void)_openDocumentWithCurrentApplication;
- (void)_setApplicationToOpen:(id)arg1;
- (id)_applications:(BOOL)arg1;
- (id)UTI;
- (BOOL)_isVideo;
- (void)_setPerformingActivity:(BOOL)arg1;
- (BOOL)_performingActivity;
- (void)_activityControllerViewDidDismiss;
- (id)popoverController;
- (BOOL)sourceIsManaged;
- (BOOL)_delegatePerformAction:(SEL)arg1;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)_invalidate;
- (void)setPopoverController:(id)arg1;
- (void)setURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)icons;
- (id)gestureRecognizers;
- (id)delegate;
- (id)URL;
- (id)uniqueIdentifier;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
