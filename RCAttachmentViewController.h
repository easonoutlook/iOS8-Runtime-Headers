/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RCTapToRadarExtensionManager, RCRadarCoordinator, NSArray, RCActivityOverlay, RCImageCarouselCollectionViewController;

@interface RCAttachmentViewController : UITableViewController <UIDocumentInteractionControllerDelegate> {
    RCImageCarouselCollectionViewController *_imagePickerController;
    RCRadarCoordinator *_coordinator;
    NSArray *_extensions;
    RCTapToRadarExtensionManager *_extensionManager;
    RCActivityOverlay *_overlayController;
}

@property(retain) RCImageCarouselCollectionViewController * imagePickerController;
@property(retain) RCRadarCoordinator * coordinator;
@property(retain) NSArray * extensions;
@property(retain) RCTapToRadarExtensionManager * extensionManager;
@property(retain) RCActivityOverlay * overlayController;


- (void)setExtensionManager:(id)arg1;
- (id)extensionManager;
- (void)setExtensionIdentifier:(id)arg1 atIndexPath:(id)arg2 busy:(BOOL)arg3;
- (BOOL)isExtensionBusy:(id)arg1;
- (void)loggingNotEnabledAlertWithExtension:(id)arg1 andHandler:(id)arg2;
- (id)availableExtensions;
- (void)setExtensions:(id)arg1;
- (id)initWithCoordinator:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setOverlayController:(id)arg1;
- (id)overlayController;
- (void)_showOverlay;
- (id)coordinator;
- (id)extensions;
- (void)setImagePickerController:(id)arg1;
- (id)imagePickerController;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentInteractionControllerRectForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;

@end