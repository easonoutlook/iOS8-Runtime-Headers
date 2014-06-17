/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBStretchFilter : PBFilter  {
    boolfirstTime;
    float lastInputX;
    float lastInputY;
    struct CGPoint { 
        float x; 
        float y; 
    } inputPoint;
}

@property struct CGPoint { float x1; float x2; } inputPoint;


- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)needsWrapMirror;
- (id)ciFilterName;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDefaults;
- (struct CGPoint { float x1; float x2; })inputPoint;

@end
