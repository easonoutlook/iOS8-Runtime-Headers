/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDRep, TSDLayout;

@interface TSDConnectionLineKnobTracker : TSDKnobTracker <TSDLineTrackerModifiers> {
    TSDLayout *mOriginalConnectedFrom;
    TSDLayout *mOriginalConnectedTo;
    TSDRep *mConnectedRepForHighlighting;
    BOOL mInitialSnap;
    struct CGPoint { 
        float x; 
        float y; 
    } mInitialPosition;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mOriginalTransformInRoot;
    BOOL mKnobsVisible;
    BOOL mSnapEnabled;
    BOOL mSnapAngles;
    BOOL mResizeFromCenter;
}

@property BOOL snapEnabled;
@property BOOL snapAngles;
@property BOOL resizeFromCenter;


- (id)connectedRepForHighlighting;
- (void)setResizeFromCenter:(BOOL)arg1;
- (void)setSnapAngles:(BOOL)arg1;
- (BOOL)didChangeGeometry;
- (BOOL)snapAngles;
- (BOOL)resizeFromCenter;
- (void)setSnapEnabled:(BOOL)arg1;
- (BOOL)snapEnabled;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldHideOtherKnobs;
- (void)moveKnobToRepPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveKnobToCanvasPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)endMovingKnob;
- (void)beginMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end
