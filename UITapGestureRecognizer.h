/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer  {
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInView;
    id _imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    int _buttonType;
}

@property unsigned int numberOfTapsRequired;
@property unsigned int numberOfTouchesRequired;
@property(setter=_setButtonType:) int _buttonType;
@property(readonly) struct CGPoint { float x1; float x2; } centroid;
@property(readonly) struct CGPoint { float x1; float x2; } location;
@property(readonly) NSArray * touches;


- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1;
- (BOOL)_delaysRecognitionForGreaterTapCounts;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (double)maximumSingleTapDuration;
- (float)allowableMovement;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (id)touches;
- (struct CGPoint { float x1; float x2; })centroid;
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)_appendSubclassDescription:(id)arg1;
- (void)setAllowableMovement:(float)arg1;
- (void)_resetGestureRecognizer;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (struct CGPoint { float x1; float x2; })location;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouchesRequired;
- (void)_setButtonType:(int)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (unsigned int)numberOfTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (float)_touchSloppinessFactor;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (int)_buttonType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
