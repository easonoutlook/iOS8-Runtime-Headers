/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRect;
    int _arrowDirection;
}

@property(getter=isMenuVisible) BOOL menuVisible;
@property int arrowDirection;
@property(copy) NSArray * menuItems;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } menuFrame;

+ (id)sharedMenuController;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(BOOL)arg1;
- (BOOL)_menuHidden;
- (void)_windowWillRotate:(id)arg1;
- (BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;
- (void)setArrowDirection:(int)arg1;
- (int)arrowDirection;
- (void)update;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isMenuVisible;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end
