/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {
    int _state;
    int _presentationState;
    int _value;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
}

@property int state;
@property int presentationState;
@property int value;
@property BOOL useSimplifiedEffect;
@property BOOL foregroundColorShouldTintEffects;


- (void)setUseSimplifiedEffect:(BOOL)arg1;
- (int)presentationState;
- (BOOL)foregroundColorShouldTintEffects;
- (BOOL)useSimplifiedEffect;
- (void)setPresentationState:(int)arg1;
- (BOOL)shouldIgnoreForegroundColor;
- (int)value;
- (void)setForegroundColorShouldTintEffects:(BOOL)arg1;
- (void)setValue:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)init;

@end
