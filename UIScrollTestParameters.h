/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject  {
    int _iterations;
    int _delta;
    int _scrollLength;
    float _startOffset;
    NSString *_currentTest;
    int _axis;
    CADisplayLink *_displayLink;
}

@property int iterations;
@property int delta;
@property int scrollLength;
@property float startOffset;
@property(readonly) float endOffset;
@property int axis;
@property(retain) NSString * currentTest;
@property(retain) CADisplayLink * displayLink;


- (void)setAxis:(int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setScrollLength:(int)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setIterations:(int)arg1;
- (int)iterations;
- (void)setDelta:(int)arg1;
- (float)startOffset;
- (float)endOffset;
- (int)delta;
- (int)axis;
- (int)scrollLength;
- (id)currentTest;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6;
- (void)dealloc;

@end
