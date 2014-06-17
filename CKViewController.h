/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKViewController : UIViewController  {
    BOOL _appeared;
    BOOL _appearing;
    BOOL _dissapearing;
}

@property BOOL appeared;
@property BOOL appearing;
@property BOOL dissapearing;


- (void)childViewControllersPerform:(SEL)arg1;
- (void)setAppeared:(BOOL)arg1;
- (void)setDissapearing:(BOOL)arg1;
- (void)parentControllerDidBecomeActive;
- (void)viewDidAppearDeferredSetup;
- (BOOL)appearing;
- (void)systemApplicationWillEnterForeground;
- (void)prepareForSuspend;
- (void)prepareForResume;
- (void)performResumeDeferredSetup;
- (BOOL)dissapearing;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (BOOL)appeared;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)significantTimeChange;
- (void)setAppearing:(BOOL)arg1;

@end
