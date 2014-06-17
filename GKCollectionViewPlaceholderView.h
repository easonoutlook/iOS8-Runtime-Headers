/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKPlaceholderContentStateMachine, UIActivityIndicatorView, NSString, GKPlaceholderView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate> {
    GKPlaceholderView *_placeholderView;
    NSString *_loadingState;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_errorTitle;
    NSString *_errorMessage;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
}

@property(retain) GKPlaceholderView * placeholderView;
@property(retain) NSString * loadingState;
@property(retain) NSString * noContentTitle;
@property(retain) NSString * noContentMessage;
@property(retain) NSString * errorTitle;
@property(retain) NSString * errorMessage;
@property(retain) UIActivityIndicatorView * loadingIndicatorView;
@property(retain) GKPlaceholderContentStateMachine * loadingMachine;


- (id)placeholderView;
- (void)setPlaceholderView:(id)arg1;
- (id)errorMessage;
- (id)errorTitle;
- (void)delayedShowLoadingIndicator;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (id)noContentMessage;
- (id)noContentTitle;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingMachine:(id)arg1;
- (id)loadingMachine;
- (void)didExitErrorState;
- (void)didExitNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (id)loadingState;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)didEnterErrorState;
- (void)didEnterNoContentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
