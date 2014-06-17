/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextKitSelectionRect : UITextSelectionRect  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rect;
    BOOL _containsEnd;
    BOOL _containsStart;
    BOOL _vertical;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rect;
@property BOOL containsStart;
@property BOOL containsEnd;
@property(getter=isVertical) BOOL vertical;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void)setVertical:(BOOL)arg1;
- (void)setContainsStart:(BOOL)arg1;
- (void)setContainsEnd:(BOOL)arg1;
- (BOOL)containsEnd;
- (int)writingDirection;
- (BOOL)containsStart;
- (BOOL)isVertical;
- (void)setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (id)description;

@end