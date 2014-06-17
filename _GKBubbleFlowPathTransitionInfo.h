/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIView, NSDictionary, NSArray;

@interface _GKBubbleFlowPathTransitionInfo : NSObject  {
    double _startTime;
    double _duration;
    NSArray *_bubbles;
    int _focusBubbleType;
    UIView *_effectiveView;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _bubbleStartPositionsByType[12];
    BOOL _couldUseFallbackAnimator;
    NSDictionary *_auxiliaryInfo;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _bubbleEndPositionsByType[12];
}

@property double startTime;
@property double duration;
@property UIView * effectiveView;
@property NSArray * bubbles;
@property int focusBubbleType;
@property BOOL couldUseFallbackAnimator;
@property(retain) NSDictionary * auxiliaryInfo;


- (id)bubbles;
- (void)setAuxiliaryInfo:(id)arg1;
- (id)auxiliaryInfo;
- (void)setCouldUseFallbackAnimator:(BOOL)arg1;
- (BOOL)couldUseFallbackAnimator;
- (void)setFocusBubbleType:(int)arg1;
- (int)focusBubbleType;
- (void)setBubbles:(id)arg1;
- (void)setEffectiveView:(id)arg1;
- (id)effectiveView;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (id)init;

@end
