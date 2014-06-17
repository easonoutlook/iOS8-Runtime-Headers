/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult  {
    float _stemWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _stemLocation;
}

@property(readonly) struct CGPoint { float x1; float x2; } stemLocation;
@property(readonly) float stemWidth;


- (float)stemWidth;
- (struct CGPoint { float x1; float x2; })stemLocation;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5 stemLocation:(struct CGPoint { float x1; float x2; })arg6 stemWidth:(float)arg7;
- (id).cxx_construct;

@end
