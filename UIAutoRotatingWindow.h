/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutoRotatingWindow : UIWindow  {
    int _interfaceOrientation;
    BOOL _unknownOrientation;
}

+ (id)sharedPopoverHostingWindow;

- (void)commonInit;
- (void)updateForOrientation:(int)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 attached:(BOOL)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
