/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet, NSSet, UIGestureRecognizer;

@interface MFComposeScrollView : UIScrollView  {
    UIGestureRecognizer *_singleTapGestureRecognizer;
    NSMutableSet *_disabledSubviews;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
    int _scrollBlocked;
    BOOL _shouldScrollToFirstResponder;
    BOOL _subviewsDisabled;
}

@property BOOL subviewsDisabled;
@property(readonly) NSSet * disabledSubviews;
@property BOOL shouldScrollToFirstResponder;


- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)subviewsDisabled;
- (BOOL)shouldScrollToFirstResponder;
- (void)enableSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (void)setSubviewsDisabled:(BOOL)arg1;
- (id)disabledSubviews;
- (void)setShouldScrollToFirstResponder:(BOOL)arg1;
- (void)endBlockingScroll;
- (void)beginBlockingScroll;
- (void)dealloc;

@end