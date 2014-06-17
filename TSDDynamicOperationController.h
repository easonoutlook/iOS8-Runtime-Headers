/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInteractiveCanvasController, NSMutableSet, NSSet, TSDAutoscroll;

@interface TSDDynamicOperationController : NSObject  {
    TSDInteractiveCanvasController *mICC;
    BOOL mOperationIsDynamic;
    BOOL mResetGuides;
    BOOL mSupportsAlignmentGuides;
    BOOL mPossibleDynamicOperation;
    NSMutableSet *mReps;
    NSMutableSet *mAllTransformedReps;
    TSDAutoscroll *mAutoscroll;
}

@property(readonly) NSSet * allTransformedReps;
@property(readonly) NSSet * currentlyTransformingReps;


- (void)cancelOperation;
- (void)dealloc;
- (void)handleTrackerManipulator:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (void)beginOperation;
- (void)beginPossibleDynamicOperation;
- (void)endOperation;
- (void)p_resetGuidesForCleanup:(BOOL)arg1;
- (void)p_cleanupOperation;
- (BOOL)isOperationDynamic;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (BOOL)isInOperation;
- (BOOL)isInPossibleDynamicOperation;
- (void)startTransformingReps:(id)arg1;
- (void)stopTransformingReps:(id)arg1;
- (void)invalidateGuides;
- (id)currentlyTransformingReps;
- (id)allTransformedReps;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end
