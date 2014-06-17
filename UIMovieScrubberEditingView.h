/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView  {
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
    BOOL _enabled;
    BOOL _editing;
    float _edgeInset;
}

@property(getter=isEnabled) BOOL enabled;
@property(getter=isEditing) BOOL editing;
@property float edgeInset;


- (BOOL)pointInsideRightHandle:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointInsideLeftHandle:(struct CGPoint { float x1; float x2; })arg1;
- (float)_bounceValueForFraction:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rightHandleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftHandleRect;
- (id)_handleImages;
- (void)_updateHandleImages;
- (float)edgeInset;
- (int)handleForPoint:(struct CGPoint { float x1; float x2; })arg1 hitOffset:(float*)arg2;
- (void)bounce;
- (void)setEdgeInset:(float)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
