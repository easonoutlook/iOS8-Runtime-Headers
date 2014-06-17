/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying> {
    unsigned int _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    int _interpolationMode;
    int _repeatMode;
    struct SKCKeyframeSequence { int x1; int x2; int x3; int x4; float *x5; float *x6; } *_cKeyframeSequence;
}

@property int interpolationMode;
@property int repeatMode;


- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)sampleAtTime:(float)arg1;
- (void)setKeyframeValue:(id)arg1 time:(float)arg2 forIndex:(unsigned int)arg3;
- (void)removeKeyframeAtIndex:(unsigned int)arg1;
- (void)removeAllKeyframes;
- (void)removeLastKeyframe;
- (void)addKeyframeValue:(id)arg1 time:(float)arg2;
- (Class)_valueClass;
- (struct SKCKeyframeSequence { int x1; int x2; int x3; int x4; float *x5; float *x6; }*)_createSKCKeyframeSequence;
- (void)setKeyframeTime:(float)arg1 forIndex:(unsigned int)arg2;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned int)arg2;
- (void)_dirtySKCKeyframeSequence;
- (void)setInterpolationMode:(int)arg1;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (id)getKeyframeValueForIndex:(unsigned int)arg1;
- (float)getKeyframeTimeForIndex:(unsigned int)arg1;
- (int)interpolationMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)copy;
- (unsigned int)count;
- (id)initWithCount:(unsigned int)arg1;

@end