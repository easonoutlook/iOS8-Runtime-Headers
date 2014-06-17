/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMorphingLabelGlyphSet, _UIViewAnimationAttributes, NSString, UIColor, NSMutableArray, UIFont;

@interface UIMorphingLabel : UIView  {
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    struct { 
        unsigned int len; 
        unsigned int dir; 
    } _memo[51][51];
    struct { 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } src; 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } dst; 
        BOOL isEqual; 
    } _alignment[100];
    unsigned int _alignmentSize;
    _UIViewAnimationAttributes *_animationAttributes;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    int _textAlignment;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleRect;
}

@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int textAlignment;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;


- (BOOL)canFitText:(id)arg1;
- (void)animateShowGlyph:(id)arg1 delay:(float)arg2;
- (float)requiredWidthForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
- (void)saveAnimationAttributes;
- (id)attributedStringForText:(id)arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)calculateGlyphAlignment;
- (void)animateMovementFromGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)animateSubstitutionFromGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)animateDeletionOfGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atIndex:(unsigned int)arg2;
- (void)animateInsertionAtIndex:(unsigned int)arg1 ofGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateHideGlyph:(id)arg1 delay:(float)arg2;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint { float x1; float x2; })arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(float)arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg1 toScale:(float)arg2 delay:(float)arg3;
- (void)animateShowGlyph:(id)arg1 alpha:(float)arg2 delay:(float)arg3;
- (id)uniqueStringWithPrefix:(id)arg1;
- (unsigned int)calculateHardAlignment:(struct { struct _NSRange { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; BOOL x3; }*)arg1 size:(unsigned int)arg2 fromGlyphs:(const unsigned short*)arg3 count:(unsigned int)arg4 toGlyphs:(const unsigned short*)arg5 count:(unsigned int)arg6;
- (float)alphaForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)baseInit;
- (void)hideGlyph:(id)arg1;
- (id)glyphViewWithImage:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)attributedString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (int)textAlignment;
- (id)textColor;
- (id)font;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
