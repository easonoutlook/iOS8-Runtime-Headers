/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, CKJoystickController, CKJoystickButtonItem, UIView, NSMutableArray;

@interface CKJoystickView : UIView  {
    BOOL _collapsed;
    BOOL _expanded;
    BOOL _autoDismiss;
    BOOL _delegateCollapsedWillChange;
    BOOL _touchInside;
    BOOL _dragging;
    CKJoystickButtonItem *_centerButtonItem;
    NSArray *_radialButtonItems;
    unsigned int _highlightStyle;
    CKJoystickController *_controller;
    CKJoystickButtonItem *_highlightedButtonItem;
    NSMutableArray *_allButtonItems;
    UIView *_discView;
    double _startAngle;
    double _endAngle;
    double _incrementAngle;
}

@property(retain) CKJoystickButtonItem * centerButtonItem;
@property(copy) NSArray * radialButtonItems;
@property unsigned int highlightStyle;
@property CKJoystickController * controller;
@property(getter=isCollapsed) BOOL collapsed;
@property(getter=isExpanded) BOOL expanded;
@property CKJoystickButtonItem * highlightedButtonItem;
@property BOOL autoDismiss;
@property BOOL delegateCollapsedWillChange;
@property(retain) NSMutableArray * allButtonItems;
@property(retain) UIView * discView;
@property double startAngle;
@property double endAngle;
@property double incrementAngle;
@property(getter=isTouchInside) BOOL touchInside;
@property(getter=isDragging) BOOL dragging;

+ (void)highlightAnimation:(id)arg1 completion:(id)arg2;
+ (void)expandAnimation:(id)arg1 completion:(id)arg2;
+ (void)collapseAnimation:(id)arg1 completion:(id)arg2;
+ (void)buttonChangeAnimation:(id)arg1 completion:(id)arg2;

- (void)setDelegateCollapsedWillChange:(BOOL)arg1;
- (BOOL)delegateCollapsedWillChange;
- (void)setAutoDismiss:(BOOL)arg1;
- (unsigned int)highlightStyle;
- (id)highlightedButtonItem;
- (BOOL)autoDismiss;
- (void)setTouchInside:(BOOL)arg1;
- (id)buttonItemAtPoint:(struct CGPoint { float x1; float x2; })arg1 velocity:(struct CGPoint { float x1; float x2; })arg2;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setDragging:(BOOL)arg1;
- (void)highlightButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setIncrementAngle:(double)arg1;
- (double)endAngle;
- (void)setRadialButtonItems:(id)arg1;
- (void)setHighlightedButtonItem:(id)arg1;
- (id)allButtonItems;
- (void)setCenterButtonItem:(id)arg1;
- (void)setRadialButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setAllButtonItems:(id)arg1;
- (void)setDiscView:(id)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setHighlightStyle:(unsigned int)arg1;
- (double)incrementAngle;
- (id)radialButtonItems;
- (id)discView;
- (id)centerButtonItem;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 highlightStyle:(unsigned int)arg6;
- (void)setCenterButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)joystickGestureRecognized:(id)arg1;
- (double)startAngle;
- (void)setStartAngle:(double)arg1;
- (void)setController:(id)arg1;
- (id)controller;
- (void)setExpanded:(BOOL)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (BOOL)isCollapsed;
- (BOOL)isExpanded;
- (BOOL)isTouchInside;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isDragging;
- (void)layoutSubviews;
- (void)dealloc;

@end
