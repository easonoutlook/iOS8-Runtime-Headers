/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSLayoutConstraint, NSArray, UIView, UIScrollView;

@interface GKBubbleDetailViewController : GKViewController <UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIView *_rootLayoutView;
    NSArray *_bubbleViews;
    NSLayoutConstraint *_containerConstraint;
    id _scrollInsetsToken;
}

@property(retain) UIScrollView * scrollView;
@property(retain) UIView * containerView;
@property(retain) UIView * rootLayoutView;
@property(retain) NSArray * bubbleViews;
@property(retain) NSLayoutConstraint * containerConstraint;
@property(retain) id scrollInsetsToken;


- (id)scrollInsetsToken;
- (void)setBubbleViews:(id)arg1;
- (id)rootLayoutView;
- (id)bubbleViews;
- (id)containerConstraint;
- (float)heightConstant;
- (void)setScrollInsetsToken:(id)arg1;
- (void)setContainerConstraint:(id)arg1;
- (void)setRootLayoutView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)scrollView;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setScrollView:(id)arg1;
- (id)containerView;
- (void)dealloc;

@end
