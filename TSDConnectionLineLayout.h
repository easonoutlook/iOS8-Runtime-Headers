/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout  {
    float mStartClipT;
    float mEndClipT;
}


- (struct CGPoint { float x1; float x2; })controlPointForPointA:(struct CGPoint { float x1; float x2; })arg1 pointB:(struct CGPoint { float x1; float x2; })arg2 andOriginalA:(struct CGPoint { float x1; float x2; })arg3 originalB:(struct CGPoint { float x1; float x2; })arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint { float x1; float x2; }[3])arg3;
- (id)quadraticCurve:(struct CGPoint { float x1; float x2; }[3])arg1;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;

@end
