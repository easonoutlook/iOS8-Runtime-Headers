/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DChartRotationTouchHandler, TSCH3DChartRep;

@interface TSCH3DRotateKnobTracker : TSCHKnobTracker  {
    struct CGPoint { 
        float x; 
        float y; 
    } mStartingUnscaledCanvasPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } mLastUnscaledCanvasPosition;
    TSCH3DChartRotationTouchHandler *mTouchHandler;
}

@property(retain,readonly) TSCH3DChartRep * chartRep;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } rotation;


- (id).cxx_construct;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })rotation;
- (void)setRotation:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)dealloc;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (BOOL)wantsAutoscroll;
- (void)moveKnobToCanvasPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)endMovingKnob;
- (void)p_updateDrawableLayoutValues;
- (id)chartRep;
- (void)beginMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end
