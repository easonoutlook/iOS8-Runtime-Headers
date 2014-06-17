/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLayoutConstraint, NSArray, NSString, UIView, NSExtension, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol> {
    NSExtension *_extension;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSArray *_extensionItems;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    int _savedStatusBarStyle;
    BOOL _wasPresented;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _didFailLoadingRemoteViewController;
    BOOL _didCompleteSheet;
    int _maximumImageCount;
    int _maximumURLCount;
    int _maximumVideoCount;
    int _numVideosAdded;
    int _numImagesAdded;
    int _numURLsAdded;
    NSString *_serviceType;
    UIViewController *_remoteViewController;
}

@property(readonly) NSString * serviceType;
@property(copy) id completionHandler;
@property(retain) UIViewController * remoteViewController;

+ (BOOL)isAvailableForServiceType:(id)arg1;
+ (id)extensionIdentifierForActivityType:(id)arg1;
+ (id)composeViewControllerForExtensionIdentifier:(id)arg1;
+ (BOOL)isAvailableForExtensionIdentifier:(id)arg1;
+ (BOOL)_isAvailableForService:(id)arg1;
+ (id)_serviceTypeForExtensionIdentifier:(id)arg1;
+ (id)_extensionIdentifierForServiceType:(id)arg1;
+ (BOOL)_isServiceType:(id)arg1;
+ (id)_extensionIdentifierToServiceTypeMap;
+ (id)composeViewControllerForServiceType:(id)arg1;

- (BOOL)canSendTweet;
- (BOOL)removeAllURLs;
- (void)completeWithResult:(int)arg1;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)_handleRemoteViewFailure;
- (id)serviceType;
- (BOOL)addURL:(id)arg1;
- (BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (BOOL)addAttachment:(id)arg1;
- (BOOL)addImageAsset:(id)arg1;
- (BOOL)supportsImageAsset:(id)arg1;
- (BOOL)setInitialText:(id)arg1;
- (BOOL)addExtensionItem:(id)arg1;
- (BOOL)addItemProvider:(id)arg1;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (BOOL)removeAllImages;
- (BOOL)addImage:(id)arg1;
- (BOOL)_useCustomDimmingView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)completionHandler;
- (void)remoteViewControllerLoadDidTimeout;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)didLoadSheetViewController;
- (BOOL)_addVideoAsset:(id)arg1 preview:(id)arg2;
- (BOOL)_addVideoData:(id)arg1 preview:(id)arg2;
- (BOOL)_addURL:(id)arg1 type:(int)arg2 preview:(id)arg3;
- (BOOL)supportsVideoAsset:(id)arg1;
- (BOOL)_addImageJPEGData:(id)arg1 preview:(id)arg2;
- (BOOL)_addImageAsset:(id)arg1 preview:(id)arg2;
- (id)_urlForUntypedAsset:(id)arg1;
- (BOOL)canAddContent;
- (void)userDidPost;
- (void)userDidCancel;
- (id)initWithServiceType:(id)arg1;
- (void)dealloc;

@end
