/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UIDelayedAction, TIHandwritingStrokes, _UIDynamicCaretDot;

@interface _UIDynamicCaretInput : UIView <UIKBHandwritingStrokeEnabled> {
    struct CGContext { } *_bitmapContext;
    int _fadeCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastViewLoc;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property(retain) NSTimer * fadeTimer;
@property(retain) TIHandwritingStrokes * accumulatedStrokes;
@property(retain) UIDelayedAction * committedAction;
@property(retain) _UIDynamicCaretDot * dotView;
@property(readonly) BOOL hasInk;
@property(readonly) BOOL isInking;
@property(readonly) float inkWidth;


- (void)cancelTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInking;
- (BOOL)hasInk;
- (void)endTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_fadeInk;
- (void)addInkPoint:(struct CGPoint { float x1; float x2; })arg1 fromLastPoint:(BOOL)arg2;
- (id)committedAction;
- (void)drawPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAccumulatedStrokes:(id)arg1;
- (void)clearAndNotify:(BOOL)arg1;
- (void)send;
- (float)inkWidth;
- (void)clearFadeTimer;
- (void)setFadeTimer:(id)arg1;
- (id)fadeTimer;
- (id)accumulatedStrokes;
- (id)dotView;
- (void)setDotView:(id)arg1;
- (void)setCommittedAction:(id)arg1;
- (void)committedStrokes;
- (void)log;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
