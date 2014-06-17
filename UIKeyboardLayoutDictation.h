/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, UIKBBackgroundView;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout  {
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (float)portraitHeight;
+ (float)landscapeHeight;
+ (id)activeInstance;

- (struct CGSize { float x1; float x2; })splitLeftSize;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (BOOL)visible;
- (BOOL)usesAutoShift;
- (BOOL)shouldFadeToLayout;
- (BOOL)shouldFadeFromLayout;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)currentKeyplane;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (void)setRenderConfig:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
