/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class RCRadarComposeRemoteViewController, NSMutableDictionary;

@interface RCRadarComposeController : UIViewController <RCRadarComposeControllerDelegate> {
    NSMutableDictionary *_delayedActions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    float _originalKeyboardWindowLevel;
    RCRadarComposeRemoteViewController *_remoteViewController;
}

@property(retain) RCRadarComposeRemoteViewController * remoteViewController;

+ (id)composeControllerWithCompletionHander:(id)arg1;

- (BOOL)isTapToRadarEnabled;
- (void)takeScreenshotBeforeDisplay;
- (void)_addDelayedAction:(id)arg1 forEvent:(id)arg2;
- (void)completeWithResult:(int)arg1;
- (void)_performActionsForEvent:(id)arg1;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)_handleRemoteViewFailure;
- (void)loadServiceViewController;
- (void)attachItemsAtPaths:(id)arg1 options:(unsigned int)arg2 completion:(id)arg3;
- (void)attachImagesAtPaths:(id)arg1 completion:(id)arg2;
- (void)attachSystemLogsWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)attachData:(id)arg1 fileName:(id)arg2 options:(unsigned int)arg3 completion:(id)arg4;
- (void)canSendRadars:(id)arg1;
- (void)setReproducibility:(unsigned int)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)failedWithError:(id)arg1;
- (void)radarSent;
- (void)setComponent:(id)arg1;
- (void)setKeywords:(id)arg1;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCompletionHandler:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)userDidCancel;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setClassification:(unsigned int)arg1;
- (void)setDescription:(id)arg1;

@end
