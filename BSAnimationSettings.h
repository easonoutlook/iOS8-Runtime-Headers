/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class CAMediaTimingFunction;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {
    double _duration;
    double _delay;
    double _frameInterval;
    CAMediaTimingFunction *_timingFunction;
}

@property(readonly) double duration;
@property(readonly) double delay;
@property(readonly) double frameInterval;
@property(retain,readonly) CAMediaTimingFunction * timingFunction;

+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)settingsWithDuration:(double)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_setFrameInterval:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (void)_setDelay:(double)arg1;
- (BOOL)isSpringAnimation;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (double)frameInterval;
- (id)timingFunction;
- (void)_setDuration:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)duration;
- (void)dealloc;
- (id)init;

@end
