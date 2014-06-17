/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UIColor, STShadowBlurRadiusAnimation;

@interface STShadowLabel : UILabel  {
    UIColor *_auxiliaryShadowColor;
    float _auxiliaryShadowBlurRadius;
    BOOL _animating;
    BOOL _phase;
    float _animatedAuxiliaryShadowBlurRadius;
    STShadowBlurRadiusAnimation *_pulseAnimation;
}


- (void)_updateShadowBlurRadiusWithProgress:(float)arg1;
- (void)stopPulse;
- (void)startPulse;
- (void)setAuxiliaryShadowBlurRadius:(float)arg1;
- (void)setAuxiliaryShadowColor:(id)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;

@end
